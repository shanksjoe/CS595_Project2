#ifndef __CONFIG_H__
#define __CONFIG_H__


/* 
 * TOP LEVEL DEBUGGING */
/* This must be set to one to enable any of
 * the below prints 
 */
#define DEBUG_ENABLE 1

/* 
 * each of these enables debugging prints 
 * for a particular component
 */
#define DEBUG_INTERP 1 // bytecode interpreter
#define DEBUG_GC     0 // garbage collector
#define DEBUG_MM     0 // memory manager
#define DEBUG_BUDDY  0 // buddy allocator
#define DEBUG_EXCP   0 // exceptions
#define DEBUG_CLASS  1 // class loading/resolution etc
#define DEBUG_NATIVE 0 // native methods
#define DEBUG_THREAD 0 // threads
#define DEBUG_STACK  0 // stack frames etc




#endif
