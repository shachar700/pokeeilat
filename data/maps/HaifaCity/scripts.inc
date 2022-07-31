.set LOCALID_BIRCH, 5

HaifaCity_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HaifaCity_OnFrame
	.byte 0

HaifaCity_OnFrame:
	map_script_2 VAR_HAIFA_CITY_STATE, 0, HaifaCity_EventScript_PickStarter	
	.2byte 0

HaifaCity_EventScript_CityGym::
	msgbox HaifaCity_Text_CityGym, MSGBOX_NPC
	end

HaifaCity_EventScript_FatMan::
	msgbox HaifaCity_Text_CanUsePCToStoreItems, MSGBOX_NPC
	end

HaifaCity_EventScript_Boy::
	msgbox HaifaCity_Text_BirchSpendsDaysInLab, MSGBOX_NPC
	end

HaifaCity_EventScript_LittleKid::
	msgbox HaifaCity_Text_LittleKid, MSGBOX_NPC
	end

HaifaCity_EventScript_LittleGirl::
	msgbox HaifaCity_Text_LittleGirl, MSGBOX_NPC
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

HaifaCity_Text_ProfIntro:
	.string "PROF: Oh hi there {PLAYER}!\p"
	.string "I came here to let you know that\n"
	.string "your very first Pokemon is\l"
	.string "waiting for you.\p"
	.string "Follow me to my POKEMON LAB.$"

HaifaCity_Text_CanUsePCToStoreItems:
	.string "I never thought of the day people could\n"
	.string "store items in the clouds.\p"
	.string "The power of science is astounding!$"

HaifaCity_Text_BirchSpendsDaysInLab:
	.string "PROF. ARAUCARIA is a very messy guy.\n"
	.string "His house has piles of books and trash\l"
	.string "all over the place…\p"
	.string "He should really clean up his\n"
	.string "living room.$"

HaifaCity_Text_LittleKid:
	.string "Weeeeeeeeeeeeee.$"

HaifaCity_Text_LittleGirl:
	.string "Help me! I'm getting chased.$"

HaifaCity_Text_TownSign:
	.string "HAIFA CITY\n"
	.string "“A city that can never bore.”$"

HaifaCity_Text_ProfBirchsLab:
	.string "PROF. ARAUCARIA'S mailbox.\n"
	.string "It's full of letters.$"

HaifaCity_Text_PlayersMailbox:
	.string "My family's mailbox…\n"
	.string "None of the letters are for me though.$"

HaifaCity_Text_RivalsMailbox:
	.string "Shir's mailbox…\n"
	.string "It would be rude to sniff around.$"

HaifaCity_Text_CityGym:
	.string "HAIFA CITY GYM\n"
	.string "Where the sea hits the shore.$"

HaifaCity_Movement_WalkInPlace:
	walk_in_place_slow_left
	step_end

HaifaCity_Movement_BirchGreet:
	walk_up
	walk_left
	walk_left
	step_end

HaifaCity_Movement_ProfEntersHouse:
	walk_up
	set_invisible
	step_end

HaifaCity_Movement_PlayerEntersHouse:
	walk_right
	walk_up
	set_invisible
	step_end

HaifaCity_EventScript_PickStarter::
	lock
	applymovement LOCALID_BIRCH, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_BIRCH, HaifaCity_Movement_WalkInPlace
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	applymovement LOCALID_BIRCH, HaifaCity_Movement_BirchGreet
	waitmovement 0
	msgbox HaifaCity_Text_ProfIntro, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_FOLLOW_ME, FALSE
	applymovement LOCALID_BIRCH, HaifaCity_Movement_WalksToLab
	applymovement OBJ_EVENT_ID_PLAYER, HaifaCity_Movement_WalksToLab
	waitmovement 0
	opendoor 39, 40
	waitdooranim
	applymovement LOCALID_BIRCH, HaifaCity_Movement_ProfEntersHouse
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, HaifaCity_Movement_PlayerEntersHouse
	waitmovement 0
	closedoor 39, 40
	waitdooranim
	setflag FLAG_HIDE_BIRCH_HAIFA
	setvar VAR_HAIFA_CITY_STATE, 1
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	warpsilent MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
	waitstate
	release
	end


HaifaCity_Movement_WalksToLab:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
