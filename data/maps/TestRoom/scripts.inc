TestRoom_MapScripts::
	.byte 0

Testroom_EventScript_Groudon::
	givemon SPECIES_RAYQUAZA, 100, ITEM_MASTER_BALL
	givemon SPECIES_LUGIA, 100, ITEM_MASTER_BALL
	givemon SPECIES_VENUSAUR, 100, ITEM_MASTER_BALL
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_HAS_MATCH_CALL
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	giveitem ITEM_WAILMER_PAIL
	giveitem ITEM_HM01
	giveitem ITEM_HM02
	giveitem ITEM_HM03
	giveitem ITEM_HM04
	giveitem ITEM_HM05
	giveitem ITEM_HM06
	giveitem ITEM_HM07
	giveitem ITEM_HM08
	release
	end

Testroom_EventScript_Fly::
	setflag FLAG_UNUSED_0x493
	setflag FLAG_UNUSED_0x494
	setflag FLAG_UNUSED_0x495
	setflag FLAG_UNUSED_0x496
	setflag FLAG_UNUSED_0x497
	setflag FLAG_UNUSED_0x498
	setflag FLAG_UNUSED_0x499
	setflag FLAG_UNUSED_0x49A
	setflag FLAG_UNUSED_0x49B
	setflag FLAG_UNUSED_0x49C
	setflag FLAG_UNUSED_0x49D
	setflag FLAG_UNUSED_0x49E
	setflag FLAG_UNUSED_0x49F
	setflag FLAG_UNUSED_0x4A0
	setflag FLAG_UNUSED_0x4A1
	setflag FLAG_UNUSED_0x4A2
	setflag FLAG_UNUSED_0x4A3
	setflag FLAG_UNUSED_0x4A4
	setflag FLAG_UNUSED_0x4A5
	setflag FLAG_UNUSED_0x4A6
	setflag FLAG_UNUSED_0x4A7
	setflag FLAG_UNUSED_0x4A8
	setflag FLAG_UNUSED_0x4A9
	setflag FLAG_UNUSED_0x4AA
	setflag FLAG_UNUSED_0x4AB
	setflag FLAG_UNUSED_0x4AC
	setflag FLAG_UNUSED_0x4AD
	setflag FLAG_UNUSED_0x4AE
end