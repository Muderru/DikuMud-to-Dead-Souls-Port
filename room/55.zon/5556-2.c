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
inherit LIB_ROOM;

static void create() {
    ::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("The Innkeepers Storage Room");
    SetLong("  This is a small, bare room where the innkeeper keeps his goods.");
    SetInventory(([
        "/domains/diku-alfa/room/55.zon/meals/3000_beer_barrel" : 20,
	"/domains/diku-alfa/room/55.zon/meals/3001_beer_bottle" : 20,       
      ]));
    SetNoClean(1);

    SetExits(([
         "None" : "",
        
      ]));

}

void init(){
    ::init();
}
