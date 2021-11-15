//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{"<\x02  ", "updates", 	120, 				0},

	{"\x03﬙  ",  "upt", 		10, 				0},
 
	{"\x04﨎  ",  "weather", 	 1800, 				 0},

	{"\x05  ",  "cputemp", 	1, 					0},

	{"\x06  ",  "mem", 		5, 					0},

	{"\x07  ",  "xkb-switch", 	1, 					10},

	{"\x08  ",  "pamixer --get-volume-human", 1, 	0},

	{"\x09  ",  "clock", 		5, 					0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "<";
static unsigned int delimLen = 5;