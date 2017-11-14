/* 
 * This file is part of the Hawkbeans JVM developed by
 * the HExSA Lab at Illinois Institute of Technology.
 *
 * Copyright (c) 2017, Kyle C. Hale <khale@cs.iit.edu>
 *
 * All rights reserved.
 *
 * Author: Kyle C. Hale <khale@cs.iit.edu>
 *
 * This is free software.  You are permitted to use,
 * redistribute, and modify it as specified in the 
 * file "LICENSE.txt".
 */
#ifndef __METHODS_H__
#define __METHODS_H__

#define ACC_PUBLIC	0x0001	//Declared public; may be accessed from outside its package.
#define ACC_PRIVATE	0x0002	// Declared private; accessible only within the defining class.
#define ACC_PROTECTED	0x0004	// Declared protected; may be accessed within subclasses.
#define ACC_STATIC	0x0008	// Declared static.
#define ACC_FINAL	0x0010	// Declared final; must not be overridden (§5.4.5).
#define ACC_SYNCHRONIZED	0x0020	// Declared synchronized; invocation is wrapped by a monitor use.
#define ACC_BRIDGE	0x0040	// A bridge method, generated by the compiler.
#define ACC_VARARGS	0x0080	// Declared with variable number of arguments.
#define ACC_NATIVE	0x0100	// Declared native; implemented in a language other than Java.
#define ACC_ABSTRACT	0x0400	// Declared abstract; no implementation is provided.
#define ACC_STRICT	0x0800	// Declared strictfp; floating-point mode is FP-strict.
#define ACC_SYNTHETIC	0x1000	// Declared synthetic; not present in the source code.

#endif
