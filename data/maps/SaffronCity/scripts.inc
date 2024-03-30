SaffronCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
	.byte 0

SaffronCity_OnTransition:
	setflag FLAG_UNUSED_0x4AC
	end

	Saffron_Pidgeot::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	msgbox Saffron_Pidgeot_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Saffron_Pidgeot_Text:
	.string "PIDGEOT: piiipiiii!$"

Saffron_Jynx::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JYNX, CRY_MODE_NORMAL
	msgbox Saffron_Jynx_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Saffron_Jynx_Text:
	.string "JYNX: Uououo?$"

Saffron_Abra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ABRA, CRY_MODE_NORMAL
	msgbox Saffron_Abra_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Saffron_Abra_Text:
	.string "ABRA: ..?$"