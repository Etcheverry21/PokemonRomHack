@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Littleroot_BikeShop/map.json
@

Littleroot_BikeShop_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_MAN_2, 0, 2, 5, 3, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Littleroot_BikeShop_EventScript_MachBikeHandbook, 0
	object_event 2, OBJ_EVENT_GFX_MAN_5, 0, 7, 6, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, TRAINER_TYPE_NONE, 0, Littleroot_BikeShop_EventScript_Assistant, 0

Littleroot_BikeShop_MapWarps:
	warp_def 3, 8, 0, 9, MAP_LITTLEROOT_TOWN
	warp_def 4, 8, 0, 9, MAP_LITTLEROOT_TOWN

Littleroot_BikeShop_MapBGEvents:
	bg_sign_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Littleroot_BikeShop_EventScript_MachBikeHandbook
	bg_sign_event 11, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Littleroot_BikeShop_EventScript_MachBikeHandbook

Littleroot_BikeShop_MapEvents::
	map_events Littleroot_BikeShop_ObjectEvents, Littleroot_BikeShop_MapWarps, 0x0, Littleroot_BikeShop_MapBGEvents

