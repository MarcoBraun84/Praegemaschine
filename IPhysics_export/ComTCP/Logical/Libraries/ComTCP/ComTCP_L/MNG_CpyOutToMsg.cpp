
#include "MNG_InternalTyp.hpp"

unsigned long int MNG_CpyOutToMsg(MNG_RawDatagram * pToServer, unsigned long int counter, ComTCP_OUTPUTS_32BIT_FWRD *pSimOutputs ) {

    
        unsigned long int DWordBuffer;
	
        pSimOutputs->NumSignals = 8;
        (pToServer->Header).ByteCount    = H_TO_NUDINT(36);
        (pToServer->Header).DatagramType = H_TO_NUDINT(MNG_Raw32BitImage);
        (pToServer->Header).SentTime = H_TO_NUDINT(0);  // Todo
        (pToServer->Header).Counter = H_TO_NUDINT(counter);
        pToServer->Payload[0] = H_TO_NUDINT(pSimOutputs->NumSignals);

    
    /* Kolben_Magazin_FWD : BOOL */
    if(pSimOutputs->Kolben_Magazin_FWD == 1) {
        pToServer->Payload[1] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[1] = 0;
    }


    /* Kolben_Magazin_BWD : BOOL */
    if(pSimOutputs->Kolben_Magazin_BWD == 1) {
        pToServer->Payload[2] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[2] = 0;
    }


    /* Kolben_Ausschub_FWD : BOOL */
    if(pSimOutputs->Kolben_Ausschub_FWD == 1) {
        pToServer->Payload[3] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[3] = 0;
    }


    /* Kolben_Ausschub_BWD : BOOL */
    if(pSimOutputs->Kolben_Ausschub_BWD == 1) {
        pToServer->Payload[4] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[4] = 0;
    }


    /* Kolben_Hochfahren_FWD : BOOL */
    if(pSimOutputs->Kolben_Hochfahren_FWD == 1) {
        pToServer->Payload[5] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[5] = 0;
    }


    /* Kolben_Hochfahren_BWD : BOOL */
    if(pSimOutputs->Kolben_Hochfahren_BWD == 1) {
        pToServer->Payload[6] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[6] = 0;
    }


    /* Kolben_Presse_FWD : BOOL */
    if(pSimOutputs->Kolben_Presse_FWD == 1) {
        pToServer->Payload[7] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[7] = 0;
    }


    /* Kolben_Presse_BWD : BOOL */
    if(pSimOutputs->Kolben_Presse_BWD == 1) {
        pToServer->Payload[8] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[8] = 0;
    }


	return 0;
}
