.set LOCALID_BIRCH, 5

HaifaCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HaifaCity_OnTransition
	.byte 0

HaifaCity_OnTransition:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	call Common_EventScript_SetupRivalGfxId
	call_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK, HaifaCity_EventScript_Setvar
	end

HaifaCity_EventScript_Setvar:
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
	return

HaifaCity_EventScript_EncounterProfRight::
	lockall
	setvar VAR_0x8008, 0
	goto HaifaCity_EventScript_FollowProfessor
	end

HaifaCity_EventScript_EncounterProfDown::
	lockall
	setvar VAR_0x8008, 1
	goto HaifaCity_EventScript_FollowProfessor
	end

HaifaCity_EventScript_FollowProfessor::
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
	waitmovement 0
	msgbox HaifaCity_Text_FollowMe, MSGBOX_DEFAULT
	closemessage
	delay 30
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_PlayerApproachProf0
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_PlayerApproachProf1
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement LOCALID_BIRCH, LittlerootTown_Movement_MomEnterHouse
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
	warpsilent MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 12
	waitstate
	return

LittlerootTown_EventScript_PlayerApproachProf0::
	applymovement LOCALID_BIRCH, HaifaCity_Movement_Prof
	applymovement OBJ_EVENT_ID_PLAYER, HaifaCity_Movement_PlayerApproachProf0
	waitmovement 0
	return

LittlerootTown_EventScript_PlayerApproachProf1::
	applymovement LOCALID_BIRCH, HaifaCity_Movement_Prof
	applymovement OBJ_EVENT_ID_PLAYER, HaifaCity_Movement_PlayerApproachProf1
	waitmovement 0
	return

HaifaCity_EventScript_CityGym::
	msgbox HaifaCity_Text_CityGym, MSGBOX_NPC
	end

HaifaCity_EventScript_FatMan::
	msgbox HaifaCity_Text_CanUsePCToStoreItems, MSGBOX_NPC
	end

HaifaCity_EventScript_Boy::
	msgbox HaifaCity_Text_BirchSpendsDaysInLab, MSGBOX_NPC
	end

HaifaCity_EventScript_TownSign::
	msgbox HaifaCity_Text_TownSign, MSGBOX_SIGN
	end

HaifaCity_EventScript_BirchsLabMailbox::
	msgbox HaifaCity_Text_ProfBirchsLab, MSGBOX_SIGN
	end

HaifaCity_EventScript_PlayersMailbox::
	msgbox HaifaCity_Text_PlayersMailbox, MSGBOX_SIGN
	end

HaifaCity_EventScript_RivalsMailbox::
	msgbox HaifaCity_Text_RivalsMailbox, MSGBOX_SIGN
	end

HaifaCity_Text_FollowMe:
	.string "{COLOR GREEN}Prof. Cypress:{COLOR DARK_GRAY} Hey there {PLAYER}!\n"
	.string "Follow me to my house.\p"
	.string "I need your help with\n"
	.string "my next study.$"

HaifaCity_Text_CanUsePCToStoreItems:
	.string "I never thought of the day people could store\n"
	.string "items in the clouds.\p"
	.string "The power of science is astounding!$"

HaifaCity_Text_BirchSpendsDaysInLab:
	.string "PROF. CYPRESS is a very messy guy.\n"
	.string "His house has piles of books and trash\l"
	.string "all over the place…\p"
	.string "He should really clean up his\n"
	.string "living room.$"

HaifaCity_Text_TownSign:
	.string "HAIFA CITY\n"
	.string "“A city that can never bore.”$"

HaifaCity_Text_ProfBirchsLab:
	.string "PROF. CYPRESS'S Mailbox.\n"
	.string "It's full of letters.$"

HaifaCity_Text_PlayersMailbox:
	.string "My family's Mailbox…\n"
	.string "None of the letters are for me though.$"

HaifaCity_Text_RivalsMailbox:
	.string "Noam's Mailbox…\n"
	.string "It would be rude to sniff around.$"

HaifaCity_Text_CityGym:
	.string "HAIFA CITY GYM\n"
	.string "Where the sea hits the shore.$"


HaifaCity_Movement_PlayerApproachProf0:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

HaifaCity_Movement_PlayerApproachProf1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

HaifaCity_Movement_Prof:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

HaifaCity_Movement_BirchEnterThroughDoor:
	walk_up
	step_end

LittlerootTown_Movement_PlayerEnterHouse:
	walk_right
	walk_up
	step_end

LittlerootTown_Movement_MomEnterHouse:
	walk_up
	set_invisible
	step_end

