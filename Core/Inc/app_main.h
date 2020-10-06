#ifndef _APP_MAIN_H_
#define _APP_MAIN_H_

#include <stdint.h>
#include "cmsis_os.h"

#ifdef __cplusplus
extern "C" {
#endif



// tread handlers
osThreadId_t  appMain_handle;
osThreadId_t  dummy_handle;


void appMain(void* args);
void dummy(void* args);

#ifdef __cplusplus
}
#endif

#endif // _APP_MAIN_H_
