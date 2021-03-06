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
#include <armor_types.h>
#include <damage_types.h>

inherit LIB_ARMOR;

static void create(){
    armor::create();

    SetKeyName("leather cap");
    SetId(({"cap","leather", "leather cap" }));
    SetAdjectives(({"soft"}));
    SetShort("a leather cap");
    SetLong("A leather cap.");
    SetBaseCost("gold",50);    
    SetDamagePoints(61);
    SetMass(10);
    SetProtection(BLUNT,2);
    SetProtection(BLADE,6);
    SetProtection(KNIFE,6);
    SetArmorType(A_HELMET);
}

void init(){
    ::init();
}

/* Extra Information Original Diku Output
Object name: [cap leather], R-number: [33], V-number: [3061] Item type: ARMOR
Short description: a leather cap
Long description:
A leather cap is lying on the ground.
Extra description keyword(s): None
Can be worn on :TAKE HEAD 
Set char bits  :NOBITS
Extra flags: NOBITS
Weight: 1, Value: 50, Cost/day: 10, Timer: 0
In room: 3001 ,In object: None ,Carried by:Nobody
AC-apply : [2]
Equipment Status: NONE
Special procedure : No
Contains : Nothing
Can affect char :
    Affects : NONE By 0
    Affects : NONE By 0
*/
