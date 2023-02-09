@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Littleroot_PokemonCenter_2F/map.json
@

Littleroot_PokemonCenter_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_TEALA, 0, 2, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Common_EventScript_WirelessClubAttendant, 0
	object_event 2, OBJ_EVENT_GFX_TEALA, 0, 6, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Common_EventScript_UnionRoomAttendant, 0
	object_event 3, OBJ_EVENT_GFX_TEALA, 0, 10, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, Common_EventScript_DirectCornerAttendant, 0

Littleroot_PokemonCenter_2F_MapWarps:
	warp_def 1, 6, 0, 0, MAP_LITTLEROOT_POKEMON_CENTER_1F
	warp_def 5, 1, 0, 0, MAP_UNION_ROOM
	warp_def 9, 1, 0, 0, MAP_TRADE_CENTER

Littleroot_PokemonCenter_2F_MapEvents::
	map_events Littleroot_PokemonCenter_2F_ObjectEvents, Littleroot_PokemonCenter_2F_MapWarps, 0x0, 0x0

