/**
 * @file main.c
 * @brief Main entry point to the Final Assessment
 *
 * This file contains the main code for the Final assesment. call a function that is defined in the course1.c source file.
 * A compile time switch wraps this function to call. main() function can switch which course deliverable is being intended
 * to be called by specifying the -DCOURSE1 compile time switch.
 *
 * @author Braulio Peraza
 * @date October 2020
 *
 */

#include "course1.h"
#include "platform.h"
#include "memory.h"
#include "data.h"
#include "stats.h"

int main ()
{
#ifdef COURSE1
  course1();
#endif
}

