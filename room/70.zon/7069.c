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
#include <terrain_types.h>

inherit LIB_ROOM;

static void create() {
    room::create();

    SetTerrainType(T_UNDERGROUND | T_ROUGH);
    SetAmbientLight(0);
    SetShort("A ledge by the dark pool");
    SetLong("You can't see much here but the echo tells you that there's quite a drop\n"+
        "down. You can just make out a huge dark pool out there in the darkness, \n"+
        "mostly because of the trickling of water. The water from the sewer actually\n"+
        "washes over this ledge and makes it quite slippery. From here it drops, \n"+
        "like a waterfall, into the pool far down.");
    SetItems( ([ 
        "south" : "You can't see a thing. It's too dark.",
        "west" : "You can't see a thing. It's too dark.",
        "water" : "It looks dark and murky, and emanates a foul stench.",
        ] ));

    SetExits( ([
        "south" : "/domains/diku-alfa/room/70.zon/7070",
        "west" : "/domains/diku-alfa/room/70.zon/7064",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: A ledge by the dark pool, Of zone : 14. V-Number : 7069, R-number : 452
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You can't see much here but the echo tells you that there's quite a drop
down. You can just make out a huge dark pool out there in the darkness, 
mostly because of the trickling of water. The water from the sewer actually
washes over this ledge and makes it quite slippery. From here it drops, 
like a waterfall, into the pool far down.
Extra description keywords(s): 
water

------- Chars present -------
rat(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You can't see a thing. It's too dark.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7070

Direction west . Keyword : (null)
Description:
  You can't see a thing. It's too dark.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7064
*/
