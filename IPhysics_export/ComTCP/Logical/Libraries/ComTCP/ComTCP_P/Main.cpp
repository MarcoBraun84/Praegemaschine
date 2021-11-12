
#include <bur/plctypes.h>

#include "../ComTCP_L/MNG_Global.hpp"
#include "../ComTCP_L/MNG_InternalTyp.hpp"
#include "../ComTCP_L/MNG_ComHdlr.hpp"

#include <MNG_PackageTyp.h>
#include <MNG_PackageVAR.h>
#include <TypesTYP.h>
#include <VariablesVAR.h>

unsigned long bur_heap_size = 0x4FFFF;


MNG_ComHdlr *pMNG_ComHdlr;


void _INIT ProgramInit(void)
{
    pMNG_ComHdlr = new MNG_ComHdlr(ComTCP_SimServerAddress, ComTCP_SimServerPort, ComTCP_SimSendCycleTime);
}

void _CYCLIC ProgramCyclic(void)
{
    connectionState = pMNG_ComHdlr->RunCommunication((void*)&ComTCP_SimInputs,(void*)&ComTCP_SimOutputs, &ComTCP_SimActive);
}

void _EXIT ProgramExit(void)
{
    delete pMNG_ComHdlr;
}
