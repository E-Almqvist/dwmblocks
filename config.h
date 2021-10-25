//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//  
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "/opt/scripts/cmus.sh", 1, 4}, 
	{"", "/opt/scripts/netinfo.sh", 1, 3}, 
	{"bat: ", "/opt/scripts/battery.sh", 1, 2}, 
	{"vol: ", "/opt/scripts/pavolume.sh", 1, 1}, 
	{"", "printf \"{$(date +\"%H:%M:%S, %A, %Y-%m-%d\")}\"", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "    ";
