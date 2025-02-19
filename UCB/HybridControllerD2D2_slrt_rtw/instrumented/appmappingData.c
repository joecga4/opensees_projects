#include "slrtappmapping.h"
#include "./maps/HybridControllerD2D2.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <HybridControllerD2D2> */
		{ /* SignalMapInfo */
			HybridControllerD2D2_BIOMAP,
			HybridControllerD2D2_LBLMAP,
			HybridControllerD2D2_SIDMAP,
			HybridControllerD2D2_SBIO,
			HybridControllerD2D2_SLBL,
			{0,4229},
			114,
		},
		{ /* ParamMapInfo */
			HybridControllerD2D2_PTIDSMAP,
			HybridControllerD2D2_PTNAMESMAP,
			HybridControllerD2D2_SPTMAP,
			{0,107},
			108,
		},
		"HybridControllerD2D2",
		"",
		"HybridControllerD2D2",
		7,
		HybridControllerD2D2_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}