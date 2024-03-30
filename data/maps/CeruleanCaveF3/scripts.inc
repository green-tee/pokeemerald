.set LOCALID_MEWTWO, 9

CeruleanCaveF3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCaveF3_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CeruleanCaveF3_OnResume
	.byte 0

CeruleanCaveF3_OnTransition:
	call_if_set FLAG_UNUSED_0x4B4, CeruleanCaveF3_EventScript_HideMEWTWO
	call_if_unset FLAG_UNUSED_0x4B4, CeruleanCaveF3_EventScript_TryShowMEWTWO
	end

CeruleanCaveF3_EventScript_HideMEWTWO::
	setflag FLAG_UNUSED_0x4B5
	return

CeruleanCaveF3_EventScript_TryShowMEWTWO::
	goto_if_set FLAG_UNUSED_0x4B6, Common_EventScript_NopReturn
	clearflag FLAG_UNUSED_0x4B5
	return

CeruleanCaveF3_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, CeruleanCaveF3_EventScript_TryRemoveMEWTWO
	end

CeruleanCaveF3_EventScript_TryRemoveMEWTWO::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_MEWTWO
	return

CeruleanCaveF3_EventScript_MEWTWO::
	lock
	faceplayer
	waitse
	delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_MEWTWO, 100
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CeruleanCaveF3_EventScript_DefeatedMEWTWO
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CeruleanCaveF3_EventScript_RanFromMEWTWO
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CeruleanCaveF3_EventScript_RanFromMEWTWO
	setflag FLAG_UNUSED_0x4B4
	release
	end

CeruleanCaveF3_EventScript_DefeatedMEWTWO::
	setflag FLAG_UNUSED_0x4B6
	setvar VAR_0x8004, SPECIES_MEWTWO
	goto Common_EventScript_LegendaryFlewAway
	end

CeruleanCaveF3_EventScript_RanFromMEWTWO::
	setvar VAR_0x8004, SPECIES_MEWTWO
	goto Common_EventScript_LegendaryFlewAway
	end
