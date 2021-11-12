/* Durch Automation Studio generierte Headerdatei*/
/* Nicht bearbeiten! */

#ifndef _BUR_1636639271_1_
#define _BUR_1636639271_1_

#include <bur/plctypes.h>

/* Datentypen und Datentypen von Funktionsblöcken */
typedef struct ComTCP_INPUTS_32BIT
{	signed short NumSignals;
	plcbit Kolben_Magazin_LBK;
	plcbit Kolben_Magazin_LFR;
	plcbit Kolben_Ausschub_LBK;
	plcbit Kolben_Ausschub_LFR;
	plcbit Kolben_Hochfahren_LBK;
	plcbit Kolben_Hochfahren_LFR;
	plcbit Kolben_Presse_LBK;
	plcbit Kolben_Presse_LFR;
	plcbit Lichttaster_Austrag;
	plcbit Lichttaster_Magazin;
} ComTCP_INPUTS_32BIT;

typedef struct ComTCP_OUTPUTS_32BIT
{	signed short NumSignals;
	plcbit Kolben_Magazin_FWD;
	plcbit Kolben_Magazin_BWD;
	plcbit Kolben_Ausschub_FWD;
	plcbit Kolben_Ausschub_BWD;
	plcbit Kolben_Hochfahren_FWD;
	plcbit Kolben_Hochfahren_BWD;
	plcbit Kolben_Presse_FWD;
	plcbit Kolben_Presse_BWD;
} ComTCP_OUTPUTS_32BIT;






__asm__(".section \".plc\"");

/* Verwendete IEC Dateien */
__asm__(".ascii \"iecfile \\\"Logical/Libraries/ComTCP/MNG_Package.typ\\\" scope \\\"global\\\"\\n\"");

/* Exportierte Bibliotheksfunktionen und Funktionsbausteine */

__asm__(".previous");


#endif /* _BUR_1636639271_1_ */

