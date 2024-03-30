.set LOCALID_ENTEI, 1

CinnabarVolcano_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarVolcano_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CinnabarVolcano_OnResume
	.byte 0

CinnabarVolcano_OnTransition:
	call_if_set FLAG_UNUSED_0x4AF, CinnabarVolcano_EventScript_HideENTEI
	call_if_unset FLAG_UNUSED_0x4AF, CinnabarVolcano_EventScript_TryShowENTEI
	end

CinnabarVolcano_EventScript_HideENTEI::
	setflag FLAG_UNUSED_0x4B0
	return

CinnabarVolcano_EventScript_TryShowENTEI::
	goto_if_set FLAG_UNUSED_0x4B0, Common_EventScript_NopReturn
	clearflag FLAG_UNUSED_0x4B0
	return

CinnabarVolcano_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, CinnabarVolcano_EventScript_TryRemoveENTEI
	end

CinnabarVolcano_EventScript_TryRemoveENTEI::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_ENTEI
	return

CinnabarVolcano_EventScript_ENTEI::
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
	playmoncry SPECIES_ENTEI, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	seteventmon SPECIES_ENTEI, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CinnabarVolcano_EventScript_DefeatedENTEI
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CinnabarVolcano_EventScript_RanFromENTEI
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CinnabarVolcano_EventScript_RanFromENTEI
	setflag FLAG_UNUSED_0x4AF
	release
	end

CinnabarVolcano_EventScript_DefeatedENTEI::
	setflag FLAG_UNUSED_0x4B0
	setvar VAR_0x8004, SPECIES_ENTEI
	goto Common_EventScript_LegendaryFlewAway
	end

CinnabarVolcano_EventScript_RanFromENTEI::
	setvar VAR_0x8004, SPECIES_ENTEI
	goto Common_EventScript_LegendaryFlewAway
	end
