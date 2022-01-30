.set LOCALID_TWIN, 1
.set LOCALID_MOM, 4
.set LOCALID_RIVAL, 7
.set LOCALID_BIRCH, 8

HaifaCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HaifaCity_OnTransition
	.byte 0

	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
	@ 1: Met Rival
	@ 2: Saving Birch
	@ 3: Received Pokedex
	@ 4: Received Running Shoes

	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
	@ 1: In truck male
	@ 2: In truck female
	@ 3: Entered house
	@ 4: Told to go set clock
	@ 5: Entered 2F to set clock
	@ 6: Set clock
	@ 7: Told to go meet rival

	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
	@ 1: On Truck (and is corresponding gender)
	@ 2: Met Rival's Mom (and is corresponding gender)
	@ 3: Entered Hall of Fame
	@ REMOVED 4: Completed Lati TV / SS Ticket event
	@ 5: Exited house after above event

	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
	@ 1: Never occurs
	@ 2: Entered Rival's bedroom
	@ 3: Met Rival
	@ 4: Received Pokedex


HaifaCity_OnTransition:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	call Common_EventScript_SetupRivalGfxId
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

HaifaCity_EventScript_BirchsLabSign::
	msgbox HaifaCity_Text_ProfBirchsLab, MSGBOX_SIGN
	end

HaifaCity_EventScript_PlayersHouseSignMale::
	msgbox HaifaCity_Text_PlayersHouse, MSGBOX_DEFAULT
	return


HaifaCity_EventScript_PlayersHouseSignFemale::
	msgbox HaifaCity_Text_PlayersHouse, MSGBOX_DEFAULT
	return


HaifaCity_Text_CanUsePCToStoreItems:
	.string "If you use a PC, you can store items\n"
	.string "and POKéMON.\p"
	.string "The power of science is staggering!$"

HaifaCity_Text_BirchSpendsDaysInLab:
	.string "PROF. BIRCH spends days in his LAB\n"
	.string "studying, then he'll suddenly go out in\l"
	.string "the wild to do more research…\p"
	.string "When does PROF. BIRCH spend time\n"
	.string "at home?$"

HaifaCity_Text_TownSign:
	.string "HAIFA CITY\n"
	.string "“A city that can never bore.”$"

HaifaCity_Text_ProfBirchsLab:
	.string "PROF. CYPRESS'S POKéMON LAB$"

HaifaCity_Text_PlayersHouse:
	.string "{PLAYER}'s HOUSE$"

