CinnibarIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnibarIsland_OnTransition
	.byte 0

CinnibarIsland_OnTransition:
	setflag FLAG_UNUSED_0x497
	end

Cinnabar_Growlithe::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GROWLITHE, CRY_MODE_NORMAL
	msgbox Cinnabar_Growlithe_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Cinnabar_Growlithe_Text:
	.string "GROWLITHE: Graoh!$"