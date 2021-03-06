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
    SetShort("The Watery sewer bend");
    SetLong("You can't see anything but the water you're in up to your hips. The sewer\n"+
        "seems to bend and lead west and north.");
    SetItems( ([ 
        "north" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        "west" : "You can't see anything in that direction and your light isn't enough to light\n"+
            "that far.",
        "water" : "It looks dark and murky, and emanates a foul stench.",
        ] ));
    SetExits( ([
        "north" : "/domains/diku-alfa/room/70.zon/7067",
        "west" : "/domains/diku-alfa/room/70.zon/7060",
        ] ));
}

void init(){
   ::init();
}

/* Extra Information Original Diku Output 
Room name: The Watery sewer bend, Of zone : 14. V-Number : 7068, R-number : 451
Sector type : Mountains Special procedure : No
Room flags: DARK INDOORS 
Description:
You can't see anything but the water you're in up to your hips. The sewer
seems to bend and lead west and north.
Extra description keywords(s): 
water

------- Chars present -------

--------- Contents ---------

------- Exits defined -------
Direction north . Keyword : (null)
Description:
  You can't see anything in that direction and your light isn't enough to light
that far.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7067

Direction west . Keyword : (null)
Description:
  You can't see anything in that direction and your light isn't enough to light
that far.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 7060
*/
