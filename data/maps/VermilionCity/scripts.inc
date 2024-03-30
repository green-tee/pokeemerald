VermilionCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_OnTransition
	.byte 0

VermilionCity_OnTransition:
	setflag FLAG_UNUSED_0x494
	end

	Vermilion_Machop::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox Vermilion_Machop_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Vermilion_Machop_Text:
	.string "MACHOP: Chop chop!$"