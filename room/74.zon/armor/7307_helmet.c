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
#include <damage_types.h>
#include <armor_types.h>

inherit LIB_ARMOR;

int WearMe();

void create(){
    armor::create();

    SetKeyName("a steel helmet");
    SetId("helmet", "steel");
    SetAdjectives( ({ " "," "}));
    SetShort("a steel helmet");
    SetLong("The helmet is made from steel.");
    SetMass(150);
    SetBaseCost("gold", 9000);
    SetDamagePoints(100);
    SetProtection(BLUNT, 16); //change as necessary
    SetProtection(BLADE, 27); //change as necessary
    SetProtection(KNIFE, 27); //change as necessary
    SetArmorType(A_HELMET);
    SetWear( (:WearMe:) );
}


void init(){
    ::init();
}

int WearMe(){
    if(this_player()->GetMorality() > 700 | this_player()->GetMorality() <-700){
       write("You are unable to use this armor");//player must be less than good and more than evil, as defined in classes.c, to wear
       return 0;
    }
    else {
       write("You wear "+this_object()->GetShort());
    return 1;
    }
}


/* Extra Information Original Diku Output 
Object name: [helmet], R-number: [224], V-number: [7307] Item type: ARMOR
Short description: a steel helmet
Long description: The steel helmet lies here.
Extra description keyword(s):
----------
helmet
----------
Can be worn on: TAKE HEAD 
Set char bits: NOBITS
Extra flags: ANTI-GOOD ANTI-EVIL 
Weight: 15, Value: 9000, Cost/day: 3000, Timer: 0
In room: 3001, In object: None, Carried by:Nobody
AC-apply : [9]
Equipment Status: NONE
Special procedure: No
Contains: Nothing
Can affect char:
    Affects: DEX By -1
    Affects: NONE By 0
*/

