/* Durch Automation Studio generierte Headerdatei*/
/* Nicht bearbeiten! */

#ifndef _BUR_1636638740_3_
#define _BUR_1636638740_3_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variablen */
_GLOBAL plcbit ComTCP_SimActive;
_GLOBAL plctime ComTCP_SimSendCycleTime;
_GLOBAL unsigned short ComTCP_SimServerPort;
_GLOBAL plcstring ComTCP_SimServerAddress[16];
_GLOBAL struct ComTCP_OUTPUTS_32BIT ComTCP_SimOutputs;
_GLOBAL struct ComTCP_INPUTS_32BIT ComTCP_SimInputs;





__asm__(".section \".plc\"");

/* Verwendete IEC Dateien */
__asm__(".ascii \"iecfile \\\"Logical/Libraries/ComTCP/MNG_Package.var\\\" scope \\\"global\\\"\\n\"");

/* Exportierte Bibliotheksfunktionen und Funktionsbausteine */

__asm__(".previous");


#endif /* _BUR_1636638740_3_ */

