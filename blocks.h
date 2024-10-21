//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/

	{"   ", "/home/dima/Prog/dwmblocks_freebsd/scripts/volume",			1,		            0},

	{"   ", "/home/dima/Prog/dwmblocks_freebsd/scripts/disk",			60,			    0},
    
    	{"  ", "/home/dima/Prog/dwmblocks_freebsd/scripts/cels",         5,              0}, 

    	{"   ", "/home/dima/Prog/dwmblocks_freebsd/scripts/cpu",           1,              0},

	{"   ", "/home/dima/Prog/dwmblocks_freebsd/scripts/memory",	        1,		            0},

	{" 󰃰  ", "/home/dima/Prog/dwmblocks_freebsd/scripts/clock",			1,		            0},

	{" ", "/home/dima/Prog/dwmblocks_freebsd/scripts/battery",			5,			    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
