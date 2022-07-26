Route1_MapScripts::
	.byte 0


Route1_EventScript_ShirRivalBattle::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, Shir_Intro, Shir_Outro
	msgbox PostBattle_Shir, MSGBOX_AUTOCLOSE
	waitmessage
	end


Shir_Intro::
	.string "Hi I'm Shir, lets battle!$"

Shir_Outro::
	.string "I was not ready for that.$"

PostBattle_Shir::
	.string "I'll win next time.$"
