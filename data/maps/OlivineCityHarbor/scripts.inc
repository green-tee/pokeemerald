OlivineCityHarbor_MapScripts::
	.byte 0

MultiRegionHarborJ::
	lock
	faceplayer
	msgbox MultiRegionHarborJ_Text_0
	message MultiRegionHarborJ_Text_1
	multichoice 25, 4, OLIVINE_MULTI_REGION, 0
	compare VAR_RESULT, 0
	goto_if_eq MultiRegionHarborJ_2
	compare VAR_RESULT, 1
	goto_if_eq MultiRegionHarborJ_3
	compare VAR_RESULT, 2
	goto_if_eq MultiRegionHarborJ_4
MultiRegionHarborJ_1:
	warp MAP_CROSSGATE_TOWN_HARBOR, 8, 5,
	waitstate
	release
	end

MultiRegionHarborJ_2:
	warp MAP_VERMILION_CITY_HARBOR, 8, 5,
	waitstate
	release
	end
MultiRegionHarborJ_3:
	warp MAP_CROSSGATE_TOWN_HARBOR, 8, 5,
	waitstate
	release
	end
MultiRegionHarborJ_4:
	multichoice 25, 1, CROSSGATE_MULTI_REGION_SEVII, 0
	goto MultiRegionHarborJ_1


MultiRegionHarborJ_Text_0:
	.string "Ahoi!$"

MultiRegionHarborJ_Text_1:
	.string "Where are we sailing to?$"
