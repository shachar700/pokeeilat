.set LOCALID_BIRCH, 1

ProfessorBirchsLab_OnWarp:
	map_script_2 VAR_TEMP_1, 0, ProfessorBirchsLab_EventScript_PlayerTurnNorth
	.2byte 0

ProfessorBirchsLab_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

LittlerootTown_ProfessorBirchsLab_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ProfessorBirchsLab_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_HAIFA_CITY_STATE, 1, ComeCloser
	.2byte 0


ComeCloser::
	lock
	setvar VAR_HAIFA_CITY_STATE, 2
	applymovement LOCALID_BIRCH, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox ComeCloser_Text_0
	closemessage
	call PlayerChoosesStarter
	release
	return


PlayerChoosesStarter::
	msgbox PlayerChoosesStarter_Text_0
	waitmessage
	multichoice 25, 5, MULTI_CHOOSE_STARTER, 1
	closemessage
	compare VAR_RESULT, 0
	goto_if_eq PlayerChoosesStarter_2
	compare VAR_RESULT, 1
	goto_if_eq PlayerChoosesStarter_3
	compare VAR_RESULT, 2
	goto_if_eq PlayerChoosesStarter_4
PlayerChoosesStarter_1:
	return

PlayerChoosesStarter_2:
	bufferspeciesname STR_VAR_1, SPECIES_DRATINI
	setvar VAR_STARTER_CHOICE, SPECIES_DRATINI
	goto NewProfessor_EventScript_GiveStarter
	goto PlayerChoosesStarter_1

PlayerChoosesStarter_3:
	bufferspeciesname STR_VAR_1, SPECIES_LARVITAR
	setvar VAR_STARTER_CHOICE, SPECIES_LARVITAR
	goto NewProfessor_EventScript_GiveStarter
	goto PlayerChoosesStarter_1

PlayerChoosesStarter_4:
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
	setvar VAR_STARTER_CHOICE, SPECIES_BELDUM
	goto NewProfessor_EventScript_GiveStarter
	goto PlayerChoosesStarter_1


NewProfessor_EventScript_GiveStarter::
	showmonpic VAR_STARTER_CHOICE, 10, 3
	playmoncry VAR_STARTER_CHOICE, 0
	msgbox NewProfessor_EventScript_GiveStarter_Text_0, MSGBOX_YESNO
	waitmessage
	waitmoncry
	compare VAR_RESULT, NO
	goto_if_eq NewProfessor_EventScript_GiveStarter_2
	givemon VAR_STARTER_CHOICE, 5, ITEM_NONE
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq NewProfessor_EventScript_GiveStarter_5
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewProfessor_EventScript_GiveStarter_Text_1
	waitfanfare
	call NicknamePartyMon
NewProfessor_EventScript_GiveStarter_1:
	call GivePokedex
	closemessage
	return

NewProfessor_EventScript_GiveStarter_2:
	hidemonpic
	closemessage
	goto PlayerChoosesStarter
	goto NewProfessor_EventScript_GiveStarter_1

NewProfessor_EventScript_GiveStarter_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewProfessor_EventScript_GiveStarter_Text_1
	waitfanfare
	call NicknameBoxMon
	msgbox NewProfessor_EventScript_GiveStarter_Text_2
	goto NewProfessor_EventScript_GiveStarter_1


GivePokedex::
	msgbox GivePokedex_Text_0
	playfanfare MUS_OBTAIN_ITEM
	message GivePokedex_Text_1
	waitfanfare
	closemessage
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_ADVENTURE_STARTED
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	msgbox GivePokedex_Text_2, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 5
	msgbox GivePokedex_Text_3, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	return


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_1
	return

NicknameBoxMon_1:
	call Common_EventScript_NameReceivedBoxMon
	return


ProfessorBirchStudy::
	lock
	faceplayer
	msgbox ProfessorBirchStudy_Text_0
	release
	end


ComeCloser_Text_0:
	.string "I've been preparing these Pokemon for\n"
	.string "you. To get started on your journey,\l"
	.string "I'm gonna let you choose one of my\l"
	.string "little Pokemon. Choose wisely.$"

PlayerChoosesStarter_Text_0:
	.string "Which starter will you choose?$"

NewProfessor_EventScript_GiveStarter_Text_0:
	.string "Do you want to choose {STR_VAR_1}?$"

NewProfessor_EventScript_GiveStarter_Text_1:
	.string "{PLAYER} Recieved {STR_VAR_1}!$"

NewProfessor_EventScript_GiveStarter_Text_2:
	.string "Transferred {STR_VAR_1} to PC$"

GivePokedex_Text_0:
	.string "Also, take this. It is a POKéDEX to help\n"
	.string "you document Pokemon along your\l"
	.string "journey.$"

GivePokedex_Text_1:
	.string "{PLAYER} received the POKéDEX!$"

GivePokedex_Text_2:
	.string "Also take these with you.$"

GivePokedex_Text_3:
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can\l"
	.string "collect research for the Pokedex.$"

NicknamePartyMon_Text_0:
	.string "Give a nickname?$"

ProfessorBirchStudy_Text_0:
	.string "I study the Pseudo-Legendary Pokemon\n"
	.string "who has a lot of strength compared to\l"
	.string "other Pokemon.$"
