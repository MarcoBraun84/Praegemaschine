
#include "MNG_InternalTyp.hpp"

unsigned long int MNG_CpyOutToMsg(MNG_RawDatagram * pToServer, unsigned long int counter, ComTCP20_OUTPUTS_32BIT_FWRD *pSimOutputs ) {

    
        unsigned long int DWordBuffer;
	
        pSimOutputs->NumSignals = 10;
        (pToServer->Header).ByteCount    = H_TO_NUDINT(44);
        (pToServer->Header).DatagramType = H_TO_NUDINT(MNG_Raw32BitImage);
        (pToServer->Header).SentTime = H_TO_NUDINT(0);  // Todo
        (pToServer->Header).Counter = H_TO_NUDINT(counter);
        pToServer->Payload[0] = H_TO_NUDINT(pSimOutputs->NumSignals);

    
    /* Kolben_MasterMaxSpeed : FLOAT32 */
    brsmemcpy((unsigned long int)&(DWordBuffer), (unsigned long int)&(pSimOutputs->Kolben_MasterMaxSpeed), 4);
    pToServer->Payload[1] = H_TO_NUDINT(DWordBuffer);


    /* Kolben_MasterForward : BOOL */
    if(pSimOutputs->Kolben_MasterForward == 1) {
        pToServer->Payload[2] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[2] = 0;
    }


    /* Kolben_MasterBack : BOOL */
    if(pSimOutputs->Kolben_MasterBack == 1) {
        pToServer->Payload[3] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[3] = 0;
    }


    /* Kolben_MasterInhibit : BOOL */
    if(pSimOutputs->Kolben_MasterInhibit == 1) {
        pToServer->Payload[4] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[4] = 0;
    }


    /* Kolben_MasterPos : FLOAT32 */
    brsmemcpy((unsigned long int)&(DWordBuffer), (unsigned long int)&(pSimOutputs->Kolben_MasterPos), 4);
    pToServer->Payload[5] = H_TO_NUDINT(DWordBuffer);


    /* Kolben_Override : FLOAT32 */
    brsmemcpy((unsigned long int)&(DWordBuffer), (unsigned long int)&(pSimOutputs->Kolben_Override), 4);
    pToServer->Payload[6] = H_TO_NUDINT(DWordBuffer);


    /* Kolben_MAX_SPD : FLOAT32 */
    brsmemcpy((unsigned long int)&(DWordBuffer), (unsigned long int)&(pSimOutputs->Kolben_MAX_SPD), 4);
    pToServer->Payload[7] = H_TO_NUDINT(DWordBuffer);


    /* Kolben_FWD : BOOL */
    if(pSimOutputs->Kolben_FWD == 1) {
        pToServer->Payload[8] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[8] = 0;
    }


    /* Kolben_KinInhibit : BOOL */
    if(pSimOutputs->Kolben_KinInhibit == 1) {
        pToServer->Payload[9] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[9] = 0;
    }


    /* Kolben_BWD : BOOL */
    if(pSimOutputs->Kolben_BWD == 1) {
        pToServer->Payload[10] = 0xFFFFFFFF;   /*BOOL */
    } else { 
        pToServer->Payload[10] = 0;
    }


	return 0;
}
