Lights1 n64_Material_004_699E158_c_png_f3d_layer5_lights = gdSPDefLights1(
	0x7F, 0x32, 0x0,
	0xFE, 0x64, 0x0, 0x28, 0x28, 0x28);

Lights1 n64_Material_003_699E158_d_png_f3d_layer5_lights = gdSPDefLights1(
	0x3F, 0x0, 0x0,
	0x7F, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 n64_Material_003_699E158_c_bmp_f3d_layer5_lights = gdSPDefLights1(
	0x0, 0x0, 0x42,
	0x0, 0x0, 0x84, 0x28, 0x28, 0x28);

Lights1 n64_Material_002_699E158_a_png_f3d_layer5_lights = gdSPDefLights1(
	0x1, 0x7F, 0x0,
	0x2, 0xFE, 0x0, 0x28, 0x28, 0x28);

Lights1 n64_sm64_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx n64_highlight_ia8_aligner[] = {gsSPEndDisplayList()};
u8 n64_highlight_ia8[] = {
	0xf1, 0xf1, 0xf1, 0xf2, 0xf2, 0xf3, 0xf3, 0xf4, 
	0xf4, 0xf5, 0xf5, 0xf5, 0xf6, 0xf6, 0xf7, 0xf7, 
	0xf8, 0xf8, 0xf9, 0xf9, 0xf9, 0xfa, 0xfa, 0xfb, 
	0xfb, 0xfc, 0xfc, 0xfd, 0xfd, 0xfd, 0xfe, 0xfe, 
	0xf0, 0xf1, 0xf1, 0xf2, 0xf2, 0xf3, 0xf3, 0xf4, 
	0xf4, 0xf5, 0xf5, 0xf5, 0xf6, 0xf6, 0xf7, 0xf7, 
	0xf8, 0xf8, 0xf9, 0xf9, 0xf9, 0xfa, 0xfa, 0xfb, 
	0xfb, 0xfc, 0xfc, 0xfc, 0xfd, 0xfd, 0xfe, 0xfe, 
	0xf0, 0xf1, 0xf1, 0xf2, 0xf2, 0xf3, 0xf3, 0xf4, 
	0xf4, 0xf4, 0xf5, 0xf5, 0xf6, 0xf6, 0xf7, 0xf7, 
	0xf8, 0xf8, 0xf8, 0xf9, 0xf9, 0xfa, 0xfa, 0xfb, 
	0xfb, 0xfb, 0xfc, 0xfc, 0xfd, 0xfd, 0xfd, 0xfd, 
	0xf0, 0xf1, 0xf1, 0xf2, 0xf2, 0xf3, 0xf3, 0xf4, 
	0xf4, 0xf4, 0xf5, 0xf5, 0xf6, 0xf6, 0xf7, 0xf7, 
	0xf7, 0xf8, 0xf8, 0xf9, 0xf9, 0xfa, 0xfa, 0xfa, 
	0xfb, 0xfb, 0xfc, 0xfc, 0xfc, 0xfd, 0xfd, 0xfd, 
	0xf0, 0xf1, 0xf1, 0xf2, 0xf2, 0xf3, 0xf3, 0xf3, 
	0xf4, 0xf4, 0xf5, 0xf5, 0xf6, 0xf6, 0xf7, 0xf7, 
	0xf7, 0xf8, 0xf8, 0xf9, 0xf9, 0xf9, 0xfa, 0xfa, 
	0xfb, 0xfb, 0xfb, 0xfc, 0xfc, 0xfc, 0xfc, 0xfd, 
	0xf0, 0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 0xf3, 0xf3, 
	0xf4, 0xf4, 0xf5, 0xf5, 0xf6, 0xf6, 0xf6, 0xf7, 
	0xf7, 0xf8, 0xf8, 0xf8, 0xf9, 0xf9, 0xfa, 0xfa, 
	0xfa, 0xfb, 0xfb, 0xfb, 0xfc, 0xfc, 0xfc, 0xfc, 
	0xf0, 0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 0xf3, 0xf3, 
	0xf4, 0xf4, 0xf5, 0xf5, 0xf5, 0xf6, 0xf6, 0xf7, 
	0xf7, 0xf7, 0xf8, 0xf8, 0xf9, 0xf9, 0xf9, 0xfa, 
	0xfa, 0xfa, 0xfb, 0xfb, 0xfb, 0xfb, 0xfc, 0xfc, 
	0xf0, 0xf1, 0xf1, 0xf1, 0xf2, 0xf2, 0xf3, 0xf3, 
	0xf4, 0xf4, 0xf4, 0xf5, 0xf5, 0xf6, 0xf6, 0xf6, 
	0xf7, 0xf7, 0xf8, 0xf8, 0xf8, 0xf9, 0xf9, 0xfa, 
	0xfa, 0xfa, 0xfa, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 
	0xf0, 0xf0, 0xf1, 0xf1, 0xf2, 0xf2, 0xf3, 0xf3, 
	0xf3, 0xf4, 0xf4, 0xf5, 0xf5, 0xf5, 0xf6, 0xf6, 
	0xf7, 0xf7, 0xf7, 0xf8, 0xf8, 0xf9, 0xf9, 0xf9, 
	0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfb, 0xfb, 0xfb, 
	0xf0, 0xf0, 0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 0xf3, 
	0xf3, 0xf4, 0xf4, 0xf4, 0xf5, 0xf5, 0xf6, 0xf6, 
	0xf6, 0xf7, 0xf7, 0xf8, 0xf8, 0xf8, 0xf9, 0xf9, 
	0xf9, 0xf9, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 0xfa, 
	0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 0xf2, 0xf2, 0xf3, 
	0xf3, 0xf3, 0xf4, 0xf4, 0xf5, 0xf5, 0xf5, 0xf6, 
	0xf6, 0xf7, 0xf7, 0xf7, 0xf8, 0xf8, 0xf8, 0xf9, 
	0xf9, 0xf9, 0xf9, 0xf9, 0xfa, 0xfa, 0xfa, 0xfa, 
	0xf0, 0xf0, 0xf0, 0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 
	0xf3, 0xf3, 0xf4, 0xf4, 0xf4, 0xf5, 0xf5, 0xf6, 
	0xf6, 0xf6, 0xf7, 0xf7, 0xf7, 0xf8, 0xf8, 0xf8, 
	0xf8, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 
	0x00, 0xf0, 0xf0, 0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 
	0xf3, 0xf3, 0xf3, 0xf4, 0xf4, 0xf5, 0xf5, 0xf5, 
	0xf6, 0xf6, 0xf6, 0xf7, 0xf7, 0xf7, 0xf8, 0xf8, 
	0xf8, 0xf8, 0xf8, 0xf9, 0xf9, 0xf9, 0xf9, 0xf9, 
	0x00, 0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 0xf2, 0xf2, 
	0xf2, 0xf3, 0xf3, 0xf4, 0xf4, 0xf4, 0xf5, 0xf5, 
	0xf5, 0xf6, 0xf6, 0xf6, 0xf7, 0xf7, 0xf7, 0xf7, 
	0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf9, 0xf9, 
	0x00, 0x00, 0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 0xf2, 
	0xf2, 0xf3, 0xf3, 0xf3, 0xf4, 0xf4, 0xf4, 0xf5, 
	0xf5, 0xf5, 0xf6, 0xf6, 0xf6, 0xf7, 0xf7, 0xf7, 
	0xf7, 0xf7, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
	0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf1, 0xf1, 0xf2, 
	0xf2, 0xf2, 0xf3, 0xf3, 0xf3, 0xf4, 0xf4, 0xf4, 
	0xf5, 0xf5, 0xf5, 0xf6, 0xf6, 0xf6, 0xf6, 0xf7, 
	0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf8, 0xf8, 0xf8, 
	0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 
	0xf2, 0xf2, 0xf2, 0xf3, 0xf3, 0xf4, 0xf4, 0xf4, 
	0xf4, 0xf5, 0xf5, 0xf5, 0xf6, 0xf6, 0xf6, 0xf6, 
	0xf6, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 
	0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf1, 0xf1, 
	0xf2, 0xf2, 0xf2, 0xf3, 0xf3, 0xf3, 0xf4, 0xf4, 
	0xf4, 0xf4, 0xf5, 0xf5, 0xf5, 0xf5, 0xf6, 0xf6, 
	0xf6, 0xf6, 0xf6, 0xf7, 0xf7, 0xf7, 0xf7, 0xf7, 
	0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf1, 0xf1, 
	0xf1, 0xf2, 0xf2, 0xf2, 0xf3, 0xf3, 0xf3, 0xf4, 
	0xf4, 0xf4, 0xf4, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 
	0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf1, 
	0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xf4, 0xf4, 0xf4, 0xf4, 0xf5, 0xf5, 0xf5, 
	0xf5, 0xf5, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 0xf6, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 
	0xf1, 0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf5, 
	0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 
	0xf0, 0xf1, 0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 0xf2, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf4, 0xf4, 0xf4, 0xf4, 
	0xf4, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 0xf5, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
	0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 
	0xf2, 0xf3, 0xf3, 0xf3, 0xf3, 0xf4, 0xf4, 0xf4, 
	0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf5, 0xf5, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf0, 0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 0xf2, 0xf2, 
	0xf2, 0xf2, 0xf2, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xf0, 0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xf2, 0xf2, 0xf2, 0xf2, 0xf3, 0xf3, 0xf3, 0xf3, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf4, 0xf4, 0xf4, 0xf4, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 
	0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf3, 
	0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf1, 
	0xf1, 0xf1, 0xf1, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 
	0xf2, 0xf2, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 0xf3, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 
	0xf0, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf2, 0xf2, 
	0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 
	0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 
	0xf1, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 0xf2, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 
	0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 
	0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 0xf1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf1, 0xf1, 
	
};

Vtx n64_N_square_mesh_vtx_0[32] = {
	{{{53, 2, -53},0, {39, 1091},{0x0, 0x81, 0x0, 0xFF}}},
	{{{116, 2, -118},0, {58, 876},{0x0, 0x81, 0x0, 0xFF}}},
	{{{117, 2, -54},0, {107, 872},{0x0, 0x81, 0x0, 0xFF}}},
	{{{53, 2, -117},0, {-54, 906},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-116, 2, 118},0, {47, 1110},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-53, 2, 53},0, {67, 876},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-53, 2, 117},0, {160, 885},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-117, 2, 54},0, {-1, 993},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-118, 237, -116},0, {1, 839},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-53, 237, -53},0, {94, 713},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-54, 237, -117},0, {47, 701},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-117, 237, -53},0, {36, 881},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-117, 237, 54},0, {-24, 830},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-53, 237, 117},0, {110, 812},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-53, 237, 53},0, {15, 722},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-116, 237, 118},0, {76, 886},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{53, 237, 53},0, {12, 851},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{118, 237, 116},0, {105, 742},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{117, 237, 53},0, {70, 685},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{54, 237, 117},0, {59, 901},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{53, 237, -117},0, {-4, 774},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{117, 237, -54},0, {130, 801},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{116, 237, -118},0, {30, 707},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{53, 237, -53},0, {91, 874},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-54, 2, -117},0, {37, 885},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-117, 2, -53},0, {58, 1093},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-118, 2, -116},0, {-46, 891},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-53, 2, -53},0, {131, 951},{0x0, 0x81, 0x0, 0xFF}}},
	{{{54, 2, 117},0, {69, 1090},{0x0, 0x81, 0x0, 0xFF}}},
	{{{117, 2, 53},0, {48, 866},{0x0, 0x81, 0x0, 0xFF}}},
	{{{118, 2, 116},0, {152, 917},{0x0, 0x81, 0x0, 0xFF}}},
	{{{53, 2, 53},0, {-25, 885},{0x0, 0x81, 0x0, 0xFF}}},
};

