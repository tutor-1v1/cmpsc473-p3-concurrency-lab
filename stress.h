https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef STRESS_H
#define STRESS_H
#include <unistd.h>
#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#include "driver.h"
void run_stress(size_t buffer_size, const char* filename);

#endif
