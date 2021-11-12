
#include "MNG_InternalTyp.hpp"

unsigned long int MNG_CpyMsgToInp(MNG_RawDatagram * pFromServer, ComTCP20_INPUTS_32BIT_FWRD *pSimInputs) {

    MNG_DatagramType datagramType;
	unsigned long int DWordBuffer;
        unsigned long int byteCount;
	unsigned long int numSignalsInMessage;


	byteCount = N_TO_HUDINT((pFromServer->Header).ByteCount);
	datagramType = static_cast<MNG_DatagramType>(N_TO_HUDINT((pFromServer->Header).DatagramType));
	if (datagramType != MNG_Raw32BitImage) {
		return 0;
	}

    pSimInputs->NumSignals = 6;

    numSignalsInMessage = N_TO_HUDINT(pFromServer->Payload[0]);
        if ((static_cast<long int>(numSignalsInMessage) != pSimInputs->NumSignals) ||
	(byteCount != 4 + numSignalsInMessage * 4)) {
		return 0;
	}

    /* FLOAT32 Kolben_CurveLength */
    DWordBuffer = N_TO_HUDINT(pFromServer->Payload[1]);
    brsmemcpy((unsigned long int)&(pSimInputs->Kolben_CurveLength), (unsigned long int)&(DWordBuffer), 4);

    /* FLOAT32 Kolben_AXIS */
    DWordBuffer = N_TO_HUDINT(pFromServer->Payload[2]);
    brsmemcpy((unsigned long int)&(pSimInputs->Kolben_AXIS), (unsigned long int)&(DWordBuffer), 4);

    /* BOOL Kolben_LBK */
    pSimInputs->Kolben_LBK = (pFromServer->Payload[3] != 0);

    /* BOOL Kolben_LFR */
    pSimInputs->Kolben_LFR = (pFromServer->Payload[4] != 0);

    /* FLOAT32 Kolben_Kolben_KinActual_Val */
    DWordBuffer = N_TO_HUDINT(pFromServer->Payload[5]);
    brsmemcpy((unsigned long int)&(pSimInputs->Kolben_Kolben_KinActual_Val), (unsigned long int)&(DWordBuffer), 4);

    /* BOOL Lichttsaster_IR */
    pSimInputs->Lichttsaster_IR = (pFromServer->Payload[6] != 0);


return N_TO_HUDINT((pFromServer->Header).Counter); // return counter
}
