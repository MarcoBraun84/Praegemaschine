
#ifndef  _MNGGLOBAL_HPP_
#define _MNGGLOBAL_HPP_

#include <mng_globalTYP.h>


    typedef struct {

		signed short NumSignals;

        /* BOOL Kolben_Magazin_LBK */
        BOOL Kolben_Magazin_LBK;
        /* BOOL Kolben_Magazin_LFR */
        BOOL Kolben_Magazin_LFR;
        /* BOOL Kolben_Ausschub_LBK */
        BOOL Kolben_Ausschub_LBK;
        /* BOOL Kolben_Ausschub_LFR */
        BOOL Kolben_Ausschub_LFR;
        /* BOOL Kolben_Hochfahren_LBK */
        BOOL Kolben_Hochfahren_LBK;
        /* BOOL Kolben_Hochfahren_LFR */
        BOOL Kolben_Hochfahren_LFR;
        /* BOOL Kolben_Presse_LBK */
        BOOL Kolben_Presse_LBK;
        /* BOOL Kolben_Presse_LFR */
        BOOL Kolben_Presse_LFR;
        /* BOOL Neue_Komponente2_IR */
        BOOL Neue_Komponente2_IR;
        /* BOOL Neue_Komponente3_IR */
        BOOL Neue_Komponente3_IR;

        } ComTCP_INPUTS_32BIT_FWRD;


    typedef struct {

		signed short NumSignals;

        /* BOOL Kolben_Magazin_FWD */
        BOOL Kolben_Magazin_FWD;
        /* BOOL Kolben_Magazin_BWD */
        BOOL Kolben_Magazin_BWD;
        /* BOOL Kolben_Ausschub_FWD */
        BOOL Kolben_Ausschub_FWD;
        /* BOOL Kolben_Ausschub_BWD */
        BOOL Kolben_Ausschub_BWD;
        /* BOOL Kolben_Hochfahren_FWD */
        BOOL Kolben_Hochfahren_FWD;
        /* BOOL Kolben_Hochfahren_BWD */
        BOOL Kolben_Hochfahren_BWD;
        /* BOOL Kolben_Presse_FWD */
        BOOL Kolben_Presse_FWD;
        /* BOOL Kolben_Presse_BWD */
        BOOL Kolben_Presse_BWD;

        } ComTCP_OUTPUTS_32BIT_FWRD;



#endif
