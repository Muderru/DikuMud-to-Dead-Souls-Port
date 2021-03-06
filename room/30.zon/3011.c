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

int ReadSign();

static void create() {
    ::create();

    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Weapon Shop");
    SetLong("  You are inside the weapon shop. There is a small note on the counter");
    SetItems( ([
        "south" : "You see the main street.",
        "note" : "The note reads:\n\n"+
                 "  List  - Show which various items are in the store.\n"+
                 "  Buy   - Buy an item.\n"+
                 "  Value - The shopkeeper will (free of charge) tell how much he will\n"+
                 "          pay for your item.\n"+
                 "  Sell  - Sell an item.",
        ]) );
    SetExits( ([ 
        "south" : "/domains/diku-alfa/room/30.zon/3016",
        ]) );
    SetInventory( ([
        "/domains/diku-alfa/room/30.zon/npc/3003_weaponsmith" : 1,
        ]) );
    SetRead( ([
        "note" : (:ReadSign:),
        ]) );
}

mixed ReadSign(){
    return (mixed)this_player()->eventPage("/domains/diku-alfa/room/30.zon/txt/weaponshop.txt");

}
void init(){
    ::init();
}

/* Extra Information Original Diku Output 
Room name: The Weapon Shop, Of zone : 1. V-Number : 3011, R-number : 17
Sector type : Inside Special procedure : No
Room flags: INDOORS 
Description:
   You are inside the weapon shop.  There is a small note on the counter.

Extra description keywords(s): 
note

------- Chars present -------
weaponsmith(MOB)

--------- Contents ---------

------- Exits defined -------
Direction south . Keyword : (null)
Description:
  You see the main street.
Exit flag: NOBITS 
Key no: -1
To room (V-Number): 3016
*/
