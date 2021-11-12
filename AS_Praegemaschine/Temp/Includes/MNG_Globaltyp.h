/* Durch Automation Studio generierte Headerdatei*/
/* Nicht bearbeiten! */

#ifndef _BUR_1636638740_1_
#define _BUR_1636638740_1_

#include <bur/plctypes.h>

/* Datentypen und Datentypen von Funktionsblöcken */
typedef struct VEC3
{	float x;
	float y;
	float z;
} VEC3;

typedef struct POSE6
{	float x;
	float y;
	float z;
	float a;
	float b;
	float c;
} POSE6;

typedef struct TRAFO
{	struct VEC3 baseX;
	float fill0;
	struct VEC3 baseY;
	float fill1;
	struct VEC3 baseZ;
	float fill2;
	struct VEC3 origin;
	float fill3;
} TRAFO;






__asm__(".section \".plc\"");

/* Verwendete IEC Dateien */
__asm__(".ascii \"iecfile \\\"Logical/MNG_Global.typ\\\" scope \\\"global\\\"\\n\"");

/* Exportierte Bibliotheksfunktionen und Funktionsbausteine */

__asm__(".previous");


#endif /* _BUR_1636638740_1_ */

