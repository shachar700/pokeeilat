InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, InsideOfTruck_OnWarp
	.byte 0

InsideOfTruck_OnWarp:
	map_script_2 VAR_TEMP_1, 0, InsideOfTruck_GiveRunningShoes
	.2byte 0

InsideOfTruck_GiveRunningShoes::
	setflag FLAG_SYS_B_DASH
	setvar VAR_TEMP_1, 1 @ get run shoes on warp 
	end

InsideOfTruck_EventScript_Sign::
	msgbox InsideOfTruck_Text_Sign, MSGBOX_SIGN
	end

InsideOfTruck_EventScript_SmashFemale:: 
	msgbox InsideOfTruck_Text_SmashFemale, MSGBOX_NPC
	turnobject 1, DIR_WEST
	end	
	
InsideOfTruck_EventScript_SmashMale:: 
	msgbox InsideOfTruck_Text_SmashMale, MSGBOX_NPC
	turnobject 3, DIR_EAST
	end	

InsideOfTruck_EventScript_SmashMale2:: 
	msgbox InsideOfTruck_Text_SmashMale2, MSGBOX_NPC
	end

Script_InsideOfTruck_EventScript_Celebi::
	lock
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	applymovement 4, CelebiApproaches
	waitmovement 0
	playmoncry SPECIES_CELEBI, 0
	msgbox InsideOfTruck_Text_Celebi, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	applymovement 4, CelebiLeaves
	waitmovement 0
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 255, 8, 5
	end


InsideOfTruck_Text_Sign: 
	.string "Lake of Serenity.\n"
	.string "Relaxing resident for POKéMON.$"

InsideOfTruck_Text_SmashFemale:
	.string "Lake of Serenity has been known to be a\n"
	.string "relaxing resident for POKéMON.\p"		
	.string "It's deep in the woods so people can not\n"
	.string "reach it so easily.$"

	
InsideOfTruck_Text_SmashMale:
	.string "Do not interfere, kid. We are\n"
	.string "investigating the Lake of Serenity.$"	
	
InsideOfTruck_Text_SmashMale2:
	.string "Woah kid, where did you come from?$"

InsideOfTruck_Text_Celebi::
	.string "{COLOR GREEN}Celebi: {COLOR DARK_GRAY}Biii Celebiii.\p"
	.string "The sound coming from Celebi's voice\n"
	.string "sounded like a stress single.$"

CelebiApproaches:
	walk_down
	walk_down
	face_right
	delay_16
	face_left
	delay_16
	face_down
	step_end
	
CelebiLeaves:
	walk_up	
	walk_up	
	walk_up	
	walk_up	
	delay_8
	step_end
