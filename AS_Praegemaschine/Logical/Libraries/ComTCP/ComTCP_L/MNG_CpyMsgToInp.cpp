
#include "MNG_InternalTyp.hpp"

unsigned long int MNG_CpyMsgToInp(MNG_RawDatagram * pFromServer, ComTCP_INPUTS_32BIT_FWRD *pSimInputs) {

    MNG_DatagramType datagramType;
	unsigned long int DWordBuffer;
        unsigned long int byteCount;
	unsigned long int numSignalsInMessage;


	byteCount = N_TO_HUDINT((pFromServer->Header).ByteCount);
	datagramType = static_cast<MNG_DatagramType>(N_TO_HUDINT((pFromServer->Header).DatagramType));
	if (datagramType != MNG_Raw32BitImage) {
		return 0;
	}

    pSimInputs->NumSignals = 10;

    numSignalsInMessage = N_TO_HUDINT(pFromServer->Payload[0]);
        if ((static_cast<long int>(numSignalsInMessage) != pSimInputs->NumSignals) ||
	(byteCount != 4 + numSignalsInMessage * 4)) {
		return 0;
	}

    /* BOOL Kolben_Magazin_LBK */
    pSimInputs->Kolben_Magazin_LBK = (pFromServer->Payload[1] != 0);

    /* BOOL Kolben_Magazin_LFR */
    pSimInputs->Kolben_Magazin_LFR = (pFromServer->Payload[2] != 0);

    /* BOOL Kolben_Ausschub_LBK */
    pSimInputs->Kolben_Ausschub_LBK = (pFromServer->Payload[3] != 0);

    /* BOOL Kolben_Ausschub_LFR */
    pSimInputs->Kolben_Ausschub_LFR = (pFromServer->Payload[4] != 0);

    /* BOOL Kolben_Hochfahren_LBK */
    pSimInputs->Kolben_Hochfahren_LBK = (pFromServer->Payload[5] != 0);

    /* BOOL Kolben_Hochfahren_LFR */
    pSimInputs->Kolben_Hochfahren_LFR = (pFromServer->Payload[6] != 0);

    /* BOOL Kolben_Presse_LBK */
    pSimInputs->Kolben_Presse_LBK = (pFromServer->Payload[7] != 0);

    /* BOOL Kolben_Presse_LFR */
    pSimInputs->Kolben_Presse_LFR = (pFromServer->Payload[8] != 0);

    /* BOOL Neue_Komponente2_IR */
    pSimInputs->Neue_Komponente2_IR = (pFromServer->Payload[9] != 0);

    /* BOOL Neue_Komponente3_IR */
    pSimInputs->Neue_Komponente3_IR = (pFromServer->Payload[10] != 0);


return N_TO_HUDINT((pFromServer->Header).Counter); // return counter
}
