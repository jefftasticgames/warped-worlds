#include "src/game/envfx_snow.h"

const GeoLayout wf_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2755, 3649, -1260, wf_dl_group_0_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -805, 3471, 86, wf_dl_group_0_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -2755, 3649, -1260, wf_dl_group_0_004_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 2152, 724, -4101, wf_dl_group_0_011_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -4020, -41, -394, wf_dl_group_0_017_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -828, 3443, 753, wf_dl_group_0_083_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -3162, 5401, -1064, wf_dl_group_0_087_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 3670, 775, -4685, wf_dl_group_0_101_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -2978, 5088, -2707, wf_dl_group_0_206_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -805, 3471, 86, wf_dl_group_0_226_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 28, -3668, -37, wf_dl_Plane_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_BELOW_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_FREE_ROAM, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
