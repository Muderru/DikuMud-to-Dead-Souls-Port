// Based on Diku MUD Alfa.  Program and Concept created by
// Sebastian Hammer, Michael Seifert, Hans Henrik Staerfeldt,
// Tom Madsen, and Katja Nyboe.
// http://www.dikumud.com
//
// Modified by Lash (Christopher Coker) for use with:
//
// The Dead Souls Mud Library version 2
// developed by Cratylus
// http://www.dead-souls.net

#include <lib.h>

inherit LIB_DOOR;

static void create() {
    door::create();

    SetSide("north", ([ "id" : ({"door leading west", "door", "north door", "wooden", "wooden door"}),
        "short" : "a wooden door leading north",
        "long" : "This is the north side of a wooden door leading south.",
        "lockable" : 0 ]) );

    SetSide("south", ([ "id" : ({"door leading south", "door", "south door", "wooden", "wooden door"}),
        "short" : "a wooden door leading south",
        "long" : "This is the north side of a wooden door leading south.",
        "lockable" : 0 ]) );

    SetClosed(1);
    SetLocked(0);
}

void init(){
    ::init();
}
