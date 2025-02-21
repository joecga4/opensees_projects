#include "slrtappmapping.h"
#include "./maps/com_FT60_2020a.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <com_FT60_2020a> */
		{ /* SignalMapInfo */
			com_FT60_2020a_BIOMAP,
			com_FT60_2020a_LBLMAP,
			com_FT60_2020a_SIDMAP,
			com_FT60_2020a_SBIO,
			com_FT60_2020a_SLBL,
			{0,20},
			16,
		},
		{ /* ParamMapInfo */
			com_FT60_2020a_PTIDSMAP,
			com_FT60_2020a_PTNAMESMAP,
			com_FT60_2020a_SPTMAP,
			{0,25},
			26,
		},
		"com_FT60_2020a",
		"",
		"com_FT60_2020a",
		3,
		com_FT60_2020a_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}