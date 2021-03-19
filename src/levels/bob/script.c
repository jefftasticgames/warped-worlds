#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common0.h"
#include "actors/common1.h"
#include "actors/group0.h"
#include "actors/group12.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group3_mio0SegmentRomStart, _group3_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group12_mio0SegmentRomStart, _group12_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group12_geoSegmentRomStart, _group12_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_13), 
	LOAD_MODEL_FROM_GEO(MODEL_LUIGI, luigi_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, meadow_bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_KOOPA_KID, koopakid_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_PRINCE, prince_bobomb_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOWSER_WAVE, invisible_bowser_accessory_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_RED_GOOMBA, goombared_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_TUMBLING_PLATFORM, tumbling_platform_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_GOOMBA_UNDERGROUND, goombablue_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_KOOPA_CANNON, koopa_cannon_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BOOKSTACK, bookstack_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_PRINCE2, prince_bobomb2_geo), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x02, 0x01, WARP_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x02, 0x22, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x02, 0x21, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_RED_GOOMBA, -3240, 768, -3790, 0, -90, 0, 0x00000000, bhvRedGoomba),
		OBJECT(MODEL_BLACK_BOBOMB, -3951, 1728, 2152, 0, -60, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -4788, 1801, 2140, 0, -60, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -188, 4632, 5116, 0, -60, 0, 0x00010000, bhvBobomb),
		OBJECT_WITH_ACTS(MODEL_BOB_BOOKSTACK, 5755, 0, -6889, 0, 0, 0, 0x00000000, bhvStackOfBooks, ACT_2),
		OBJECT(MODEL_BREAKABLE_BOX, -476, 0, -6226, 0, 0, 0, 0x00010000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, -476, 0, -6426, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 2435, 2773, -3173, 0, 110, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 2505, 2773, -2986, 0, 110, 0, 0x00030000, bhvBreakableBox),
		OBJECT_WITH_ACTS(MODEL_CANNON_BASE, -1979, 855, -339, 0, 0, 0, 0x00000000, bhvCannon, ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BOB_KOOPA_CANNON, -1979, 855, -339, 0, 0, 0, 0x00000000, bhvCannonClosed, ACT_1 | ACT_2 | ACT_3),
		OBJECT(MODEL_NONE, 2047, 203, -5654, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3697, 768, -1225, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2301, 904, -939, 0, -137, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 8077, 4068, 1354, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -4367, 1786, 2144, 0, -60, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 5695, 128, -5600, 0, -90, 0, 0x00020000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5770, 1908, 3608, 0, 1, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -1443, 2649, 6502, 0, 119, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -970, 4630, 4630, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -356, 2766, 3707, 0, -153, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_CASTLE_METAL_DOOR, -8491, 2480, 6783, 0, 90, 0, 0x00010000, bhvDoorWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, -476, 459, -6226, 0, 0, 0, 0x00030000, bhvExclamationBox),
		OBJECT(MODEL_GOOMBA, 945, 1024, 3242, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -516, 2661, 5971, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -792, 4630, 4760, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -5930, 3919, 4921, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -6592, 2392, 7428, 0, 0, 0, 0x00010000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3240, 768, -3790, 0, -90, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 4013, 1024, 716, 0, -90, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT_WITH_ACTS(MODEL_BOB_KOOPA_KID, -5615, 729, -1588, 0, -180, 0, 0x00AB0000, bhvKoopaKid, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOB_KOOPA_KID, -5727, 778, -1219, 0, -180, 0, 0x01AC0000, bhvKoopaKid, ACT_2),
		OBJECT_WITH_ACTS(MODEL_BOB_KOOPA_KID, -3065, 778, -749, 0, -180, 0, 0x01B00000, bhvKoopaKid, ACT_4),
		OBJECT(MODEL_MIST, 6465, 972, 1748, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 6465, 972, 2150, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 6465, 972, 2540, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 6465, 972, 3123, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 2677, -45, 2838, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 2677, -45, 3123, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 2677, -45, 2540, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 2677, -45, 2150, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 2677, -45, 1748, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 2909, -45, 6008, 0, 27, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 3039, -45, 6263, 0, 27, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 2774, -45, 5743, 0, 27, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 2597, -45, 5395, 0, 27, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, 2414, -45, 5037, 0, 27, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -3319, 931, 8793, 0, -16, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -3398, 931, 9068, 0, -16, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -3237, 931, 8507, 0, -16, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -3130, 931, 8132, 0, -16, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -3019, 931, 7746, 0, -16, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -7647, 2343, 7229, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -7647, 2343, 7515, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -7647, 2343, 6931, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -7647, 2343, 6541, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT(MODEL_MIST, -7647, 2343, 6139, 0, 0, 0, 0x00000000, bhvWaterMist2),
		OBJECT_WITH_ACTS(MODEL_BOB_PRINCE, -2867, 5799, 4767, 0, -90, 0, 0x00000000, bhvKingBobomb, ACT_1),
		OBJECT_WITH_ACTS(MODEL_BOB_PRINCE2, -5732, 768, -1216, 0, -90, 0, 0x01AF0000, bhvKingBobomb, ACT_3),
		OBJECT(MODEL_NONE, 5659, 1291, -194, 0, 0, 0, 0x02000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, -157, 1038, 7063, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -4599, 2527, 8080, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6638, 600, -3175, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 3965, 147, 6150, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN_NO_SHADOW, -5500, 557, -1219, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -6695, 3981, 5242, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -6948, 819, 2450, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2874, 1746, -232, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_STAR, 8141, 4389, 832, 0, 0, 0, 0x05000000, bhvStar),
		OBJECT(MODEL_STAR, 1391, 3839, -3643, 0, 0, 0, 0x03000000, bhvStar),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 6637, -3, -6673, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 4260, -3, -4776, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -609, -11, -5065, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -2740, 765, -5659, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -4122, 765, -2914, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1876, 765, -2755, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -755, 765, -997, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -336, 384, 1603, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 92, 1021, 3203, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1633, 1021, 4530, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 4711, 1017, 3801, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 4695, 56, 6602, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 3079, 1017, 957, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 5998, 1017, -1051, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -4172, 2422, 8084, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -7390, 3943, 5499, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -6159, 765, 1848, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -3939, 765, -20, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 2124, 2779, -3599, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, 5695, 552, -5600, 0, -90, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -90, 5695, 552, -5600),
		OBJECT(MODEL_NONE, 6465, 4263, 2458, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, -6829, 4263, 6845, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_MEADOW),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_BOB, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x02, 0x22, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x02, 0x21, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -1110, 449, -4987, 0, -90, 0, 0x00010000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 995, 123, -934, 0, -90, 0, 0x00010000, bhvCoinFormation),
		OBJECT(MODEL_CASTLE_METAL_DOOR, -1146, 123, 740, 0, -90, 0, 0x00010000, bhvDoorWarp),
		OBJECT(MODEL_BOB_GOOMBA_UNDERGROUND, 995, 123, -934, 0, -90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_BOB_GOOMBA_UNDERGROUND, -1028, 450, -4420, 0, -90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_BOB_TUMBLING_PLATFORM, 357, 4, -2242, 0, 0, 0, 0x00000000, bhvBobTiltingInvertedPyramid),
		OBJECT(MODEL_BOB_TUMBLING_PLATFORM, -371, 175, -2960, 0, 0, 0, 0x00000000, bhvBobTiltingInvertedPyramid),
		OBJECT(MODEL_BOB_TUMBLING_PLATFORM, -179, 1296, -4494, 0, 0, 0, 0x00000000, bhvBobTiltingInvertedPyramid),
		OBJECT(MODEL_BOB_TUMBLING_PLATFORM, 640, 1480, -5167, 0, 0, 0, 0x00000000, bhvBobTiltingInvertedPyramid),
		OBJECT(MODEL_STAR, 1, 1905, -6379, 0, 0, 0, 0x04000000, bhvStar),
		OBJECT(MODEL_NONE, -3, 2472, -7450, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_INDEFINITE_LAKE),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -90, 5695, 552, -5600),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};