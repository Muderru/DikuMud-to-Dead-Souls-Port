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

inherit LIB_SHOP;

static void create() {
    ::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Mage's Bar");
    SetLong(" The bar is one of the weirdest in the land. Mystical images float around\n"+
        "the air. Illusions of fine furniture appear all around the room.");
    SetItems( ([
        "north" : "You see the lobby.",
        "east" : "You see the laboratory.",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3042_m_waiter" : 1,
        ]) );
    SetExits( ([
        "north" : "/domains/diku-alfa/room/30.zon/3017",
        "east" : "/domains/diku-alfa/room/30.zon/3019",
        ]) );
}

void init(){
    ::init();
}

/* NO_NPC's except the Mage's Waiter allowed in room*/
int CanReceive(object ob) {
    if(ob && !inherits(LIB_NPC, ob) | !strcmp("the Mage's Waiter", ob->GetShort())){
    return 1;
    }
    else
    return 0;
}

/* Extra Information Original Diku Output 
Room name: Mage's Bar, Of zone : 1. V-Number : 3018, R-number : 24
Sector type : Inside Special procedure : No
Room flags: NO_MOB INDOORS 
Description:
   The bar is one of the wierdest in the land.  Mystical images float around

the air.  Illusions of fine furniture appear all around the room.

Extra description keywords(s): None
------- Chars present -------
waiter(MOB)

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You see the lobby.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3017
Direction east . Keyword : (null)
Description:
  You see the laboratory.

Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3019
*/
