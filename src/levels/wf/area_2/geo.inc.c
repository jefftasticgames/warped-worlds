#include "src/game/envfx_snow.h"

const GeoLayout wf_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_SketchUp_009_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -1336, 863, -820, wf_dl_SketchUp_012_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 1377, 863, -759, wf_dl_SketchUp_014_mesh),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_SketchUp_019_mesh),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_SketchUp_021_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 35, 863, -1572, wf_dl_SketchUp_031_mesh),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_SketchUp_032_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_2[] = {
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
					GEO_BRANCH(1, wf_area_2_geo),
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