/*
    Copyright (c) 2018-2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Tasks/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_TASKS_SYNCFUNCTIONTASK_H_
#define _ISHIKO_TASKS_SYNCFUNCTIONTASK_H_

#include "Task.h"
#include <functional>

namespace Ishiko
{

class SyncFunctionTask : public Task
{
public:
    SyncFunctionTask(std::function<void()> fct);

    void doRun() override;

private:
    std::function<void()> m_task;
};

}

#include "linkoptions.h"

#endif