Gfx n64_N_square_mesh_tri_0[] = {
	gsSPVertex(n64_N_square_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 9, 8, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(n64_N_square_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPEndDisplayList(),
};

Vtx n64_N_square_mesh_vtx_1[32] = {
	{{{53, 237, 53},0, {12, 851},{0x0, 0x56, 0xA2, 0xFF}}},
	{{{117, 237, 53},0, {70, 685},{0x0, 0x56, 0xA2, 0xFF}}},
	{{{53, 119, -53},0, {69, 1005},{0x0, 0x56, 0xA2, 0xFF}}},
	{{{117, 119, -54},0, {101, 784},{0x0, 0x56, 0xA2, 0xFF}}},
	{{{-53, 119, 53},0, {37, 830},{0x0, 0x56, 0x5E, 0xFF}}},
	{{{-53, 237, -53},0, {94, 713},{0x0, 0x56, 0x5E, 0xFF}}},
	{{{-117, 119, 54},0, {5, 904},{0x0, 0x56, 0x5E, 0xFF}}},
	{{{-117, 237, -53},0, {36, 881},{0x0, 0x56, 0x5E, 0xFF}}},
	{{{53, 119, -53},0, {69, 1005},{0x5E, 0xAA, 0x0, 0xFF}}},
	{{{-54, 2, -117},0, {37, 885},{0x5E, 0xAA, 0x0, 0xFF}}},
	{{{53, 119, -117},0, {-30, 853},{0x5E, 0xAA, 0x0, 0xFF}}},
	{{{-53, 2, -53},0, {131, 951},{0x5E, 0xAA, 0x0, 0xFF}}},
	{{{-53, 119, 53},0, {37, 830},{0xA2, 0xAA, 0x0, 0xFF}}},
	{{{54, 2, 117},0, {69, 1090},{0xA2, 0xAA, 0x0, 0xFF}}},
	{{{-53, 119, 117},0, {136, 924},{0xA2, 0xAA, 0x0, 0xFF}}},
	{{{53, 2, 53},0, {-25, 885},{0xA2, 0xAA, 0x0, 0xFF}}},
	{{{-53, 237, 53},0, {15, 722},{0x5E, 0x56, 0x0, 0xFF}}},
	{{{-53, 237, 117},0, {110, 812},{0x5E, 0x56, 0x0, 0xFF}}},
	{{{53, 119, 53},0, {-63, 851},{0x5E, 0x56, 0x0, 0xFF}}},
	{{{54, 119, 117},0, {120, 895},{0x5E, 0x56, 0x0, 0xFF}}},
	{{{53, 237, -117},0, {-4, 774},{0xA2, 0x56, 0x0, 0xFF}}},
	{{{-53, 119, -53},0, {169, 855},{0xA2, 0x56, 0x0, 0xFF}}},
	{{{53, 237, -53},0, {91, 874},{0xA2, 0x56, 0x0, 0xFF}}},
	{{{-54, 119, -117},0, {-14, 802},{0xA2, 0x56, 0x0, 0xFF}}},
	{{{53, 119, 53},0, {-63, 851},{0x0, 0xAA, 0x5E, 0xFF}}},
	{{{117, 2, -54},0, {107, 872},{0x0, 0xAA, 0x5E, 0xFF}}},
	{{{117, 119, 53},0, {88, 828},{0x0, 0xAA, 0x5E, 0xFF}}},
	{{{53, 2, -53},0, {39, 1091},{0x0, 0xAA, 0x5E, 0xFF}}},
	{{{-53, 119, -53},0, {169, 855},{0x0, 0xAA, 0xA2, 0xFF}}},
	{{{-117, 2, 54},0, {-1, 993},{0x0, 0xAA, 0xA2, 0xFF}}},
	{{{-117, 119, -53},0, {18, 969},{0x0, 0xAA, 0xA2, 0xFF}}},
	{{{-53, 2, 53},0, {67, 876},{0x0, 0xAA, 0xA2, 0xFF}}},
};

Gfx n64_N_square_mesh_tri_1[] = {
	gsSPVertex(n64_N_square_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 9, 8, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 13, 12, 0),
	gsSPVertex(n64_N_square_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 5, 4, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 9, 8, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 13, 12, 0),
	gsSPEndDisplayList(),
};

Vtx n64_N_square_mesh_vtx_2[46] = {
	{{{117, 119, 53},0, {88, 828},{0x0, 0x0, 0x81, 0xFF}}},
	{{{117, 2, 53},0, {48, 866},{0x0, 0x0, 0x81, 0xFF}}},
	{{{53, 119, 53},0, {-63, 851},{0x0, 0x0, 0x81, 0xFF}}},
	{{{53, 2, 53},0, {-25, 885},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-53, 237, 53},0, {15, 722},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-53, 119, 53},0, {37, 830},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-117, 237, 54},0, {-24, 830},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-117, 119, 54},0, {5, 904},{0x0, 0x0, 0x81, 0xFF}}},
	{{{117, 119, -54},0, {101, 784},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{117, 237, -54},0, {130, 801},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{53, 119, -53},0, {69, 1005},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{53, 237, -53},0, {91, 874},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-53, 2, -53},0, {131, 951},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-53, 119, -53},0, {169, 855},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-117, 2, -53},0, {58, 1093},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-117, 119, -53},0, {18, 969},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-116, 119, 118},0, {59, 958},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-116, 2, 118},0, {47, 1110},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-53, 2, 117},0, {160, 885},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-53, 119, 117},0, {136, 924},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-116, 237, 118},0, {76, 886},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-53, 237, 117},0, {110, 812},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{54, 2, 117},0, {69, 1090},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{54, 119, 117},0, {120, 895},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{118, 2, 116},0, {152, 917},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{118, 119, 116},0, {173, 862},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{54, 237, 117},0, {59, 901},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{118, 237, 116},0, {105, 742},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{116, 119, -118},0, {47, 782},{0x0, 0x0, 0x81, 0xFF}}},
	{{{116, 2, -118},0, {58, 876},{0x0, 0x0, 0x81, 0xFF}}},
	{{{53, 2, -117},0, {-54, 906},{0x0, 0x0, 0x81, 0xFF}}},
	{{{53, 119, -117},0, {-30, 853},{0x0, 0x0, 0x81, 0xFF}}},
	{{{53, 119, -117},0, {-30, 853},{0x0, 0x0, 0x81, 0xFF}}},
	{{{116, 237, -118},0, {30, 707},{0x0, 0x0, 0x81, 0xFF}}},
	{{{116, 119, -118},0, {47, 782},{0x0, 0x0, 0x81, 0xFF}}},
	{{{53, 237, -117},0, {-4, 774},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-54, 2, -117},0, {37, 885},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-54, 119, -117},0, {-14, 802},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-118, 2, -116},0, {-46, 891},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-118, 119, -116},0, {-67, 878},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-54, 237, -117},0, {47, 701},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-118, 237, -116},0, {1, 839},{0x0, 0x0, 0x81, 0xFF}}},
	{{{53, 119, -117},0, {-30, 853},{0x81, 0x0, 0x0, 0xFF}}},
	{{{53, 2, -117},0, {-54, 906},{0x81, 0x0, 0x0, 0xFF}}},
	{{{53, 119, -53},0, {69, 1005},{0x81, 0x0, 0x0, 0xFF}}},
	{{{53, 2, -53},0, {39, 1091},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx n64_N_square_mesh_tri_2[] = {
	gsSPVertex(n64_N_square_mesh_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(n64_N_square_mesh_vtx_2 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(n64_N_square_mesh_vtx_2 + 32, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(8, 5, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSPEndDisplayList(),
};

Vtx n64_N_square_mesh_vtx_3[40] = {
	{{{54, 119, 117},0, {120, 895},{0x81, 0x0, 0x0, 0xFF}}},
	{{{54, 237, 117},0, {59, 901},{0x81, 0x0, 0x0, 0xFF}}},
	{{{53, 119, 53},0, {-63, 851},{0x81, 0x0, 0x0, 0xFF}}},
	{{{53, 237, 53},0, {12, 851},{0x81, 0x0, 0x0, 0xFF}}},
	{{{53, 2, -53},0, {39, 1091},{0x81, 0x0, 0x0, 0xFF}}},
	{{{53, 119, -53},0, {69, 1005},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-53, 119, 117},0, {136, 924},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-53, 2, 117},0, {160, 885},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-53, 119, 53},0, {37, 830},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-53, 2, 53},0, {67, 876},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-53, 237, -53},0, {94, 713},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-53, 119, -53},0, {169, 855},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-54, 237, -117},0, {47, 701},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-54, 119, -117},0, {-14, 802},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-116, 119, 118},0, {59, 958},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-116, 237, 118},0, {76, 886},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-117, 237, 54},0, {-24, 830},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-117, 119, 54},0, {5, 904},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-116, 2, 118},0, {47, 1110},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-117, 2, 54},0, {-1, 993},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-117, 237, -53},0, {36, 881},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-117, 119, -53},0, {18, 969},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-118, 237, -116},0, {1, 839},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-118, 119, -116},0, {-67, 878},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-117, 2, -53},0, {58, 1093},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-118, 2, -116},0, {-46, 891},{0x81, 0x0, 0x0, 0xFF}}},
	{{{116, 119, -118},0, {47, 782},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{116, 237, -118},0, {30, 707},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{117, 237, -54},0, {130, 801},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{117, 119, -54},0, {101, 784},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{117, 119, -54},0, {101, 784},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{116, 2, -118},0, {58, 876},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{116, 119, -118},0, {47, 782},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{117, 2, -54},0, {107, 872},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{117, 237, 53},0, {70, 685},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{117, 119, 53},0, {88, 828},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{118, 237, 116},0, {105, 742},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{118, 119, 116},0, {173, 862},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{117, 2, 53},0, {48, 866},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{118, 2, 116},0, {152, 917},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx n64_N_square_mesh_tri_3[] = {
	gsSPVertex(n64_N_square_mesh_vtx_3 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSPVertex(n64_N_square_mesh_vtx_3 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(n64_N_square_mesh_vtx_3 + 30, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSPEndDisplayList(),
};

Vtx n64_N_square_mesh_vtx_4[4] = {
	{{{-329, 0, 329},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{329, 0, 329},0, {2032, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{329, 0, -329},0, {2032, -1040},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-329, 0, -329},0, {-16, -1040},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx n64_N_square_mesh_tri_4[] = {
	gsSPVertex(n64_N_square_mesh_vtx_4 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_n64_Material_004_699E158_c_png_f3d_layer5[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(n64_Material_004_699E158_c_png_f3d_layer5_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_n64_Material_004_699E158_c_png_f3d_layer5[] = {
	gsDPPipeSync(),
	gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_NOOP2),
	gsSPEndDisplayList(),
};

Gfx mat_n64_Material_003_699E158_d_png_f3d_layer5[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(n64_Material_003_699E158_d_png_f3d_layer5_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_n64_Material_003_699E158_d_png_f3d_layer5[] = {
	gsDPPipeSync(),
	gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_NOOP2),
	gsSPEndDisplayList(),
};

Gfx mat_n64_Material_003_699E158_c_bmp_f3d_layer5[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(n64_Material_003_699E158_c_bmp_f3d_layer5_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_n64_Material_003_699E158_c_bmp_f3d_layer5[] = {
	gsDPPipeSync(),
	gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_NOOP2),
	gsSPEndDisplayList(),
};

Gfx mat_n64_Material_002_699E158_a_png_f3d_layer5[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(n64_Material_002_699E158_a_png_f3d_layer5_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_n64_Material_002_699E158_a_png_f3d_layer5[] = {
	gsDPPipeSync(),
	gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_NOOP2),
	gsSPEndDisplayList(),
};

Gfx mat_n64_sm64_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b, 32, n64_highlight_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
	gsSPSetLights1(n64_sm64_material_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_n64_sm64_material[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx n64_N_square_mesh[] = {
	gsSPDisplayList(mat_n64_Material_004_699E158_c_png_f3d_layer5),
	gsSPDisplayList(n64_N_square_mesh_tri_0),
	gsSPDisplayList(mat_revert_n64_Material_004_699E158_c_png_f3d_layer5),
	gsSPDisplayList(mat_n64_Material_003_699E158_d_png_f3d_layer5),
	gsSPDisplayList(n64_N_square_mesh_tri_1),
	gsSPDisplayList(mat_revert_n64_Material_003_699E158_d_png_f3d_layer5),
	gsSPDisplayList(mat_n64_Material_003_699E158_c_bmp_f3d_layer5),
	gsSPDisplayList(n64_N_square_mesh_tri_2),
	gsSPDisplayList(mat_revert_n64_Material_003_699E158_c_bmp_f3d_layer5),
	gsSPDisplayList(mat_n64_Material_002_699E158_a_png_f3d_layer5),
	gsSPDisplayList(n64_N_square_mesh_tri_3),
	gsSPDisplayList(mat_revert_n64_Material_002_699E158_a_png_f3d_layer5),
	gsSPDisplayList(mat_n64_sm64_material),
	gsSPDisplayList(n64_N_square_mesh_tri_4),
	gsSPDisplayList(mat_revert_n64_sm64_material),
	gsSPEndDisplayList(),
};

Gfx n64_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

