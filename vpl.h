#ifndef __VPL_H__
#define __VPL_H__

#define VAL_CAST(V,TYPE) ((TYPE)V)
#define VPL_CAST(VP,TYPE) (VAL_CAST(VP,TYPE*))
#define VPL_VALUE(VP,TYPE) (*(VPL_CAST(VP,TYPE)))

#define VPL_OP_SCAL(LVP,RV,TYPE,OP) (VPL_VALUE(LVP,TYPE) OP VAL_CAST(RV,TYPE))
#define VPL_OP1(LVP,RVP,TYPE,OP) (VPL_VALUE(LVP,TYPE) OP VPL_VALUE(RVP,TYPE))
#define VPL_OP2(LVP,RVP,LTYPE,RTYPE,OP) (VPL_VALUE(LVP,LTYPE) OP (LTYPE)VPL_VALUE(RVP,RTYPE))
#define VPL_OP3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2,OP) (VPL_VALUE(LVP,LTYPE) = VPL_VALUE(RVP1,RTYPE1) OP VPL_VALUE(RVP2,RTYPE2))

#define VPL_ASIGN_SCAL(LVP,RV,TYPE) (VPL_OP_SCAL(LVP,RV,TYPE,=))
#define VPL_ASIGN1(LVP,RVP,TYPE) (VPL_OP1(LVP,RVP,TYPE,=))
#define VPL_ASIGN2(LVP,RVP,LTYPE,RTYPE) (VPL_OP2(LVP,RVP,LTYPE,RTYPE,=))

#define VPL_ADD_SCAL(LVP,RV,TYPE) (VPL_OP_SCAL(LVP,RV,TYPE,+=))
#define VPL_ADD1(LVP,RVP,TYPE) (VPL_OP1(LVP,RVP,TYPE,+=))
#define VPL_ADD2(LVP,RVP,LTYPE,RTYPE) (VPL_OP2(LVP,RVP,LTYPE,RTYPE,+=))
#define VPL_ADD3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2) (VPL_OP3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2,+));

#define VPL_SUB_SCAL(LVP,RV,TYPE) (VPL_OP_SCAL(LVP,RV,TYPE,-=))
#define VPL_SUB1(LVP,RVP,TYPE) (VPL_OP1(LVP,RVP,TYPE,-=))
#define VPL_SUB2(LVP,RVP,LTYPE,RTYPE) (VPL_OP2(LVP,RVP,LTYPE,RTYPE,-=))
#define VPL_SUB3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2) (VPL_OP3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2,-));

#define VPL_MUL_SCAL(LVP,RV,TYPE) (VPL_OP_SCAL(LVP,RV,TYPE,*=))
#define VPL_MUL1(LVP,RVP,TYPE) (VPL_OP1(LVP,RVP,TYPE,*=))
#define VPL_MUL2(LVP,RVP,LTYPE,RTYPE) (VPL_OP2(LVP,RVP,LTYPE,RTYPE,*=))
#define VPL_MUL3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2) (VPL_OP3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2,*));

#define VPL_DIV_SCAL(LVP,RV,TYPE) (VPL_OP_SCAL(LVP,RV,TYPE,/=))
#define VPL_DIV1(LVP,RVP,TYPE) (VPL_OP1(LVP,RVP,TYPE,/=))
#define VPL_DIV2(LVP,RVP,LTYPE,RTYPE) (VPL_OP2(LVP,RVP,LTYPE,RTYPE,/=))
#define VPL_DIV3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2) (VPL_OP3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2,/));

/*
#define VPL_MOD_SCAL(LVP,RV,TYPE) (VPL_OP_SCAL(LVP,RV,TYPE,%=))
#define VPL_MOD1(LVP,RVP,TYPE) (VPL_OP1(LVP,RVP,TYPE,%=))
#define VPL_MOD2(LVP,RVP,LTYPE,RTYPE) (VPL_OP2(LVP,RVP,LTYPE,RTYPE,%=))
#define VPL_MOD3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2) (VPL_OP3(LVP,RVP1,RVP2,LTYPE,RTYPE1,RTYPE2,%));
*/

#define VPL_COMP_SCAL(LVP,RV,TYPE,COP) (VPL_OP_SCAL(LVP,RV,TYPE,COP))
#define VPL_COMP1(LVP,RVP,TYPE,COP) (VPL_OP1(LVP,RVP,TYPE,COP))
#define VPL_COMP2(LVP,RVP,LTYPE,RTYPE,COP) (VPL_OP2(LVP,RVP,LTYPE,RTYPE,COP))

#define VPL_EQ_SCAL(LVP,RV,TYPE) (VPL_COMP_SCAL(LVP,RV,TYPE,==))
#define VPL_EQ1(LVP,RVP,TYPE) (VPL_COMP1(LVP,RVP,TYPE,==))
#define VPL_EQ2(LVP,RVP,LTYPE,RTYPE) (VPL_COMP2(LVP,RVP,LTYPE,RTYPE,==))

#define VPL_NE_SCAL(LVP,RV,TYPE) (VPL_COMP_SCAL(LVP,RV,TYPE,!=))
#define VPL_NE1(LVP,RVP,TYPE) (VPL_COMP1(LVP,RVP,TYPE,!=))
#define VPL_NE2(LVP,RVP,LTYPE,RTYPE) (VPL_COMP2(LVP,RVP,LTYPE,RTYPE,!=))

#define VPL_GT_SCAL(LVP,RV,TYPE) (VPL_COMP_SCAL(LVP,RV,TYPE,>))
#define VPL_GT1(LVP,RVP,TYPE) (VPL_COMP1(LVP,RVP,TYPE,>))
#define VPL_GT2(LVP,RVP,LTYPE,RTYPE) (VPL_COMP2(LVP,RVP,LTYPE,RTYPE,>))

#define VPL_LT_SCAL(LVP,RV,TYPE) (VPL_COMP_SCAL(LVP,RV,TYPE,<))
#define VPL_LT1(LVP,RVP,TYPE) (VPL_COMP1(LVP,RVP,TYPE,<))
#define VPL_LT2(LVP,RVP,LTYPE,RTYPE) (VPL_COMP2(LVP,RVP,LTYPE,RTYPE,<))

#define VPL_GE_SCAL(LVP,RV,TYPE) (VPL_COMP_SCAL(LVP,RV,TYPE,>=))
#define VPL_GE1(LVP,RVP,TYPE) (VPL_COMP1(LVP,RVP,TYPE,>=))
#define VPL_GE2(LVP,RVP,LTYPE,RTYPE) (VPL_COMP2(LVP,RVP,LTYPE,RTYPE,>=))

#define VPL_LE_SCAL(LVP,RV,TYPE) (VPL_COMP_SCAL(LVP,RV,TYPE,<=))
#define VPL_LE1(LVP,RVP,TYPE) (VPL_COMP1(LVP,RVP,TYPE,<=))
#define VPL_LE2(LVP,RVP,LTYPE,RTYPE) (VPL_COMP2(LVP,RVP,LTYPE,RTYPE,<=))

#endif
