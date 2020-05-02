/**
 * @file    server.h
 * @brief   Methods related to the server side.
 * @date    2020-04-28
 */
#ifndef SERVER_H
#define SERVER_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <pthread.h>
#include <fcntl.h>

#include "../util/error.h"
#include "../util/utils.h"
#include "../util/message.h"

/**
 * @brief   Initializes the program alarm.
 */
void init_alarm();

/**
 * @brief   Alarm handler. Removes the program resources.
 * 
 * @param signo the signal number
 */
void terminate(int signo);

/**
 * @brief   Destroys the public FIFO.
 */
void destroy_fifo();

/**
 * @brief   Initializes the SIGINT handling.
 */
void init_sigint();

/**
 * @brief   SIGINT handler. Removes the program resource before stopping.
 * 
 * @param signo signo the signal number
 */
void sigint_handler(int signo);

#endif