@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LittlerootTown_MaysHouse_1F/map.json
@

LittlerootTown_MaysHouse_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MOM, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, PlayersHouse_1F_EventScript_Mom, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	object_event 2, OBJ_EVENT_GFX_VIGOROTH_FACING_AWAY, 0, 4, 5, 3, MOVEMENT_TYPE_WALK_IN_PLACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, PlayersHouse_1F_EventScript_Vigoroth1, FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
	object_event 3, OBJ_EVENT_GFX_VIGOROTH_CARRYING_BOX, 0, 2, 3, 3, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT, 3, 0, TRAINER_TYPE_NONE, 0, PlayersHouse_1F_EventScript_Vigoroth2, FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
	object_event 4, OBJ_EVENT_GFX_WOMAN_4, 0, 5, 7, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, RivalsHouse_1F_EventScript_RivalMom, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	object_event 5, OBJ_EVENT_GFX_NORMAN, 0, 2, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_PLAYERS_HOUSE_DAD
	object_event 6, OBJ_EVENT_GFX_NINJA_BOY, 0, 1, 5, 3, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 1, 1, TRAINER_TYPE_NONE, 0, RivalsHouse_1F_EventScript_RivalSibling, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	object_event 7, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL, 0, 8, 8, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY

LittlerootTown_MaysHouse_1F_MapWarps:
	warp_def 8, 8, 0, 0, MAP_LITTLEROOT_TOWN
	warp_def 9, 8, 0, 0, MAP_LITTLEROOT_TOWN
	warp_def 8, 2, 0, 0, MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F

LittlerootTown_MaysHouse_1F_MapCoordEvents:
	coord_event 28, 57, 0, VAR_LITTLEROOT_INTRO_STATE, 4, LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom
	coord_event 7, 3, 0, VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_1F_EventScript_MeetRival0
	coord_event 8, 4, 0, VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_1F_EventScript_MeetRival1
	coord_event 9, 3, 0, VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_1F_EventScript_MeetRival2

LittlerootTown_MaysHouse_1F_MapEvents::
	map_events LittlerootTown_MaysHouse_1F_ObjectEvents, LittlerootTown_MaysHouse_1F_MapWarps, LittlerootTown_MaysHouse_1F_MapCoordEvents, 0x0

