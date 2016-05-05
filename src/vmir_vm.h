/*
 * Copyright (c) 2016 Lonelycoder AB
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

typedef enum {
  VM_JIT_CALL,
  VM_RET_VOID,
  VM_RET_R32,
  VM_RET_R64,
  VM_RET_R32C,
  VM_RET_R64C,

  VM_SDIV_R8,
  VM_SREM_R8,
  VM_ASHR_R8,

  VM_SDIV_R8C,
  VM_SREM_R8C,
  VM_ASHR_R8C,

  VM_SDIV_R16,
  VM_SREM_R16,
  VM_ASHR_R16,

  // These must be in same order as enum BinaryOpcodes
  VM_ADD_R16C,
  VM_SUB_R16C,
  VM_MUL_R16C,
  VM_UDIV_R16C,
  VM_SDIV_R16C,
  VM_UREM_R16C,
  VM_SREM_R16C,
  VM_SHL_R16C,
  VM_LSHR_R16C,
  VM_ASHR_R16C,
  VM_AND_R16C,
  VM_OR_R16C,
  VM_XOR_R16C,


  // These must be in same order as enum BinaryOpcodes
  VM_ADD_R32,
  VM_SUB_R32,
  VM_MUL_R32,
  VM_UDIV_R32,
  VM_SDIV_R32,
  VM_UREM_R32,
  VM_SREM_R32,
  VM_SHL_R32,
  VM_LSHR_R32,
  VM_ASHR_R32,
  VM_AND_R32,
  VM_OR_R32,
  VM_XOR_R32,

  VM_INC_R32,
  VM_DEC_R32,

  // These must be in same order as enum BinaryOpcodes
  VM_ADD_R32C,
  VM_SUB_R32C,
  VM_MUL_R32C,
  VM_UDIV_R32C,
  VM_SDIV_R32C,
  VM_UREM_R32C,
  VM_SREM_R32C,
  VM_SHL_R32C,
  VM_LSHR_R32C,
  VM_ASHR_R32C,
  VM_AND_R32C,
  VM_OR_R32C,
  VM_XOR_R32C,

  // These must be in same order as enum BinaryOpcodes
  VM_ADD_R64,
  VM_SUB_R64,
  VM_MUL_R64,
  VM_UDIV_R64,
  VM_SDIV_R64,
  VM_UREM_R64,
  VM_SREM_R64,
  VM_SHL_R64,
  VM_LSHR_R64,
  VM_ASHR_R64,
  VM_AND_R64,
  VM_OR_R64,
  VM_XOR_R64,

  // These must be in same order as enum BinaryOpcodes
  VM_ADD_R64C,
  VM_SUB_R64C,
  VM_MUL_R64C,
  VM_UDIV_R64C,
  VM_SDIV_R64C,
  VM_UREM_R64C,
  VM_SREM_R64C,
  VM_SHL_R64C,
  VM_LSHR_R64C,
  VM_ASHR_R64C,
  VM_AND_R64C,
  VM_OR_R64C,
  VM_XOR_R64C,


  VM_ADD_DBL,
  VM_SUB_DBL,
  VM_MUL_DBL,
  VM_DIV_DBL,

  VM_ADD_DBLC,
  VM_SUB_DBLC,
  VM_MUL_DBLC,
  VM_DIV_DBLC,

  VM_ADD_FLT,
  VM_SUB_FLT,
  VM_MUL_FLT,
  VM_DIV_FLT,

  VM_ADD_FLTC,
  VM_SUB_FLTC,
  VM_MUL_FLTC,
  VM_DIV_FLTC,

  VM_MLA32,

  VM_LOAD8,
  VM_LOAD8_G,
  VM_LOAD8_OFF,
  VM_LOAD8_ZEXT_32_OFF,
  VM_LOAD8_SEXT_32_OFF,
  VM_LOAD8_ROFF,
  VM_LOAD8_ZEXT_32_ROFF,
  VM_LOAD8_SEXT_32_ROFF,

  VM_STORE8_G,
  VM_STORE8,
  VM_STORE8C_OFF,
  VM_STORE8_OFF,

  VM_LOAD16,
  VM_LOAD16_G,
  VM_LOAD16_OFF,
  VM_LOAD16_ZEXT_32_OFF,
  VM_LOAD16_SEXT_32_OFF,
  VM_LOAD16_ROFF,
  VM_LOAD16_ZEXT_32_ROFF,
  VM_LOAD16_SEXT_32_ROFF,

  VM_STORE16_G,
  VM_STORE16,
  VM_STORE16C_OFF,
  VM_STORE16_OFF,


  VM_LOAD32,
  VM_LOAD32_G,
  VM_LOAD32_OFF,
  VM_LOAD32_ROFF,

  VM_STORE32_G,
  VM_STORE32C_OFF,
  VM_STORE32,
  VM_STORE32_OFF,

  VM_LOAD64,
  VM_LOAD64_G,
  VM_LOAD64_OFF,
  VM_LOAD64_ROFF,

  VM_STORE64_G,
  VM_STORE64C_OFF,
  VM_STORE64,
  VM_STORE64_OFF,

  // These must be in same order as enum Predicate
  VM_EQ8,
  VM_NE8,
  VM_UGT8,
  VM_UGE8,
  VM_ULT8,
  VM_ULE8,
  VM_SGT8,
  VM_SGE8,
  VM_SLT8,
  VM_SLE8,

  // These must be in same order as enum Predicate
  VM_EQ8_C,
  VM_NE8_C,
  VM_UGT8_C,
  VM_UGE8_C,
  VM_ULT8_C,
  VM_ULE8_C,
  VM_SGT8_C,
  VM_SGE8_C,
  VM_SLT8_C,
  VM_SLE8_C,


  // These must be in same order as enum Predicate
  VM_EQ16,
  VM_NE16,
  VM_UGT16,
  VM_UGE16,
  VM_ULT16,
  VM_ULE16,
  VM_SGT16,
  VM_SGE16,
  VM_SLT16,
  VM_SLE16,

  // These must be in same order as enum Predicate
  VM_EQ16_C,
  VM_NE16_C,
  VM_UGT16_C,
  VM_UGE16_C,
  VM_ULT16_C,
  VM_ULE16_C,
  VM_SGT16_C,
  VM_SGE16_C,
  VM_SLT16_C,
  VM_SLE16_C,



  // These must be in same order as enum Predicate
  VM_EQ32,
  VM_NE32,
  VM_UGT32,
  VM_UGE32,
  VM_ULT32,
  VM_ULE32,
  VM_SGT32,
  VM_SGE32,
  VM_SLT32,
  VM_SLE32,

  // These must be in same order as enum Predicate
  VM_EQ32_C,
  VM_NE32_C,
  VM_UGT32_C,
  VM_UGE32_C,
  VM_ULT32_C,
  VM_ULE32_C,
  VM_SGT32_C,
  VM_SGE32_C,
  VM_SLT32_C,
  VM_SLE32_C,

  // These must be in same order as enum Predicate
  VM_EQ64,
  VM_NE64,
  VM_UGT64,
  VM_UGE64,
  VM_ULT64,
  VM_ULE64,
  VM_SGT64,
  VM_SGE64,
  VM_SLT64,
  VM_SLE64,

  // These must be in same order as enum Predicate
  VM_EQ64_C,
  VM_NE64_C,
  VM_UGT64_C,
  VM_UGE64_C,
  VM_ULT64_C,
  VM_ULE64_C,
  VM_SGT64_C,
  VM_SGE64_C,
  VM_SLT64_C,
  VM_SLE64_C,


  // These must be in same order as enum Predicate
  VM_OEQ_DBL,
  VM_OGT_DBL,
  VM_OGE_DBL,
  VM_OLT_DBL,
  VM_OLE_DBL,
  VM_ONE_DBL,
  VM_ORD_DBL,
  VM_UNO_DBL,
  VM_UEQ_DBL,
  VM_UGT_DBL,
  VM_UGE_DBL,
  VM_ULT_DBL,
  VM_ULE_DBL,
  VM_UNE_DBL,


  // These must be in same order as enum Predicate
  VM_OEQ_DBL_C,
  VM_OGT_DBL_C,
  VM_OGE_DBL_C,
  VM_OLT_DBL_C,
  VM_OLE_DBL_C,
  VM_ONE_DBL_C,
  VM_ORD_DBL_C,
  VM_UNO_DBL_C,
  VM_UEQ_DBL_C,
  VM_UGT_DBL_C,
  VM_UGE_DBL_C,
  VM_ULT_DBL_C,
  VM_ULE_DBL_C,
  VM_UNE_DBL_C,


  // These must be in same order as enum Predicate
  VM_OEQ_FLT,
  VM_OGT_FLT,
  VM_OGE_FLT,
  VM_OLT_FLT,
  VM_OLE_FLT,
  VM_ONE_FLT,
  VM_ORD_FLT,
  VM_UNO_FLT,
  VM_UEQ_FLT,
  VM_UGT_FLT,
  VM_UGE_FLT,
  VM_ULT_FLT,
  VM_ULE_FLT,
  VM_UNE_FLT,


  // These must be in same order as enum Predicate
  VM_OEQ_FLT_C,
  VM_OGT_FLT_C,
  VM_OGE_FLT_C,
  VM_OLT_FLT_C,
  VM_OLE_FLT_C,
  VM_ONE_FLT_C,
  VM_ORD_FLT_C,
  VM_UNO_FLT_C,
  VM_UEQ_FLT_C,
  VM_UGT_FLT_C,
  VM_UGE_FLT_C,
  VM_ULT_FLT_C,
  VM_ULE_FLT_C,
  VM_UNE_FLT_C,




  // These must be in same order as enum Predicate
  VM_EQ8_BR,
  VM_NE8_BR,
  VM_UGT8_BR,
  VM_UGE8_BR,
  VM_ULT8_BR,
  VM_ULE8_BR,
  VM_SGT8_BR,
  VM_SGE8_BR,
  VM_SLT8_BR,
  VM_SLE8_BR,

  // These must be in same order as enum Predicate
  VM_EQ8_C_BR,
  VM_NE8_C_BR,
  VM_UGT8_C_BR,
  VM_UGE8_C_BR,
  VM_ULT8_C_BR,
  VM_ULE8_C_BR,
  VM_SGT8_C_BR,
  VM_SGE8_C_BR,
  VM_SLT8_C_BR,
  VM_SLE8_C_BR,

  // These must be in same order as enum Predicate
  VM_EQ32_BR,
  VM_NE32_BR,
  VM_UGT32_BR,
  VM_UGE32_BR,
  VM_ULT32_BR,
  VM_ULE32_BR,
  VM_SGT32_BR,
  VM_SGE32_BR,
  VM_SLT32_BR,
  VM_SLE32_BR,

  // These must be in same order as enum Predicate
  VM_EQ32_C_BR,
  VM_NE32_C_BR,
  VM_UGT32_C_BR,
  VM_UGE32_C_BR,
  VM_ULT32_C_BR,
  VM_ULE32_C_BR,
  VM_SGT32_C_BR,
  VM_SGE32_C_BR,
  VM_SLT32_C_BR,
  VM_SLE32_C_BR,


  VM_EQ32_SEL,
  VM_NE32_SEL,
  VM_UGT32_SEL,
  VM_UGE32_SEL,
  VM_ULT32_SEL,
  VM_ULE32_SEL,
  VM_SGT32_SEL,
  VM_SGE32_SEL,
  VM_SLT32_SEL,
  VM_SLE32_SEL,
  VM_EQ32_C_SEL,
  VM_NE32_C_SEL,
  VM_UGT32_C_SEL,
  VM_UGE32_C_SEL,
  VM_ULT32_C_SEL,
  VM_ULE32_C_SEL,
  VM_SGT32_C_SEL,
  VM_SGE32_C_SEL,
  VM_SLT32_C_SEL,
  VM_SLE32_C_SEL,

  VM_SELECT32RR,
  VM_SELECT32RC,
  VM_SELECT32CR,
  VM_SELECT32CC,

  VM_SELECT64RR,
  VM_SELECT64RC,
  VM_SELECT64CR,
  VM_SELECT64CC,

  VM_B,
  VM_BCOND,
  VM_JSR_R,
  VM_JSR_VM,
  VM_JSR_EXT,

  VM_JUMPTABLE,
  VM_SWITCH8_BS,
  VM_SWITCH32_BS,
  VM_SWITCH64_BS,

  VM_MOV32,
  VM_MOV64,
  VM_MOV8_C,
  VM_MOV16_C,
  VM_MOV32_C,
  VM_MOV64_C,

  VM_LEA_R32_SHL,
  VM_LEA_R32_SHL2,
  VM_LEA_R32_SHL_OFF,
  VM_LEA_R32_MUL_OFF,

  // Cast operation in TO_OP_FROM
  VM_CAST_1_TRUNC_8,
  VM_CAST_1_TRUNC_16,

  VM_CAST_8_ZEXT_1,
  VM_CAST_8_TRUNC_16,
  VM_CAST_8_TRUNC_32,
  VM_CAST_8_TRUNC_64,

  VM_CAST_16_ZEXT_1,
  VM_CAST_16_ZEXT_8,
  VM_CAST_16_SEXT_8,
  VM_CAST_16_TRUNC_32,
  VM_CAST_16_TRUNC_64,
  VM_CAST_16_FPTOSI_FLT,
  VM_CAST_16_FPTOUI_FLT,
  VM_CAST_16_FPTOSI_DBL,
  VM_CAST_16_FPTOUI_DBL,

  VM_CAST_32_TRUNC_64,
  VM_CAST_32_SEXT_1,
  VM_CAST_32_ZEXT_8,
  VM_CAST_32_SEXT_8,
  VM_CAST_32_ZEXT_16,
  VM_CAST_32_SEXT_16,

  VM_CAST_32_FPTOSI_FLT,
  VM_CAST_32_FPTOUI_FLT,
  VM_CAST_32_FPTOSI_DBL,
  VM_CAST_32_FPTOUI_DBL,

  VM_CAST_64_ZEXT_1,
  VM_CAST_64_SEXT_1,
  VM_CAST_64_ZEXT_8,
  VM_CAST_64_SEXT_8,
  VM_CAST_64_ZEXT_16,
  VM_CAST_64_SEXT_16,
  VM_CAST_64_ZEXT_32,
  VM_CAST_64_SEXT_32,
  VM_CAST_64_FPTOSI_FLT,
  VM_CAST_64_FPTOUI_FLT,
  VM_CAST_64_FPTOSI_DBL,
  VM_CAST_64_FPTOUI_DBL,

  VM_CAST_FLT_FPTRUNC_DBL,
  VM_CAST_FLT_SITOFP_8,
  VM_CAST_FLT_UITOFP_8,
  VM_CAST_FLT_SITOFP_16,
  VM_CAST_FLT_UITOFP_16,
  VM_CAST_FLT_SITOFP_32,
  VM_CAST_FLT_UITOFP_32,
  VM_CAST_FLT_SITOFP_64,
  VM_CAST_FLT_UITOFP_64,

  VM_CAST_DBL_FPEXT_FLT,
  VM_CAST_DBL_SITOFP_8,
  VM_CAST_DBL_UITOFP_8,
  VM_CAST_DBL_SITOFP_16,
  VM_CAST_DBL_UITOFP_16,
  VM_CAST_DBL_SITOFP_32,
  VM_CAST_DBL_UITOFP_32,
  VM_CAST_DBL_SITOFP_64,
  VM_CAST_DBL_UITOFP_64,

  VM_ABS,

  VM_FLOOR,
  VM_SIN,
  VM_COS,
  VM_POW,
  VM_FABS,
  VM_FMOD,
  VM_LOG,
  VM_LOG10,
  VM_ROUND,

  VM_FLOORF,
  VM_SINF,
  VM_COSF,
  VM_POWF,
  VM_FABSF,
  VM_FMODF,
  VM_LOGF,
  VM_LOG10F,
  VM_ROUNDF,

  // Other misc
  VM_ALLOCA,
  VM_ALLOCAD,
  VM_UNREACHABLE,
  VM_STACKSHRINK,
  VM_STACKCOPYR,
  VM_STACKCOPYC,

  VM_STACKSAVE,
  VM_STACKRESTORE,

  VM_VASTART,
  VM_VAARG32,
  VM_VAARG64,
  VM_VACOPY,

  // Intrinsics
  VM_STRCMP,
  VM_STRCASECMP,
  VM_STRLEN,
  VM_STRDUP,
  VM_STRCHR,
  VM_STRRCHR,
  VM_STRNCMP,
  VM_STRCPY,
  VM_STRNCPY,
  VM_STRCAT,
  VM_STRNCAT,

  VM_MEMMOVE,
  VM_MEMCMP,

  VM_MEMCPY,
  VM_MEMSET,

  VM_LLVM_MEMCPY,
  VM_LLVM_MEMSET,
  VM_LLVM_MEMSET64,


  VM_CTZ32,
  VM_CLZ32,
  VM_POP32,

  VM_CTZ64,
  VM_CLZ64,
  VM_POP64,

  VM_UADDO32,

  VM_NOP,

  VM_INSTRUMENT_COUNT,

} vm_op_t;
