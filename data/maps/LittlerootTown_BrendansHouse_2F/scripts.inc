.set LOCALID_MOM, 1

LittlerootTown_BrendansHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayersHouse_Mapscript2_Init
	.byte 0	

PlayersHouse_Mapscript2_Init::
	map_script_2 VAR_HAIFA_CITY_MOMS_STATE, 0, PlayersHouse_2F_EventScript_MeetMom
	.2byte 0	

PlayersHouse_2F_EventScript_MeetMom::
	lockall
	delay 10
	addobject LOCALID_MOM
    applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_2F_Movement_MomEntersRoom   
	waitmovement 0
	playse SE_PIN	
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MOM, Common_Movement_Delay48
	waitmovement 0
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	msgbox PlayersHouse_2F_Text_GoodMorning, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_2F_Movement_MomExitsRoom   
	waitmovement 0
	removeobject LOCALID_MOM
	setflag FLAG_PLAYERSHOUSE_MOMENTERSROOM
	setvar VAR_HAIFA_CITY_MOMS_STATE, 1
    releaseall
    end

LittlerootTown_BrendansHouse_2F_EventScript_PC::
	lockall
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
	setvar VAR_0x8004, 1
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
	setvar VAR_0x8004, 1
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

PlayersHouse_2F_EventScript_Notebook::
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
	end

PlayersHouse_2F_EventScript_DS::
	msgbox PlayersHouse_2F_Text_DS, MSGBOX_SIGN
	end

PlayersHouse_2F_EventScript_Clock::
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_SIGN
	end

PlayersHouse_2F_EventScript_PokeballDoll::
	msgbox PlayersHouse_2F_Text_PokeballDoll, MSGBOX_SIGN
	end		

PlayersHouse_2F_Text_ClockIsStopped:
	.string "The clock is stopped…\p"
	.string "Better set it and start it!$"

PlayersHouse_2F_Text_Notebook:
	.string "{PLAYER} flipped open the notebook.\p"
	.string "ADVENTURE RULE NO. 1\n"
	.string "Open the MENU with START.\p"
	.string "ADVENTURE RULE NO. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "The remaining pages are blank…$"

Common_Text_LookCloserAtMap: @ 81F8820
	.string "{PLAYER} took a closer look at the\n"
	.string "HOENN region map.$"

PlayersHouse_2F_Text_DS:
	.string "It's a Nintendo DS.\p"
	.string "A Cartridge is connected to the\n"
	.string "back of it.$"

PlayersHouse_2F_Text_PokeballDoll:
	.string "It's my POKéBALL replica…\p"
	.string "Better leave it right where it is.$"

PlayersHouse_2F_Text_GoodMorning:
	.string "{COLOR RED}MOM:{COLOR DARK_GRAY} Good morning sunshine! I hope you\n"
	.string "had a wonderful rest.\p"
	.string "We are waiting for you downstairs.$"

LittlerootTown_BrendansHouse_2F_Movement_MomEntersRoom:
	walk_right
	walk_right
	walk_in_place_slow_right
	delay_16
    walk_in_place_right
	step_end

LittlerootTown_BrendansHouse_2F_Movement_MomExitsRoom:
	walk_in_place_slow_left
	walk_left
	walk_left
	step_end
