/* 
 * All copyright (c), Nil
 * Reserved
 *
 * Filename: io_efficiency_test_3_5.c
 * File Id: Test
 * Abstract: test the effectives of buffer lenght to read/write
 *
 * Current version: 1.0
 * Author: Nil
 * Date: Thu Feb 23 11:47:48 CST 2017
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

//#include <apue.h>

#define LENGTH 4096

int main()
{
    int ret;
    char buffer[LENGTH];
    size_t size;

    while ((size = read(STDIN_FILENO, buffer, LENGTH)) > 0) {
        if (size != write(STDOUT_FILENO, buffer, size)) {
            printf("write error: %d\n", errno);
            exit(1);
        }
    }
    exit(0);
}



