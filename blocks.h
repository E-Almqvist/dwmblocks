//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//  
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "/opt/scripts/cmus.sh", 1, 3}, 
	{"", "/opt/scripts/netinfo.sh", 1, 2}, // TODO: signals
	{"vol: ", "/opt/scripts/pavolume.sh", 0, 1}, // TODO: make this work
	{"bat: ", "/opt/scripts/battery.sh", 1, 1}, // TODO: make this work
	{"", "printf \"{$(date +\"%H:%M:%S, %A, %Y-%m-%d\")}\"", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 4;
