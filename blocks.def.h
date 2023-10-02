//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	    /*Command*/                                     /*Update Interval*/     /*Update Signal*/
    {"REC:",        "cat /tmp/recordingstatus 2>/dev/null",          0,                     9},
    {"MEM:",        "memory",                                       30,                     0},
    {"VOL:",        "volume",                                        0,                    10},
    {"",            "date '+%b %d (%a) %H:%M:%S'",                   1,                     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
