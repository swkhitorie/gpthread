#ifndef APP_FATFS_TEST_H_
#define APP_FATFS_TEST_H_

#include "ff.h"

#ifdef __cplusplus
extern "C" {
#endif

void ff_ls(const char *path);

void ff_cat(char *path);

#ifdef __cplusplus
}
#endif

#endif
