#include "src/game/envfx_snow.h"

const GeoLayout castle_courtyard_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -36, 646, 190, castle_courtyard_dl_Circle_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 19, 811, 86, castle_courtyard_dl_Circle_002_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 39, 60, 816, castle_courtyard_dl_Cube_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -628, 96, -33, castle_courtyard_dl_Cube_002_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 698, 96, -19, castle_courtyard_dl_Cube_005_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -77, 500, 177, castle_courtyard_dl_Plane_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 306, 850, -86, castle_courtyard_dl_Plane_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -496, 156, -37, castle_courtyard_dl_Plane_002_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -361, 561, -137, castle_courtyard_dl_Plane_003_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 401, 583, -137, castle_courtyard_dl_Plane_004_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 6, 264, 0, castle_courtyard_dl_Sphere_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_courtyard_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_courtyard_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_courtyard_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, castle_courtyard_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_courtyard_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
