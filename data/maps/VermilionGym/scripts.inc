VermilionGym_MapScripts::
	.byte 0

VermilionGym_EventScript_Surge::
	trainerbattle_single TRAINER_SURGE_1, VermilionGym_Text_SurgeIntro, VermilionGym_Text_SurgeDefeat, VermilionGym_EventScript_SurgeDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, VermilionGym_EventScript_SurgeRematch
	msgbox VermilionGym_Text_SurgePostBattle, MSGBOX_DEFAULT
	release
	end

VermilionGym_EventScript_SurgeRematch::
	trainerbattle_rematch_double TRAINER_SURGE_1, VermilionGym_Text_SurgePreRematch, VermilionGym_Text_SurgeRematchDefeat, VermilionGym_Text_SurgeRematchNeedTwoMons
	msgbox VermilionGym_Text_SurgePostRematch, MSGBOX_AUTOCLOSE
	end

VermilionGym_EventScript_SurgeDefeated::
	message VermilionGym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox VermilionGym_Text_BadgeInfo, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox VermilionGym_Text_RegisteredSurge, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_UNUSED_0x4B6
	release
	end

VermilionGym_Text_SurgeIntro:
	.string "Ten-hut!\n"
	.string "Welcome to VERMILION GYM!\p"
	.string "Will you look at that, a pint-size\n"
	.string "challenger! Hahaha!\p"
	.string "You've got big and brassy nerves\n"
	.string "to take me on with your puny power!\p"
	.string "A POKéMON battle is war!\p"
	.string "I'll show you, civilian!\p"
	.string "I'll shock you into surrender!$"

VermilionGym_Text_SurgeDefeat:
	.string "Whoa!\n"
	.string "You're the real deal, kid!\p"
	.string "Fine then, take the THUNDER BADGE!$"

VermilionGym_Text_ReceivedBadge:
	.string "{PLAYER} received the THUNDER BADGE\n"
	.string "from LT.SURGE.$"

VermilionGym_Text_BadgeInfo:
	.string "The THUNDER BADGE cranks up\n"
	.string "your POKéMON's speed!\p"
	.string "A little word of advice, kid!\l"
	.string "Electricity is sure powerful!\p"
	.string "But, it's useless against\l"
	.string "ground-type Pokémon!.$"

VermilionGym_Text_RegisteredSurge:
	.string "Registered GYM LEADER LT.SURGE\n"
	.string "in the POKéNAV.$"

VermilionGym_Text_SurgePreRematch:
	.string "LT.SURGE: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

VermilionGym_Text_SurgeRematchDefeat:
	.string "Wow!\n"
	.string "Swamped again!$"

VermilionGym_Text_SurgePostRematch:
	.string "LT.SURGE: Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of KANTO!$"

VermilionGym_Text_SurgeRematchNeedTwoMons:
	.string "LT.SURGE: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one POKéMON\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two POKéMON.$"

VermilionGym_Text_SurgePostBattle:
	.string "A little word of advice, kid!\l"
	.string "Electricity is sure powerful!\p"
	.string "But, it's useless against\l"
	.string "ground-type Pokémon!.$"