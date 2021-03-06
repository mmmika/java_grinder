/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2014-2018 by Michael Kohn
 *
 */

#include "table_java_instr.h"

struct table_java_instr_t table_java_instr[] =
{
  { "nop", 1, 0, OP_TYPE_UNKNOWN }, // nop (0x00)
  { "aconst_null", 1, 0, OP_TYPE_UNKNOWN }, // aconst_null (0x01)
  { "iconst_m1", 1, 0, OP_TYPE_UNKNOWN }, // iconst_m1 (0x02)
  { "iconst_0", 1, 0, OP_TYPE_CONST }, // iconst_0 (0x03)
  { "iconst_1", 1, 0, OP_TYPE_CONST }, // iconst_1 (0x04)
  { "iconst_2", 1, 0, OP_TYPE_CONST }, // iconst_2 (0x05)
  { "iconst_3", 1, 0, OP_TYPE_CONST }, // iconst_3 (0x06)
  { "iconst_4", 1, 0, OP_TYPE_CONST }, // iconst_4 (0x07)
  { "iconst_5", 1, 0, OP_TYPE_CONST }, // iconst_5 (0x08)
  { "lconst_0", 1, 0, OP_TYPE_CONST }, // lconst_0 (0x09)
  { "lconst_1", 1, 0, OP_TYPE_CONST }, // lconst_1 (0x0a)
  { "fconst_0", 1, 0, OP_TYPE_CONST }, // fconst_0 (0x0b)
  { "fconst_1", 1, 0, OP_TYPE_CONST }, // fconst_1 (0x0c)
  { "fconst_2", 1, 0, OP_TYPE_CONST }, // fconst_2 (0x0d)
  { "dconst_0", 1, 0, OP_TYPE_CONST }, // dconst_0 (0x0e)
  { "dconst_1", 1, 0, OP_TYPE_CONST }, // dconst_1 (0x0f)
  { "bipush", 2, 0, OP_TYPE_UNKNOWN }, // bipush (0x10)
  { "sipush", 3, 0, OP_TYPE_UNKNOWN }, // sipush (0x11)
  { "ldc", 2, 0, OP_TYPE_UNKNOWN }, // ldc (0x12)
  { "ldc_w", 3, 0, OP_TYPE_UNKNOWN }, // ldc_w (0x13)
  { "ldc2_w", 3, 0, OP_TYPE_UNKNOWN }, // ldc2_w (0x14)
  { "iload", 2, 3, OP_TYPE_UNKNOWN }, // iload (0x15)
  { "lload", 2, 3, OP_TYPE_UNKNOWN }, // lload (0x16)
  { "fload", 2, 3, OP_TYPE_UNKNOWN }, // fload (0x17)
  { "dload", 2, 3, OP_TYPE_UNKNOWN }, // dload (0x18)
  { "aload", 2, 3, OP_TYPE_UNKNOWN }, // aload (0x19)
  { "iload_0", 1, 0, OP_TYPE_UNKNOWN }, // iload_0 (0x1a)
  { "iload_1", 1, 0, OP_TYPE_UNKNOWN }, // iload_1 (0x1b)
  { "iload_2", 1, 0, OP_TYPE_UNKNOWN }, // iload_2 (0x1c)
  { "iload_3", 1, 0, OP_TYPE_UNKNOWN }, // iload_3 (0x1d)
  { "lload_0", 1, 0, OP_TYPE_UNKNOWN }, // lload_0 (0x1e)
  { "lload_1", 1, 0, OP_TYPE_UNKNOWN }, // lload_1 (0x1f)
  { "lload_2", 1, 0, OP_TYPE_UNKNOWN }, // lload_2 (0x20)
  { "lload_3", 1, 0, OP_TYPE_UNKNOWN }, // lload_3 (0x21)
  { "fload_0", 1, 0, OP_TYPE_UNKNOWN }, // fload_0 (0x22)
  { "fload_1", 1, 0, OP_TYPE_UNKNOWN }, // fload_1 (0x23)
  { "fload_2", 1, 0, OP_TYPE_UNKNOWN }, // fload_2 (0x24)
  { "fload_3", 1, 0, OP_TYPE_UNKNOWN }, // fload_3 (0x25)
  { "dload_0", 1, 0, OP_TYPE_UNKNOWN }, // dload_0 (0x26)
  { "dload_1", 1, 0, OP_TYPE_UNKNOWN }, // dload_1 (0x27)
  { "dload_2", 1, 0, OP_TYPE_UNKNOWN }, // dload_2 (0x28)
  { "dload_3", 1, 0, OP_TYPE_UNKNOWN }, // dload_3 (0x29)
  { "aload_0", 1, 0, OP_TYPE_UNKNOWN }, // aload_0 (0x2a)
  { "aload_1", 1, 0, OP_TYPE_UNKNOWN }, // aload_1 (0x2b)
  { "aload_2", 1, 0, OP_TYPE_UNKNOWN }, // aload_2 (0x2c)
  { "aload_3", 1, 0, OP_TYPE_UNKNOWN }, // aload_3 (0x2d)
  { "iaload", 1, 0, OP_TYPE_UNKNOWN }, // iaload (0x2e)
  { "laload", 1, 0, OP_TYPE_UNKNOWN }, // laload (0x2f)
  { "faload", 1, 0, OP_TYPE_UNKNOWN }, // faload (0x30)
  { "daload", 1, 0, OP_TYPE_UNKNOWN }, // daload (0x31)
  { "aaload", 1, 0, OP_TYPE_UNKNOWN }, // aaload (0x32)
  { "baload", 1, 0, OP_TYPE_UNKNOWN }, // baload (0x33)
  { "caload", 1, 0, OP_TYPE_UNKNOWN }, // caload (0x34)
  { "saload", 1, 0, OP_TYPE_UNKNOWN }, // saload (0x35)
  { "istore", 2, 3, OP_TYPE_UNKNOWN }, // istore (0x36)
  { "lstore", 2, 3, OP_TYPE_UNKNOWN }, // lstore (0x37)
  { "fstore", 2, 3, OP_TYPE_UNKNOWN }, // fstore (0x38)
  { "dstore", 2, 3, OP_TYPE_UNKNOWN }, // dstore (0x39)
  { "astore", 2, 3, OP_TYPE_UNKNOWN }, // astore (0x3a)
  { "istore_0", 1, 0, OP_TYPE_UNKNOWN }, // istore_0 (0x3b)
  { "istore_1", 1, 0, OP_TYPE_UNKNOWN }, // istore_1 (0x3c)
  { "istore_2", 1, 0, OP_TYPE_UNKNOWN }, // istore_2 (0x3d)
  { "istore_3", 1, 0, OP_TYPE_UNKNOWN }, // istore_3 (0x3e)
  { "lstore_0", 1, 0, OP_TYPE_UNKNOWN }, // lstore_0 (0x3f)
  { "lstore_1", 1, 0, OP_TYPE_UNKNOWN }, // lstore_1 (0x40)
  { "lstore_2", 1, 0, OP_TYPE_UNKNOWN }, // lstore_2 (0x41)
  { "lstore_3", 1, 0, OP_TYPE_UNKNOWN }, // lstore_3 (0x42)
  { "fstore_0", 1, 0, OP_TYPE_UNKNOWN }, // fstore_0 (0x43)
  { "fstore_1", 1, 0, OP_TYPE_UNKNOWN }, // fstore_1 (0x44)
  { "fstore_2", 1, 0, OP_TYPE_UNKNOWN }, // fstore_2 (0x45)
  { "fstore_3", 1, 0, OP_TYPE_UNKNOWN }, // fstore_3 (0x46)
  { "dstore_0", 1, 0, OP_TYPE_UNKNOWN }, // dstore_0 (0x47)
  { "dstore_1", 1, 0, OP_TYPE_UNKNOWN }, // dstore_1 (0x48)
  { "dstore_2", 1, 0, OP_TYPE_UNKNOWN }, // dstore_2 (0x49)
  { "dstore_3", 1, 0, OP_TYPE_UNKNOWN }, // dstore_3 (0x4a)
  { "astore_0", 1, 0, OP_TYPE_UNKNOWN }, // astore_0 (0x4b)
  { "astore_1", 1, 0, OP_TYPE_UNKNOWN }, // astore_1 (0x4c)
  { "astore_2", 1, 0, OP_TYPE_UNKNOWN }, // astore_2 (0x4d)
  { "astore_3", 1, 0, OP_TYPE_UNKNOWN }, // astore_3 (0x4e)
  { "iastore", 1, 0, OP_TYPE_UNKNOWN }, // iastore (0x4f)
  { "lastore", 1, 0, OP_TYPE_UNKNOWN }, // lastore (0x50)
  { "fastore", 1, 0, OP_TYPE_UNKNOWN }, // fastore (0x51)
  { "dastore", 1, 0, OP_TYPE_UNKNOWN }, // dastore (0x52)
  { "aastore", 1, 0, OP_TYPE_UNKNOWN }, // aastore (0x53)
  { "bastore", 1, 0, OP_TYPE_UNKNOWN }, // bastore (0x54)
  { "castore", 1, 0, OP_TYPE_UNKNOWN }, // castore (0x55)
  { "sastore", 1, 0, OP_TYPE_UNKNOWN }, // sastore (0x56)
  { "pop", 1, 0, OP_TYPE_UNKNOWN }, // pop (0x57)
  { "pop2", 1, 0, OP_TYPE_UNKNOWN }, // pop2 (0x58)
  { "dup", 1, 0, OP_TYPE_UNKNOWN }, // dup (0x59)
  { "dup_x1", 1, 0, OP_TYPE_UNKNOWN }, // dup_x1 (0x5a)
  { "dup_x2", 1, 0, OP_TYPE_UNKNOWN }, // dup_x2 (0x5b)
  { "dup2", 1, 0, OP_TYPE_UNKNOWN }, // dup2 (0x5c)
  { "dup2_x1", 1, 0, OP_TYPE_UNKNOWN }, // dup2_x1 (0x5d)
  { "dup2_x2", 1, 0, OP_TYPE_UNKNOWN }, // dup2_x2 (0x5e)
  { "swap", 1, 0, OP_TYPE_UNKNOWN }, // swap (0x5f)
  { "iadd", 1, 0, OP_TYPE_UNKNOWN }, // iadd (0x60)
  { "ladd", 1, 0, OP_TYPE_UNKNOWN }, // ladd (0x61)
  { "fadd", 1, 0, OP_TYPE_UNKNOWN }, // fadd (0x62)
  { "dadd", 1, 0, OP_TYPE_UNKNOWN }, // dadd (0x63)
  { "isub", 1, 0, OP_TYPE_UNKNOWN }, // isub (0x64)
  { "lsub", 1, 0, OP_TYPE_UNKNOWN }, // lsub (0x65)
  { "fsub", 1, 0, OP_TYPE_UNKNOWN }, // fsub (0x66)
  { "dsub", 1, 0, OP_TYPE_UNKNOWN }, // dsub (0x67)
  { "imul", 1, 0, OP_TYPE_UNKNOWN }, // imul (0x68)
  { "lmul", 1, 0, OP_TYPE_UNKNOWN }, // lmul (0x69)
  { "fmul", 1, 0, OP_TYPE_UNKNOWN }, // fmul (0x6a)
  { "dmul", 1, 0, OP_TYPE_UNKNOWN }, // dmul (0x6b)
  { "idiv", 1, 0, OP_TYPE_UNKNOWN }, // idiv (0x6c)
  { "ldiv", 1, 0, OP_TYPE_UNKNOWN }, // ldiv (0x6d)
  { "fdiv", 1, 0, OP_TYPE_UNKNOWN }, // fdiv (0x6e)
  { "ddiv", 1, 0, OP_TYPE_UNKNOWN }, // ddiv (0x6f)
  { "irem", 1, 0, OP_TYPE_UNKNOWN }, // irem (0x70)
  { "lrem", 1, 0, OP_TYPE_UNKNOWN }, // lrem (0x71)
  { "frem", 1, 0, OP_TYPE_UNKNOWN }, // frem (0x72)
  { "drem", 1, 0, OP_TYPE_UNKNOWN }, // drem (0x73)
  { "ineg", 1, 0, OP_TYPE_UNKNOWN }, // ineg (0x74)
  { "lneg", 1, 0, OP_TYPE_UNKNOWN }, // lneg (0x75)
  { "fneg", 1, 0, OP_TYPE_UNKNOWN }, // fneg (0x76)
  { "dneg", 1, 0, OP_TYPE_UNKNOWN }, // dneg (0x77)
  { "ishl", 1, 0, OP_TYPE_UNKNOWN }, // ishl (0x78)
  { "lshl", 1, 0, OP_TYPE_UNKNOWN }, // lshl (0x79)
  { "ishr", 1, 0, OP_TYPE_UNKNOWN }, // ishr (0x7a)
  { "lshr", 1, 0, OP_TYPE_UNKNOWN }, // lshr (0x7b)
  { "iushr", 1, 0, OP_TYPE_UNKNOWN }, // iushr (0x7c)
  { "lushr", 1, 0, OP_TYPE_UNKNOWN }, // lushr (0x7d)
  { "iand", 1, 0, OP_TYPE_UNKNOWN }, // iand (0x7e)
  { "land", 1, 0, OP_TYPE_UNKNOWN }, // land (0x7f)
  { "ior", 1, 0, OP_TYPE_UNKNOWN }, // ior (0x80)
  { "lor", 1, 0, OP_TYPE_UNKNOWN }, // lor (0x81)
  { "ixor", 1, 0, OP_TYPE_UNKNOWN }, // ixor (0x82)
  { "lxor", 1, 0, OP_TYPE_UNKNOWN }, // lxor (0x83)
  { "iinc", 3, 5, OP_TYPE_UNKNOWN }, // iinc (0x84)
  { "i2l", 1, 0, OP_TYPE_UNKNOWN }, // i2l (0x85)
  { "i2f", 1, 0, OP_TYPE_UNKNOWN }, // i2f (0x86)
  { "i2d", 1, 0, OP_TYPE_UNKNOWN }, // i2d (0x87)
  { "l2i", 1, 0, OP_TYPE_UNKNOWN }, // l2i (0x88)
  { "l2f", 1, 0, OP_TYPE_UNKNOWN }, // l2f (0x89)
  { "l2d", 1, 0, OP_TYPE_UNKNOWN }, // l2d (0x8a)
  { "f2i", 1, 0, OP_TYPE_UNKNOWN }, // f2i (0x8b)
  { "f2l", 1, 0, OP_TYPE_UNKNOWN }, // f2l (0x8c)
  { "f2d", 1, 0, OP_TYPE_UNKNOWN }, // f2d (0x8d)
  { "d2i", 1, 0, OP_TYPE_UNKNOWN }, // d2i (0x8e)
  { "d2l", 1, 0, OP_TYPE_UNKNOWN }, // d2l (0x8f)
  { "d2f", 1, 0, OP_TYPE_UNKNOWN }, // d2f (0x90)
  { "i2b", 1, 0, OP_TYPE_UNKNOWN }, // i2b (0x91)
  { "i2c", 1, 0, OP_TYPE_UNKNOWN }, // i2c (0x92)
  { "i2s", 1, 0, OP_TYPE_UNKNOWN }, // i2s (0x93)
  { "lcmp", 1, 0, OP_TYPE_UNKNOWN }, // lcmp (0x94)
  { "fcmpl", 1, 0, OP_TYPE_UNKNOWN }, // fcmpl (0x95)
  { "fcmpg", 1, 0, OP_TYPE_UNKNOWN }, // fcmpg (0x96)
  { "dcmpl", 1, 0, OP_TYPE_UNKNOWN }, // dcmpl (0x97)
  { "dcmpg", 1, 0, OP_TYPE_UNKNOWN }, // dcmpg (0x98)
  { "ifeq", 3, 0, OP_TYPE_IF }, // ifeq (0x99)
  { "ifne", 3, 0, OP_TYPE_IF }, // ifne (0x9a)
  { "iflt", 3, 0, OP_TYPE_IF }, // iflt (0x9b)
  { "ifge", 3, 0, OP_TYPE_IF }, // ifge (0x9c)
  { "ifgt", 3, 0, OP_TYPE_IF }, // ifgt (0x9d)
  { "ifle", 3, 0, OP_TYPE_IF }, // ifle (0x9e)
  { "if_icmpeq", 3, 0, OP_TYPE_IF }, // if_icmpeq (0x9f)
  { "if_icmpne", 3, 0, OP_TYPE_IF }, // if_icmpne (0xa0)
  { "if_icmplt", 3, 0, OP_TYPE_IF }, // if_icmplt (0xa1)
  { "if_icmpge", 3, 0, OP_TYPE_IF }, // if_icmpge (0xa2)
  { "if_icmpgt", 3, 0, OP_TYPE_IF }, // if_icmpgt (0xa3)
  { "if_icmple", 3, 0, OP_TYPE_IF }, // if_icmple (0xa4)
  { "if_acmpeq", 1, 0, OP_TYPE_IF }, // if_acmpeq (0xa5)
  { "if_acmpne", 1, 0, OP_TYPE_IF }, // if_acmpne (0xa6)
  { "goto", 3, 0, OP_TYPE_UNKNOWN }, // goto (0xa7)
  { "jsr", 3, 0, OP_TYPE_UNKNOWN }, // jsr (0xa8)
  { "ret", 2, 3, OP_TYPE_UNKNOWN }, // ret (0xa9)
  { "tableswitch", 1, 0, OP_TYPE_UNKNOWN }, // tableswitch (0xaa)
  { "lookupswitch", 1, 0, OP_TYPE_UNKNOWN }, // lookupswitch (0xab)
  { "ireturn", 1, 0, OP_TYPE_UNKNOWN }, // ireturn (0xac)
  { "lreturn", 1, 0, OP_TYPE_UNKNOWN }, // lreturn (0xad)
  { "freturn", 1, 0, OP_TYPE_UNKNOWN }, // freturn (0xae)
  { "dreturn", 1, 0, OP_TYPE_UNKNOWN }, // dreturn (0xaf)
  { "areturn", 1, 0, OP_TYPE_UNKNOWN }, // areturn (0xb0)
  { "return", 1, 0, OP_TYPE_UNKNOWN }, // return (0xb1)
  { "getstatic", 3, 0, OP_TYPE_UNKNOWN }, // getstatic (0xb2)
  { "putstatic", 3, 0, OP_TYPE_UNKNOWN }, // putstatic (0xb3)
  { "getfield", 3, 0, OP_TYPE_UNKNOWN }, // getfield (0xb4)
  { "putfield", 3, 0, OP_TYPE_UNKNOWN }, // putfield (0xb5)
  { "invokevirtual", 3, 0, OP_TYPE_UNKNOWN }, // invokevirtual (0xb6)
  { "invokespecial", 3, 0, OP_TYPE_UNKNOWN }, // invokespecial (0xb7)
  { "invokestatic", 3, 0, OP_TYPE_UNKNOWN }, // invokestatic (0xb8)
  { "invokeinterface", 4, 0, OP_TYPE_UNKNOWN }, // invokeinterface (0xb9)
  { "invokedynamic", 4, 0, OP_TYPE_UNKNOWN }, // invokedynamic (0xba)
  { "new", 3, 0, OP_TYPE_UNKNOWN }, // new (0xbb)
  { "newarray", 2, 0, OP_TYPE_UNKNOWN }, // newarray (0xbc)
  { "anewarray", 3, 0, OP_TYPE_UNKNOWN }, // anewarray (0xbd)
  { "arraylength", 1, 0, OP_TYPE_UNKNOWN }, // arraylength (0xbe)
  { "athrow", 1, 0, OP_TYPE_UNKNOWN }, // athrow (0xbf)
  { "checkcast", 1, 0, OP_TYPE_UNKNOWN }, // checkcast (0xc0)
  { "instanceof", 1, 0, OP_TYPE_UNKNOWN }, // instanceof (0xc1)
  { "monitorenter", 1, 0, OP_TYPE_UNKNOWN }, // monitorenter (0xc2)
  { "monitorexit", 1, 0, OP_TYPE_UNKNOWN }, // monitorexit (0xc3)
  { "wide", 1, 0, OP_TYPE_UNKNOWN }, // wide (0xc4)
  { "multianewarray", 1, 0, OP_TYPE_UNKNOWN }, // multianewarray (0xc5)
  { "ifnull", 3, 0, OP_TYPE_IF }, // ifnull (0xc6)
  { "ifnonnull", 3, 0, OP_TYPE_IF }, // ifnonnull (0xc7)
  { "goto_w", 5, 0, OP_TYPE_UNKNOWN }, // goto_w (0xc8)
  { "jsr_w", 5, 0, OP_TYPE_UNKNOWN }, // jsr_w (0xc9)
  { "breakpoint", 1, 0, OP_TYPE_UNKNOWN }, // breakpoint (0xca)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xcb)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xcc)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xcd)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xce)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xcf)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xd0)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xd1)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xd2)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xd3)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xd4)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xd5)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xd6)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xd7)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xd8)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xd9)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xda)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xdb)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xdc)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xdd)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xde)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xdf)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xe0)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xe1)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xe2)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xe3)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xe4)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xe5)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xe6)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xe7)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xe8)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xe9)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xea)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xeb)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xec)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xed)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xee)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xef)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xf0)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xf1)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xf2)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xf3)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xf4)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xf5)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xf6)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xf7)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xf8)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xf9)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xfa)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xfb)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xfc)
  { "???", 0, 0, OP_TYPE_UNKNOWN }, // undefined (0xfd)
  { "impdep1", 1, 0, OP_TYPE_UNKNOWN }, // impdep1 (0xfe)
  { "impdep2", 1, 0, OP_TYPE_UNKNOWN }, // impdep2 (0xff)
};

