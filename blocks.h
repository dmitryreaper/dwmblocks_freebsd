//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/

	{"   ", "/home/dima/Progs/dwmblocks/scripts/volume",			1,		            0},

	{"   ", "/home/dima/Progs/dwmblocks/scripts/disk",			60,			    0},
    
    {"  ", "/home/dima/Progs/dwmblocks/scripts/cels",         5,              0}, 

    {"   ", "/home/dima/Progs/dwmblocks/scripts/cpu",           1,              0},

	{"   ", "/home/dima/Progs/dwmblocks/scripts/memory",	        1,		            0},

	{" 󰃰  ", "/home/dima/Progs/dwmblocks/scripts/clock",			1,		            0},

	{" ", "/home/dima/Progs/dwmblocks/scripts/battery",			5,			    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
