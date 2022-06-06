HaifaCity_ProfessorsHouse_MapScripts::
	.byte 0


HaifaCity_EventScript_GiveMon::
	lockall
	goto_if_unset FLAG_SYS_POKEMON_GET, HaifaCity_EventScript_GiveMon_2
	msgbox HaifaCity_EventScript_GiveMon_Text_1
HaifaCity_EventScript_GiveMon_1:
	waitmessage
	releaseall
	end

HaifaCity_EventScript_GiveMon_2:
	msgbox HaifaCity_EventScript_GiveMon_Text_0
	multichoice 20, 0, MULTI_CHOOSE_STARTER, 1
	switch VAR_RESULT
	case 0, HaifaCity_EventScript_GiveMon_7
	case 1, HaifaCity_EventScript_GiveMon_8
	case 2, HaifaCity_EventScript_GiveMon_9
	case 3, HaifaCity_EventScript_GiveMon_10
	case 4, HaifaCity_EventScript_GiveMon_11
	case 5, HaifaCity_EventScript_GiveMon_12
	case 6, HaifaCity_EventScript_GiveMon_13
	case 7, HaifaCity_EventScript_GiveMon_14
	case 8, HaifaCity_EventScript_GiveMon_15
HaifaCity_EventScript_GiveMon_5:
	setflag FLAG_SYS_POKEMON_GET
	goto HaifaCity_EventScript_GiveMon_1

HaifaCity_EventScript_GiveMon_7:
	call GiveDratini
	goto HaifaCity_EventScript_GiveMon_5

HaifaCity_EventScript_GiveMon_8:
	call GiveLarvitar
	goto HaifaCity_EventScript_GiveMon_5

HaifaCity_EventScript_GiveMon_9:
	call GiveBagon
	goto HaifaCity_EventScript_GiveMon_5

HaifaCity_EventScript_GiveMon_10:
	call GiveBeldum
	goto HaifaCity_EventScript_GiveMon_5

HaifaCity_EventScript_GiveMon_11:
	call GiveGible
	goto HaifaCity_EventScript_GiveMon_5

HaifaCity_EventScript_GiveMon_12:
	call GiveDeino
	goto HaifaCity_EventScript_GiveMon_5

HaifaCity_EventScript_GiveMon_13:
	call GiveGoomy
	goto HaifaCity_EventScript_GiveMon_5

HaifaCity_EventScript_GiveMon_14:
	call GiveJangmo_o
	goto HaifaCity_EventScript_GiveMon_5

HaifaCity_EventScript_GiveMon_15:
	call GiveDreepy
	goto HaifaCity_EventScript_GiveMon_5


GiveDratini::
	showmonpic SPECIES_DRATINI, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveDratini_1
	hidemonpic
	return

GiveDratini_1:
	givemon SPECIES_DRATINI, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveDratini_Text_1
	call NicknamePartyMon
	return


GiveLarvitar::
	showmonpic SPECIES_LARVITAR, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveLarvitar_1
	hidemonpic
	return

GiveLarvitar_1:
	givemon SPECIES_LARVITAR, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveLarvitar_Text_0
	call NicknamePartyMon
	return


GiveBagon::
	showmonpic SPECIES_BAGON, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveBagon_1
	hidemonpic
	return

GiveBagon_1:
	givemon SPECIES_BAGON, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveBagon_Text_0
	call NicknamePartyMon
	return


GiveBeldum::
	showmonpic SPECIES_BELDUM, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveBeldum_1
	hidemonpic
	return

GiveBeldum_1:
	givemon SPECIES_BELDUM, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveBeldum_Text_0
	call NicknamePartyMon
	return


GiveGible::
	showmonpic SPECIES_GIBLE, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveGible_1
	hidemonpic
	return

GiveGible_1:
	givemon SPECIES_GIBLE, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveGible_Text_0
	call NicknamePartyMon
	return


GiveDeino::
	showmonpic SPECIES_DEINO, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveDeino_1
	hidemonpic
	return

GiveDeino_1:
	givemon SPECIES_DEINO, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveDeino_Text_0
	call NicknamePartyMon
	return


GiveGoomy::
	showmonpic SPECIES_GOOMY, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveGoomy_1
	hidemonpic
	return

GiveGoomy_1:
	givemon SPECIES_GOOMY, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveGoomy_Text_0
	call NicknamePartyMon
	return


GiveJangmo_o::
	showmonpic SPECIES_BAGON, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveJangmo_o_1
	hidemonpic
	return

GiveJangmo_o_1:
	givemon SPECIES_BAGON, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveBagon_Text_0
	call NicknamePartyMon
	return


GiveDreepy::
	showmonpic SPECIES_DREEPY, 10, 3
	msgbox GiveDratini_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GiveDreepy_1
	hidemonpic
	return

GiveDreepy_1:
	givemon SPECIES_DREEPY, 5, ITEM_NONE
	hidemonpic
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveBagon_Text_0
	call NicknamePartyMon
	return


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


HaifaCity_EventScript_GiveMon_Text_0:
	.string "Which starter would you like?$"

HaifaCity_EventScript_GiveMon_Text_1:
	.string "Good luck on your journey!$"

GiveDratini_Text_0:
	.string "Would you like this Pokemon?$"

GiveDratini_Text_1:
	.string "Received Dratini to Party$"

GiveLarvitar_Text_0:
	.string "Received Larvitar$"

GiveBagon_Text_0:
	.string "Received Bagon$"

GiveBeldum_Text_0:
	.string "Received Beldum$"

GiveGible_Text_0:
	.string "Received Gible$"

GiveDeino_Text_0:
	.string "Received Deino$"

GiveGoomy_Text_0:
	.string "Received Goomy$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"
