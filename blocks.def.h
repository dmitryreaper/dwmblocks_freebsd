//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
        {" 🐧 ", "/home/dima/Progs/dwmblocks-distrotube/scripts/kernel",		    360,		        2},

	{" 🔺 ", "/home/dima/Progs/dwmblocks-distrotube/scripts/upt",		        60,		            2},

	{" 📦 ", "/home/dima/Progs/dwmblocks-distrotube/scripts/pacupdate",		360,		        9},
	
	{"  ", "/home/dima/Progs/dwmblocks-distrotube/scripts/disk",			60,			    0},

	{" 💻 ", "/home/dima/Progs/dwmblocks-distrotube/scripts/memory",	        6,		            1},

	{"  ", "/home/dima/Progs/dwmblocks-distrotube/scripts/volume",			1,		            10},

	{" 🕑 ", "/home/dima/Progs/dwmblocks-distrotube/scripts/clock",			5,		            0},

	{"  ", "/home/dima/Progs/dwmblocks-distrotube/scripts/battery",			5,			    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
