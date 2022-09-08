@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LittlerootTown/map.json
@

LittlerootTown_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MOM, 0, 28, 57, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LittlerootTown_EventScript_Mom, FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	object_event 2, OBJ_EVENT_GFX_TRUCK, 0, 25, 59, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	object_event 3, OBJ_EVENT_GFX_BOY_2, 0, 37, 58, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Littleroot_EventScript_Timmy, 0
	object_event 4, OBJ_EVENT_GFX_TRUCK, 0, 25, 59, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK

LittlerootTown_MapWarps:
	warp_def 28, 57, 0, 1, MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F
	warp_def 35, 70, 0, 0, MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB
	warp_def 30, 27, 0, 1, MAP_OLDALE_TOWN_POKEMON_CENTER_1F

LittlerootTown_MapCoordEvents:
	coord_event 36, 51, 0, VAR_LITTLEROOT_TOWN_STATE, 0, Littleroot_EventScript_BlockedPath

LittlerootTown_MapBGEvents:
	bg_sign_event 37, 41, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_TownSign
	bg_sign_event 34, 71, 0, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_BirchsLabSign
	bg_sign_event 30, 57, 3, BG_EVENT_PLAYER_FACING_ANY, LittlerootTown_EventScript_BrendansHouseSign
	bg_sign_event 31, 27, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 32, 27, 0, BG_EVENT_PLAYER_FACING_NORTH, Common_EventScript_ShowPokemonCenterSign
	bg_sign_event 40, 62, 0, BG_EVENT_PLAYER_FACING_ANY, NULL

LittlerootTown_MapEvents::
	map_events LittlerootTown_ObjectEvents, LittlerootTown_MapWarps, LittlerootTown_MapCoordEvents, LittlerootTown_MapBGEvents

