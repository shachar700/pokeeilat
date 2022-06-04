.set LOCALID_BIRCH, 5

HaifaCity_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HaifaCity_OnFrame
	.byte 0

HaifaCity_OnFrame:
	map_script_2 VAR_HAIFA_CITY_STATE, 0, HaifaCity_EventScript_GetMon
	.2byte 0

HaifaCity_EventScript_GetMon::
	lock
	faceplayer
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	playse SE_PIN
	msgbox HaifaCity_Text_ComeCloser, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, HaifaCity_Movement_PlayerGetsCloser
	waitmovement 0
	msgbox HaifaCity_Text_BirchGiveMon, MSGBOX_DEFAULT
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	fadescreen FADE_TO_BLACK
	special ChooseStarter
	waitstate
	msgbox HaifaCity_Text_YouSavedMe, MSGBOX_DEFAULT
	special HealPlayerParty
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	setvar VAR_HAIFA_CITY_STATE, 1
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
	waitstate
	release
	end

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

HaifaCity_Text_ComeCloser:
	.string "{COLOR GREEN}PROF:{COLOR DARK_GRAY} Oh hi there {PLAYER}!\n"
	.string "Come closer.$"

HaifaCity_Text_BirchGiveMon:
	.string "Your parents asked me to aid you in\n"
	.string "your journey.\p"
	.string "Unfortunately I'm too busy studying\n"
	.string "The Pseudo-legendary Pokémon.\p"
	.string "Take a Pokémon who'll assist you\n"
	.string "in your journey.$"

HaifaCity_Text_YouSavedMe:
	.string "{COLOR GREEN}PROF:{COLOR DARK_GRAY}: That's\n"
	.string "a great pick for your partner!\p"
	.string "Lets go to my POKéMON LAB so I can\n"
	.string "give you your Pokedex.$"

HaifaCity_Text_CanUsePCToStoreItems:
	.string "I never thought of the day people could store\n"
	.string "items in the clouds.\p"
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
	.string "Maya's mailbox…\n"
	.string "It would be rude to sniff around.$"

HaifaCity_Text_CityGym:
	.string "HAIFA CITY GYM\n"
	.string "Where the sea hits the shore.$"

HaifaCity_Movement_BirchGreet:
	face_left
	step_end

HaifaCity_Movement_PlayerGetsCloser:
	walk_down
	walk_down
	face_right
	step_end
