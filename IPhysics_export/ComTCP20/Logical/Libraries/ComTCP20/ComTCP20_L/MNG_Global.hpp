
#ifndef  _MNGGLOBAL_HPP_
#define _MNGGLOBAL_HPP_

#include <mng_globalTYP.h>


    typedef struct {

		signed short NumSignals;

        /* REAL Kolben_CurveLength */
        REAL Kolben_CurveLength;
        /* REAL Kolben_AXIS */
        REAL Kolben_AXIS;
        /* BOOL Kolben_LBK */
        BOOL Kolben_LBK;
        /* BOOL Kolben_LFR */
        BOOL Kolben_LFR;
        /* REAL Kolben_Kolben_KinActual_Val */
        REAL Kolben_Kolben_KinActual_Val;
        /* BOOL Lichttsaster_IR */
        BOOL Lichttsaster_IR;

        } ComTCP20_INPUTS_32BIT_FWRD;


    typedef struct {

		signed short NumSignals;

        /* REAL Kolben_MasterMaxSpeed */
        REAL Kolben_MasterMaxSpeed;
        /* BOOL Kolben_MasterForward */
        BOOL Kolben_MasterForward;
        /* BOOL Kolben_MasterBack */
        BOOL Kolben_MasterBack;
        /* BOOL Kolben_MasterInhibit */
        BOOL Kolben_MasterInhibit;
        /* REAL Kolben_MasterPos */
        REAL Kolben_MasterPos;
        /* REAL Kolben_Override */
        REAL Kolben_Override;
        /* REAL Kolben_MAX_SPD */
        REAL Kolben_MAX_SPD;
        /* BOOL Kolben_FWD */
        BOOL Kolben_FWD;
        /* BOOL Kolben_KinInhibit */
        BOOL Kolben_KinInhibit;
        /* BOOL Kolben_BWD */
        BOOL Kolben_BWD;

        } ComTCP20_OUTPUTS_32BIT_FWRD;



#endif
