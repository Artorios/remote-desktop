/*
* PROJECT:         Aspia Remote Desktop
* FILE:            desktop_capture/capture_scheduler.h
* LICENSE:         See top-level directory
* PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
*/

#ifndef ASPIA_DESKTOP_CAPTURE__CAPTURE_SCHEDULER_H_
#define ASPIA_DESKTOP_CAPTURE__CAPTURE_SCHEDULER_H_

#include "aspia_config.h"

#include <stdint.h>

#include "base/macros.h"

namespace aspia {

class CaptureScheduler
{
public:
    CaptureScheduler();
    ~CaptureScheduler();

    void Sleep();
    void BeginCapture();

private:
    int resolution_;
    DWORD begin_time_;

    DISALLOW_COPY_AND_ASSIGN(CaptureScheduler);
};

} // namespace aspia

#endif // ASPIA_DESKTOP_CAPTURE__CAPTURE_SCHEDULER_H_
