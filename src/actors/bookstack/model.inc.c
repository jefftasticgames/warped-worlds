Lights1 bookstack_sm64_material_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 bookstack_sm64_material_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx bookstack_BookInside_i8_aligner[] = {gsSPEndDisplayList()};
u8 bookstack_BookInside_i8[] = {
	0xe3, 0xe1, 0xe2, 0xe3, 0xe3, 0xe3, 0xe3, 0xe1, 
	0xe3, 0xe9, 0xe1, 0xdc, 0xda, 0xe3, 0xe2, 0xe2, 
	0xe4, 0xe3, 0xe6, 0xe1, 0xe3, 0xe4, 0xe3, 0xde, 
	0xe1, 0xe4, 0xe1, 0xe1, 0xe1, 0xdc, 0xdd, 0xdd, 
	0xdd, 0xdd, 0xdc, 0xe1, 0xe1, 0xe1, 0xe4, 0xe1, 
	0xde, 0xe3, 0xe4, 0xe3, 0xe1, 0xe6, 0xe3, 0xe4, 
	0xe2, 0xe2, 0xe3, 0xda, 0xdc, 0xe1, 0xe9, 0xe3, 
	0xe1, 0xe3, 0xe3, 0xe3, 0xe3, 0xe2, 0xe1, 0xe3, 
	0xe0, 0xde, 0xde, 0xe0, 0xdc, 0xe0, 0xdb, 0xde, 
	0xdb, 0xd6, 0xd7, 0xdd, 0xd8, 0xd8, 0xde, 0xdf, 
	0xdf, 0xdd, 0xd9, 0xd7, 0xdd, 0xd9, 0xd9, 0xdf, 
	0xe5, 0xd7, 0xd9, 0xdd, 0xdf, 0xd9, 0xe1, 0xe3, 
	0xe3, 0xe1, 0xd9, 0xdf, 0xdd, 0xd9, 0xd7, 0xe5, 
	0xdf, 0xd9, 0xd9, 0xdd, 0xd7, 0xd9, 0xdd, 0xdf, 
	0xdf, 0xde, 0xd8, 0xd8, 0xdd, 0xd7, 0xd6, 0xdb, 
	0xde, 0xdb, 0xe0, 0xdc, 0xe0, 0xde, 0xde, 0xe0, 
	0xdf, 0xe1, 0xe1, 0xdd, 0xdc, 0xda, 0xde, 0xda, 
	0xd7, 0xde, 0xd9, 0xdc, 0xe2, 0xe2, 0xe0, 0xe1, 
	0xdd, 0xdf, 0xdf, 0xde, 0xde, 0xe0, 0xdf, 0xde, 
	0xdd, 0xe6, 0xe4, 0xe4, 0xdf, 0xde, 0xd7, 0xe0, 
	0xe0, 0xd7, 0xde, 0xdf, 0xe4, 0xe4, 0xe6, 0xdd, 
	0xde, 0xdf, 0xe0, 0xde, 0xde, 0xdf, 0xdf, 0xdd, 
	0xe1, 0xe0, 0xe2, 0xe2, 0xdc, 0xd9, 0xde, 0xd7, 
	0xda, 0xde, 0xda, 0xdc, 0xdd, 0xe1, 0xe1, 0xdf, 
	0xe1, 0xdf, 0xe6, 0xe5, 0xe6, 0xe7, 0xe8, 0xe7, 
	0xe9, 0xe5, 0xe7, 0xea, 0xea, 0xe6, 0xe9, 0xea, 
	0xe6, 0xe6, 0xe8, 0xe9, 0xeb, 0xe6, 0xe6, 0xe9, 
	0xe5, 0xeb, 0xe7, 0xe3, 0xe8, 0xe5, 0xe5, 0xe7, 
	0xe7, 0xe5, 0xe5, 0xe8, 0xe3, 0xe7, 0xeb, 0xe5, 
	0xe9, 0xe6, 0xe6, 0xeb, 0xe9, 0xe8, 0xe6, 0xe6, 
	0xea, 0xe9, 0xe6, 0xea, 0xea, 0xe7, 0xe5, 0xe9, 
	0xe7, 0xe8, 0xe7, 0xe6, 0xe5, 0xe6, 0xdf, 0xe1, 
	0xd2, 0xd2, 0xd8, 0xd5, 0xdb, 0xcf, 0xd3, 0xd3, 
	0xd8, 0xd3, 0xd0, 0xd5, 0xd5, 0xd9, 0xd6, 0xd7, 
	0xd0, 0xd5, 0xd9, 0xd7, 0xd2, 0xdd, 0xd5, 0xd9, 
	0xdd, 0xd7, 0xd7, 0xd6, 0xdb, 0xdd, 0xdc, 0xdf, 
	0xdf, 0xdc, 0xdd, 0xdb, 0xd6, 0xd7, 0xd7, 0xdd, 
	0xd9, 0xd5, 0xdd, 0xd2, 0xd7, 0xd9, 0xd5, 0xd0, 
	0xd7, 0xd6, 0xd9, 0xd5, 0xd5, 0xd0, 0xd3, 0xd8, 
	0xd3, 0xd3, 0xcf, 0xdb, 0xd5, 0xd8, 0xd2, 0xd2, 
	0xe3, 0xe7, 0xe6, 0xe2, 0xe7, 0xe7, 0xe7, 0xe7, 
	0xe6, 0xea, 0xe8, 0xea, 0xe9, 0xe5, 0xe3, 0xe2, 
	0xe7, 0xea, 0xe2, 0xda, 0xe5, 0xe4, 0xde, 0xe4, 
	0xe5, 0xe5, 0xe5, 0xe3, 0xe3, 0xe3, 0xe0, 0xe4, 
	0xe4, 0xe0, 0xe3, 0xe3, 0xe3, 0xe5, 0xe5, 0xe5, 
	0xe4, 0xde, 0xe4, 0xe5, 0xda, 0xe2, 0xea, 0xe7, 
	0xe2, 0xe3, 0xe5, 0xe9, 0xea, 0xe8, 0xea, 0xe6, 
	0xe7, 0xe7, 0xe7, 0xe7, 0xe2, 0xe6, 0xe7, 0xe3, 
	0xe6, 0xe7, 0xe2, 0xe6, 0xe7, 0xeb, 0xe6, 0xe6, 
	0xe5, 0xe7, 0xe6, 0xe4, 0xe6, 0xe3, 0xe5, 0xe3, 
	0xe3, 0xe5, 0xe4, 0xe5, 0xe5, 0xe4, 0xe2, 0xe2, 
	0xe7, 0xe5, 0xe3, 0xe6, 0xe7, 0xec, 0xe8, 0xe8, 
	0xe8, 0xe8, 0xec, 0xe7, 0xe6, 0xe3, 0xe5, 0xe7, 
	0xe2, 0xe2, 0xe4, 0xe5, 0xe5, 0xe4, 0xe5, 0xe3, 
	0xe3, 0xe5, 0xe3, 0xe6, 0xe4, 0xe6, 0xe7, 0xe5, 
	0xe6, 0xe6, 0xeb, 0xe7, 0xe6, 0xe2, 0xe7, 0xe6, 
	0xdf, 0xde, 0xde, 0xdd, 0xe2, 0xe1, 0xe1, 0xe1, 
	0xe6, 0xe6, 0xe3, 0xe2, 0xe8, 0xe0, 0xe5, 0xe5, 
	0xe3, 0xdf, 0xe2, 0xdb, 0xd8, 0xe3, 0xd9, 0xd9, 
	0xda, 0xdf, 0xdf, 0xdf, 0xd7, 0xdd, 0xdf, 0xe1, 
	0xe1, 0xdf, 0xdd, 0xd7, 0xdf, 0xdf, 0xdf, 0xda, 
	0xd9, 0xd9, 0xe3, 0xd8, 0xdb, 0xe2, 0xdf, 0xe3, 
	0xe5, 0xe5, 0xe0, 0xe8, 0xe2, 0xe3, 0xe6, 0xe6, 
	0xe1, 0xe1, 0xe1, 0xe2, 0xdd, 0xde, 0xde, 0xdf, 
	0xe0, 0xe3, 0xe3, 0xdd, 0xdf, 0xe1, 0xe2, 0xe3, 
	0xdf, 0xe1, 0xe2, 0xde, 0xe5, 0xe5, 0xe0, 0xe4, 
	0xe2, 0xde, 0xe0, 0xdf, 0xe0, 0xe0, 0xdf, 0xdf, 
	0xe3, 0xe0, 0xdf, 0xe4, 0xe0, 0xe0, 0xdf, 0xdd, 
	0xdd, 0xdf, 0xe0, 0xe0, 0xe4, 0xdf, 0xe0, 0xe3, 
	0xdf, 0xdf, 0xe0, 0xe0, 0xdf, 0xe0, 0xde, 0xe2, 
	0xe4, 0xe0, 0xe5, 0xe5, 0xde, 0xe2, 0xe1, 0xdf, 
	0xe3, 0xe2, 0xe1, 0xdf, 0xdd, 0xe3, 0xe3, 0xe0, 
	0xdf, 0xde, 0xdd, 0xda, 0xd8, 0xd7, 0xd6, 0xd3, 
	0xda, 0xd7, 0xd7, 0xd9, 0xdb, 0xdf, 0xdf, 0xe3, 
	0xdb, 0xde, 0xdc, 0xde, 0xdc, 0xda, 0xd8, 0xdf, 
	0xdb, 0xd5, 0xd2, 0xd0, 0xd2, 0xd3, 0xd9, 0xd9, 
	0xd9, 0xd9, 0xd3, 0xd2, 0xd0, 0xd2, 0xd5, 0xdb, 
	0xdf, 0xd8, 0xda, 0xdc, 0xde, 0xdc, 0xde, 0xdb, 
	0xe3, 0xdf, 0xdf, 0xdb, 0xd9, 0xd7, 0xd7, 0xda, 
	0xd3, 0xd6, 0xd7, 0xd8, 0xda, 0xdd, 0xde, 0xdf, 
	0xd9, 0xd6, 0xd5, 0xdb, 0xdf, 0xe0, 0xdc, 0xdb, 
	0xdb, 0xd4, 0xd1, 0xd7, 0xd8, 0xd9, 0xda, 0xda, 
	0xda, 0xdb, 0xd4, 0xd8, 0xdb, 0xdd, 0xde, 0xdd, 
	0xde, 0xe1, 0xe0, 0xe0, 0xe3, 0xe3, 0xe4, 0xe3, 
	0xe3, 0xe4, 0xe3, 0xe3, 0xe0, 0xe0, 0xe1, 0xde, 
	0xdd, 0xde, 0xdd, 0xdb, 0xd8, 0xd4, 0xdb, 0xda, 
	0xda, 0xda, 0xd9, 0xd8, 0xd7, 0xd1, 0xd4, 0xdb, 
	0xdb, 0xdc, 0xe0, 0xdf, 0xdb, 0xd5, 0xd6, 0xd9, 
	0xe5, 0xe3, 0xde, 0xe2, 0xe1, 0xe3, 0xe1, 0xe2, 
	0xe1, 0xe4, 0xe3, 0xe6, 0xe3, 0xe1, 0xe4, 0xe4, 
	0xe4, 0xdb, 0xe3, 0xdd, 0xdd, 0xe0, 0xe3, 0xe4, 
	0xe4, 0xe3, 0xe1, 0xe4, 0xe0, 0xdf, 0xe2, 0xe1, 
	0xe1, 0xe2, 0xdf, 0xe0, 0xe4, 0xe1, 0xe3, 0xe4, 
	0xe4, 0xe3, 0xe0, 0xdd, 0xdd, 0xe3, 0xdb, 0xe4, 
	0xe4, 0xe4, 0xe1, 0xe3, 0xe6, 0xe3, 0xe4, 0xe1, 
	0xe2, 0xe1, 0xe3, 0xe1, 0xe2, 0xde, 0xe3, 0xe5, 
	0xdd, 0xde, 0xe1, 0xe4, 0xe7, 0xe9, 0xe7, 0xe8, 
	0xe8, 0xea, 0xec, 0xe8, 0xe7, 0xdd, 0xe5, 0xe8, 
	0xe1, 0xe3, 0xe0, 0xe3, 0xe4, 0xe2, 0xe1, 0xe7, 
	0xe5, 0xe4, 0xe7, 0xe2, 0xe5, 0xe6, 0xe4, 0xe5, 
	0xe5, 0xe4, 0xe6, 0xe5, 0xe2, 0xe7, 0xe4, 0xe5, 
	0xe7, 0xe1, 0xe2, 0xe4, 0xe3, 0xe0, 0xe3, 0xe1, 
	0xe8, 0xe5, 0xdd, 0xe7, 0xe8, 0xec, 0xea, 0xe8, 
	0xe8, 0xe7, 0xe9, 0xe7, 0xe4, 0xe1, 0xde, 0xdd, 
	0xe5, 0xea, 0xee, 0xec, 0xea, 0xe7, 0xe6, 0xe8, 
	0xe8, 0xe8, 0xe6, 0xdf, 0xe0, 0xea, 0xe5, 0xe4, 
	0xdf, 0xe1, 0xe1, 0xdf, 0xdf, 0xdd, 0xdc, 0xdc, 
	0xde, 0xdb, 0xd3, 0xd8, 0xd3, 0xde, 0xdf, 0xe4, 
	0xe4, 0xdf, 0xde, 0xd3, 0xd8, 0xd3, 0xdb, 0xde, 
	0xdc, 0xdc, 0xdd, 0xdf, 0xdf, 0xe1, 0xe1, 0xdf, 
	0xe4, 0xe5, 0xea, 0xe0, 0xdf, 0xe6, 0xe8, 0xe8, 
	0xe8, 0xe6, 0xe7, 0xea, 0xec, 0xee, 0xea, 0xe5, 
	0xe7, 0xe3, 0xea, 0xe6, 0xe9, 0xea, 0xe7, 0xe6, 
	0xe7, 0xe5, 0xe4, 0xe4, 0xdf, 0xdf, 0xe1, 0xe6, 
	0xe3, 0xe5, 0xe5, 0xe5, 0xe4, 0xe6, 0xe5, 0xe5, 
	0xe5, 0xe2, 0xdb, 0xda, 0xdd, 0xe0, 0xda, 0xd5, 
	0xd5, 0xda, 0xe0, 0xdd, 0xda, 0xdb, 0xe2, 0xe5, 
	0xe5, 0xe5, 0xe6, 0xe4, 0xe5, 0xe5, 0xe5, 0xe3, 
	0xe6, 0xe1, 0xdf, 0xdf, 0xe4, 0xe4, 0xe5, 0xe7, 
	0xe6, 0xe7, 0xea, 0xe9, 0xe6, 0xea, 0xe3, 0xe7, 
	0xe9, 0xed, 0xe9, 0xeb, 0xec, 0xec, 0xec, 0xef, 
	0xed, 0xf1, 0xee, 0xeb, 0xf0, 0xea, 0xe8, 0xe8, 
	0xe9, 0xea, 0xec, 0xe6, 0xe4, 0xe5, 0xe4, 0xe6, 
	0xea, 0xe9, 0xe2, 0xdf, 0xdf, 0xe1, 0xe1, 0xe1, 
	0xe1, 0xe1, 0xe1, 0xdf, 0xdf, 0xe2, 0xe9, 0xea, 
	0xe6, 0xe4, 0xe5, 0xe4, 0xe6, 0xec, 0xea, 0xe9, 
	0xe8, 0xe8, 0xea, 0xf0, 0xeb, 0xee, 0xf1, 0xed, 
	0xef, 0xec, 0xec, 0xec, 0xeb, 0xe9, 0xed, 0xe9, 
	0xe7, 0xeb, 0xe6, 0xe8, 0xe9, 0xe8, 0xef, 0xed, 
	0xeb, 0xeb, 0xe8, 0xe7, 0xed, 0xeb, 0xea, 0xe8, 
	0xea, 0xeb, 0xed, 0xea, 0xea, 0xed, 0xed, 0xeb, 
	0xef, 0xee, 0xe8, 0xe7, 0xe7, 0xe3, 0xe5, 0xe4, 
	0xe4, 0xe5, 0xe3, 0xe7, 0xe7, 0xe8, 0xee, 0xef, 
	0xeb, 0xed, 0xed, 0xea, 0xea, 0xed, 0xeb, 0xea, 
	0xe8, 0xea, 0xeb, 0xed, 0xe7, 0xe8, 0xeb, 0xeb, 
	0xed, 0xef, 0xe8, 0xe9, 0xe8, 0xe6, 0xeb, 0xe7, 
	0xea, 0xe5, 0xed, 0xe9, 0xea, 0xe9, 0xea, 0xec, 
	0xea, 0xe7, 0xe4, 0xe6, 0xe4, 0xe5, 0xe8, 0xe9, 
	0xe7, 0xe9, 0xe9, 0xeb, 0xe8, 0xe9, 0xe7, 0xe7, 
	0xe7, 0xe3, 0xe4, 0xe6, 0xe8, 0xe4, 0xe7, 0xe5, 
	0xe5, 0xe7, 0xe4, 0xe8, 0xe6, 0xe4, 0xe3, 0xe7, 
	0xe7, 0xe7, 0xe9, 0xe8, 0xeb, 0xe9, 0xe9, 0xe7, 
	0xe9, 0xe8, 0xe5, 0xe4, 0xe6, 0xe4, 0xe7, 0xea, 
	0xec, 0xea, 0xe9, 0xea, 0xe9, 0xed, 0xe5, 0xea, 
	0xe5, 0xe5, 0xe2, 0xe5, 0xe3, 0xe5, 0xe0, 0xdf, 
	0xe0, 0xde, 0xd8, 0xda, 0xd6, 0xd5, 0xd5, 0xd6, 
	0xd7, 0xda, 0xda, 0xdf, 0xe1, 0xe1, 0xe0, 0xe5, 
	0xe5, 0xe3, 0xe5, 0xe5, 0xe3, 0xe2, 0xe4, 0xd8, 
	0xd8, 0xe4, 0xe2, 0xe3, 0xe5, 0xe5, 0xe3, 0xe5, 
	0xe5, 0xe0, 0xe1, 0xe1, 0xdf, 0xda, 0xda, 0xd7, 
	0xd6, 0xd5, 0xd5, 0xd6, 0xda, 0xd8, 0xde, 0xe0, 
	0xdf, 0xe0, 0xe5, 0xe3, 0xe5, 0xe2, 0xe5, 0xe5, 
	0xc9, 0xcf, 0xcd, 0xc6, 0xc3, 0xc7, 0xc3, 0xc2, 
	0xcd, 0xc7, 0xc0, 0xbe, 0xbd, 0xbc, 0xc2, 0xc4, 
	0xcf, 0xcb, 0xc8, 0xd1, 0xd0, 0xd1, 0xd1, 0xd7, 
	0xda, 0xd7, 0xd5, 0xd6, 0xd7, 0xd9, 0xdf, 0xd4, 
	0xd4, 0xdf, 0xd9, 0xd7, 0xd6, 0xd5, 0xd7, 0xda, 
	0xd7, 0xd1, 0xd1, 0xd0, 0xd1, 0xc8, 0xcb, 0xcf, 
	0xc4, 0xc2, 0xbc, 0xbd, 0xbe, 0xc0, 0xc7, 0xcd, 
	0xc2, 0xc3, 0xc7, 0xc3, 0xc6, 0xcd, 0xcf, 0xc9, 
	0xe8, 0xe5, 0xe8, 0xe6, 0xe7, 0xeb, 0xe8, 0xe4, 
	0xe6, 0xe6, 0xea, 0xe8, 0xe6, 0xe2, 0xe4, 0xe6, 
	0xea, 0xe9, 0xe7, 0xe8, 0xe7, 0xe6, 0xe5, 0xe5, 
	0xe2, 0xe2, 0xe7, 0xe7, 0xe6, 0xea, 0xe2, 0xed, 
	0xed, 0xe2, 0xea, 0xe6, 0xe7, 0xe7, 0xe2, 0xe2, 
	0xe5, 0xe5, 0xe6, 0xe7, 0xe8, 0xe7, 0xe9, 0xea, 
	0xe6, 0xe4, 0xe2, 0xe6, 0xe8, 0xea, 0xe6, 0xe6, 
	0xe4, 0xe8, 0xeb, 0xe7, 0xe6, 0xe8, 0xe5, 0xe8, 
	0xec, 0xea, 0xed, 0xe9, 0xec, 0xe8, 0xec, 0xe5, 
	0xec, 0xec, 0xe9, 0xe7, 0xea, 0xe9, 0xe6, 0xe5, 
	0xea, 0xec, 0xea, 0xe1, 0xe6, 0xeb, 0xe7, 0xe8, 
	0xe6, 0xe8, 0xe7, 0xe5, 0xe6, 0xe4, 0xe6, 0xe0, 
	0xe0, 0xe6, 0xe4, 0xe6, 0xe5, 0xe7, 0xe8, 0xe6, 
	0xe8, 0xe7, 0xeb, 0xe6, 0xe1, 0xea, 0xec, 0xea, 
	0xe5, 0xe6, 0xe9, 0xea, 0xe7, 0xe9, 0xec, 0xec, 
	0xe5, 0xec, 0xe8, 0xec, 0xe9, 0xed, 0xea, 0xec, 
	0xe3, 0xe3, 0xdf, 0xde, 0xda, 0xe0, 0xdd, 0xe4, 
	0xe1, 0xe0, 0xe0, 0xe2, 0xdf, 0xe1, 0xdd, 0xdf, 
	0xe1, 0xe0, 0xe1, 0xe0, 0xe3, 0xe8, 0xe9, 0xe6, 
	0xe4, 0xe2, 0xe5, 0xe2, 0xe1, 0xe2, 0xe9, 0xe7, 
	0xe7, 0xe9, 0xe2, 0xe1, 0xe2, 0xe5, 0xe2, 0xe4, 
	0xe6, 0xe9, 0xe8, 0xe3, 0xe0, 0xe1, 0xe0, 0xe1, 
	0xdf, 0xdd, 0xe1, 0xdf, 0xe2, 0xe0, 0xe0, 0xe1, 
	0xe4, 0xdd, 0xe0, 0xda, 0xde, 0xdf, 0xe3, 0xe3, 
	0xc2, 0xc5, 0xc2, 0xc9, 0xcc, 0xc5, 0xc9, 0xcb, 
	0xc8, 0xc5, 0xc4, 0xc3, 0xc8, 0xc1, 0xc3, 0xc4, 
	0xcb, 0xc7, 0xcb, 0xc7, 0xc9, 0xc9, 0xca, 0xc7, 
	0xcd, 0xd1, 0xd4, 0xd5, 0xd9, 0xd9, 0xdb, 0xdd, 
	0xdd, 0xdb, 0xd9, 0xd9, 0xd5, 0xd4, 0xd1, 0xcd, 
	0xc7, 0xca, 0xc9, 0xc9, 0xc7, 0xcb, 0xc7, 0xcb, 
	0xc4, 0xc3, 0xc1, 0xc8, 0xc3, 0xc4, 0xc5, 0xc8, 
	0xcb, 0xc9, 0xc5, 0xcc, 0xc9, 0xc2, 0xc5, 0xc2, 
	0xcc, 0xca, 0xca, 0xc8, 0xcb, 0xcb, 0xca, 0xc6, 
	0xc4, 0xc5, 0xc2, 0xc8, 0xc3, 0xcc, 0xc7, 0xd1, 
	0xcd, 0xc8, 0xca, 0xca, 0xcd, 0xcb, 0xcb, 0xce, 
	0xcd, 0xcd, 0xcf, 0xd4, 0xdc, 0xd3, 0xde, 0xdb, 
	0xdb, 0xde, 0xd3, 0xdc, 0xd4, 0xcf, 0xcd, 0xcd, 
	0xce, 0xcb, 0xcb, 0xcd, 0xca, 0xca, 0xc8, 0xcd, 
	0xd1, 0xc7, 0xcc, 0xc3, 0xc8, 0xc2, 0xc5, 0xc4, 
	0xc6, 0xca, 0xcb, 0xcb, 0xc8, 0xca, 0xca, 0xcc, 
	0xe8, 0xe7, 0xe7, 0xe4, 0xe4, 0xe3, 0xe3, 0xe4, 
	0xe6, 0xe5, 0xe4, 0xe4, 0xe3, 0xe9, 0xe5, 0xe5, 
	0xe5, 0xe5, 0xe3, 0xe6, 0xe4, 0xe3, 0xe7, 0xe8, 
	0xe7, 0xe8, 0xe7, 0xe7, 0xe7, 0xe8, 0xe2, 0xe6, 
	0xe6, 0xe2, 0xe8, 0xe7, 0xe7, 0xe7, 0xe8, 0xe7, 
	0xe8, 0xe7, 0xe3, 0xe4, 0xe6, 0xe3, 0xe5, 0xe5, 
	0xe5, 0xe5, 0xe9, 0xe3, 0xe4, 0xe4, 0xe5, 0xe6, 
	0xe4, 0xe3, 0xe3, 0xe4, 0xe4, 0xe7, 0xe7, 0xe8, 
	0xe4, 0xe4, 0xe5, 0xe7, 0xe7, 0xe9, 0xe6, 0xe8, 
	0xe7, 0xe5, 0xe8, 0xe7, 0xeb, 0xe6, 0xe7, 0xe4, 
	0xe6, 0xe4, 0xe6, 0xe5, 0xe9, 0xe6, 0xe6, 0xea, 
	0xe8, 0xe9, 0xe6, 0xe7, 0xe7, 0xe6, 0xe6, 0xe5, 
	0xe5, 0xe6, 0xe6, 0xe7, 0xe7, 0xe6, 0xe9, 0xe8, 
	0xea, 0xe6, 0xe6, 0xe9, 0xe5, 0xe6, 0xe4, 0xe6, 
	0xe4, 0xe7, 0xe6, 0xeb, 0xe7, 0xe8, 0xe5, 0xe7, 
	0xe8, 0xe6, 0xe9, 0xe7, 0xe7, 0xe5, 0xe4, 0xe4, 
	0xe8, 0xe8, 0xe8, 0xe7, 0xe5, 0xe6, 0xe8, 0xe9, 
	0xe9, 0xe9, 0xe9, 0xe9, 0xe8, 0xe9, 0xe9, 0xe9, 
	0xe8, 0xeb, 0xe8, 0xe9, 0xe6, 0xe6, 0xea, 0xe8, 
	0xe7, 0xe8, 0xe7, 0xe8, 0xe8, 0xe9, 0xe8, 0xe9, 
	0xe9, 0xe8, 0xe9, 0xe8, 0xe8, 0xe7, 0xe8, 0xe7, 
	0xe8, 0xea, 0xe6, 0xe6, 0xe9, 0xe8, 0xeb, 0xe8, 
	0xe9, 0xe9, 0xe9, 0xe8, 0xe9, 0xe9, 0xe9, 0xe9, 
	0xe9, 0xe8, 0xe6, 0xe5, 0xe7, 0xe8, 0xe8, 0xe8, 
	0xe8, 0xe7, 0xe6, 0xe8, 0xe8, 0xe8, 0xe7, 0xe7, 
	0xe6, 0xe5, 0xe5, 0xe4, 0xe3, 0xe3, 0xe6, 0xe7, 
	0xe6, 0xe6, 0xe6, 0xe6, 0xe6, 0xe6, 0xe6, 0xe5, 
	0xe3, 0xe3, 0xe4, 0xe4, 0xe4, 0xe5, 0xe5, 0xe6, 
	0xe6, 0xe5, 0xe5, 0xe4, 0xe4, 0xe4, 0xe3, 0xe3, 
	0xe5, 0xe6, 0xe6, 0xe6, 0xe6, 0xe6, 0xe6, 0xe6, 
	0xe7, 0xe6, 0xe3, 0xe3, 0xe4, 0xe5, 0xe5, 0xe6, 
	0xe7, 0xe7, 0xe8, 0xe8, 0xe8, 0xe6, 0xe7, 0xe8, 
	0xe7, 0xe6, 0xe6, 0xe8, 0xe8, 0xe6, 0xe8, 0xe9, 
	0xe7, 0xe7, 0xe8, 0xe8, 0xe7, 0xe8, 0xe7, 0xe5, 
	0xe5, 0xe5, 0xe7, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 
	0xe8, 0xe9, 0xe7, 0xe7, 0xe6, 0xe5, 0xe7, 0xe6, 
	0xe6, 0xe7, 0xe5, 0xe6, 0xe7, 0xe7, 0xe9, 0xe8, 
	0xea, 0xe9, 0xe8, 0xe7, 0xe6, 0xe7, 0xe5, 0xe5, 
	0xe5, 0xe7, 0xe8, 0xe7, 0xe8, 0xe8, 0xe7, 0xe7, 
	0xe9, 0xe8, 0xe6, 0xe8, 0xe8, 0xe6, 0xe6, 0xe7, 
	0xe7, 0xe8, 0xea, 0xe7, 0xe7, 0xe6, 0xe8, 0xe7, 
	0xe7, 0xe8, 0xe8, 0xe7, 0xe6, 0xe8, 0xe8, 0xe6, 
	0xe6, 0xe7, 0xe9, 0xe6, 0xe6, 0xe6, 0xe6, 0xe8, 
	0xe7, 0xe9, 0xe5, 0xe5, 0xe6, 0xe8, 0xe6, 0xe6, 
	0xe6, 0xe6, 0xe8, 0xe6, 0xe5, 0xe5, 0xe9, 0xe7, 
	0xe8, 0xe6, 0xe6, 0xe6, 0xe6, 0xe9, 0xe7, 0xe6, 
	0xe6, 0xe8, 0xe8, 0xe6, 0xe7, 0xe8, 0xe8, 0xe7, 
	0xe7, 0xe8, 0xe6, 0xe7, 0xe7, 0xea, 0xe8, 0xe7, 
	0xe7, 0xe6, 0xe6, 0xe4, 0xe7, 0xe8, 0xe7, 0xe6, 
	0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe5, 0xe5, 0xe6, 
	0xe3, 0xe2, 0xe3, 0xe4, 0xe6, 0xe5, 0xe3, 0xe4, 
	0xe3, 0xe6, 0xe2, 0xe6, 0xe1, 0xe6, 0xe6, 0xe8, 
	0xe8, 0xe6, 0xe6, 0xe1, 0xe6, 0xe2, 0xe6, 0xe3, 
	0xe4, 0xe3, 0xe5, 0xe6, 0xe4, 0xe3, 0xe2, 0xe3, 
	0xe6, 0xe5, 0xe5, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 
	0xe6, 0xe7, 0xe8, 0xe7, 0xe4, 0xe6, 0xe6, 0xe7, 
	
};

Vtx bookstack_000_displaylist_mesh_vtx_0[159] = {
	{{{-96, 11, -100},0, {934, 922},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-87, 0, -100},0, {934, 976},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-95, 0, -100},0, {976, 976},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-104, 11, -100},0, {976, 922},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 55, -100},0, {934, 701},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-104, 55, -100},0, {976, 701},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-87, 67, -100},0, {934, 645},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-95, 67, -100},0, {976, 645},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 79, -100},0, {934, 585},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-104, 79, -100},0, {976, 585},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 122, -100},0, {934, 372},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-104, 122, -100},0, {976, 372},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-87, 133, -100},0, {934, 315},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-95, 133, -100},0, {976, 315},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 144, -100},0, {934, 261},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-104, 144, -100},0, {976, 261},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 190, -100},0, {934, 36},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 144, -100},0, {934, 261},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-104, 144, -100},0, {976, 261},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-104, 190, -100},0, {976, 36},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-87, 200, -100},0, {934, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-95, 200, -100},0, {976, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 200, -100},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 190, -100},0, {-16, 36},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-95, 0, -100},0, {976, -16},{0x9E, 0xAF, 0x0, 0xFF}}},
	{{{-95, 0, 100},0, {976, 976},{0x9E, 0xAF, 0x0, 0xFF}}},
	{{{-104, 11, 100},0, {922, 976},{0x9E, 0xAF, 0x0, 0xFF}}},
	{{{-104, 11, -100},0, {922, -16},{0x9E, 0xAF, 0x0, 0xFF}}},
	{{{-95, 0, 100},0, {-16, 976},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-95, 0, -100},0, {976, 976},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-87, 0, -100},0, {976, 934},{0x0, 0x81, 0x0, 0xFF}}},
	{{{105, 0, 100},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-87, 0, -100},0, {976, 934},{0x0, 0x81, 0x0, 0xFF}}},
	{{{105, 0, -100},0, {976, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{105, 0, 100},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-87, 0, 100},0, {-16, 934},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-95, 0, 100},0, {-16, 976},{0x0, 0x81, 0x0, 0xFF}}},
	{{{105, 11, -100},0, {922, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 11, 100},0, {922, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 0, 100},0, {976, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 0, -100},0, {976, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-87, 0, 100},0, {26, 976},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 0, 100},0, {976, 976},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 11, 100},0, {976, 922},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-96, 11, 100},0, {26, 922},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-95, 0, 100},0, {-16, 976},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-104, 11, 100},0, {-16, 922},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-96, 55, 100},0, {26, 701},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-104, 11, 100},0, {-16, 922},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-96, 55, 100},0, {26, 701},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-104, 55, 100},0, {-16, 701},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-87, 67, 100},0, {26, 645},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 67, 100},0, {976, 645},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 55, 100},0, {976, 701},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 79, 100},0, {976, 585},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-96, 79, 100},0, {26, 585},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-95, 67, 100},0, {-16, 645},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-104, 79, 100},0, {-16, 585},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-96, 122, 100},0, {26, 372},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-104, 122, 100},0, {-16, 372},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-87, 133, 100},0, {26, 315},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 133, 100},0, {976, 315},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 122, 100},0, {976, 372},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 144, 100},0, {976, 261},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-87, 133, 100},0, {26, 315},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 144, 100},0, {976, 261},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-96, 144, 100},0, {26, 261},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-95, 133, 100},0, {-16, 315},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-104, 144, 100},0, {-16, 261},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-96, 190, 100},0, {26, 36},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-104, 190, 100},0, {-16, 36},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-87, 200, 100},0, {26, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-95, 200, 100},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-104, 122, 100},0, {-16, 372},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-104, 55, 100},0, {-16, 701},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-87, 67, 100},0, {26, 645},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-95, 67, 100},0, {-16, 645},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-87, 200, 100},0, {-16, 26},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, 200, 100},0, {-16, 976},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, 200, -100},0, {976, 976},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-95, 200, -100},0, {976, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-87, 200, 100},0, {-16, 26},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{105, 200, -100},0, {976, 976},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-87, 200, -100},0, {976, 26},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-95, 200, 100},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-96, 190, 100},0, {26, 36},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 190, 100},0, {976, 36},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 200, 100},0, {976, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-87, 200, 100},0, {26, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 200, -100},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 200, 100},0, {-16, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 190, 100},0, {36, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 190, -100},0, {36, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 11, -100},0, {-16, 922},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 0, -100},0, {-16, 976},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-87, 0, -100},0, {934, 976},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 11, -100},0, {-16, 922},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-87, 0, -100},0, {934, 976},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 11, -100},0, {934, 922},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-104, 190, -100},0, {36, -16},{0xA0, 0x54, 0x0, 0xFF}}},
	{{{-104, 190, 100},0, {36, 976},{0xA0, 0x54, 0x0, 0xFF}}},
	{{{-95, 200, 100},0, {-16, 976},{0xA0, 0x54, 0x0, 0xFF}}},
	{{{-95, 200, -100},0, {-16, -16},{0xA0, 0x54, 0x0, 0xFF}}},
	{{{-104, 55, -100},0, {701, -16},{0x9D, 0x50, 0x0, 0xFF}}},
	{{{-104, 55, 100},0, {701, 976},{0x9D, 0x50, 0x0, 0xFF}}},
	{{{-95, 67, 100},0, {645, 976},{0x9D, 0x50, 0x0, 0xFF}}},
	{{{-95, 67, -100},0, {645, -16},{0x9D, 0x50, 0x0, 0xFF}}},
	{{{-95, 67, -100},0, {645, -16},{0x9B, 0xB3, 0x0, 0xFF}}},
	{{{-95, 67, 100},0, {645, 976},{0x9B, 0xB3, 0x0, 0xFF}}},
	{{{-104, 79, 100},0, {585, 976},{0x9B, 0xB3, 0x0, 0xFF}}},
	{{{-104, 79, -100},0, {585, -16},{0x9B, 0xB3, 0x0, 0xFF}}},
	{{{-104, 122, -100},0, {372, -16},{0x9C, 0x4F, 0x0, 0xFF}}},
	{{{-104, 122, 100},0, {372, 976},{0x9C, 0x4F, 0x0, 0xFF}}},
	{{{-95, 133, 100},0, {315, 976},{0x9C, 0x4F, 0x0, 0xFF}}},
	{{{-95, 133, -100},0, {315, -16},{0x9C, 0x4F, 0x0, 0xFF}}},
	{{{-95, 133, -100},0, {315, -16},{0x9F, 0xAF, 0x0, 0xFF}}},
	{{{-95, 133, 100},0, {315, 976},{0x9F, 0xAF, 0x0, 0xFF}}},
	{{{-104, 144, 100},0, {261, 976},{0x9F, 0xAF, 0x0, 0xFF}}},
	{{{-104, 144, -100},0, {261, -16},{0x9F, 0xAF, 0x0, 0xFF}}},
	{{{105, 79, -100},0, {585, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 79, 100},0, {585, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 67, 100},0, {645, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 67, -100},0, {645, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 67, -100},0, {645, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 67, 100},0, {645, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 55, 100},0, {701, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 55, -100},0, {701, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 144, -100},0, {261, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 144, 100},0, {261, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 133, 100},0, {315, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 133, -100},0, {315, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 122, 100},0, {372, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 122, -100},0, {372, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 67, -100},0, {-16, 645},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 55, -100},0, {-16, 701},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 55, -100},0, {934, 701},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-87, 67, -100},0, {934, 645},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 79, -100},0, {-16, 585},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 79, -100},0, {934, 585},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 144, -100},0, {-16, 261},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 133, -100},0, {-16, 315},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-87, 133, -100},0, {934, 315},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 144, -100},0, {934, 261},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 133, -100},0, {-16, 315},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 122, -100},0, {-16, 372},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 122, -100},0, {934, 372},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-87, 133, -100},0, {934, 315},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-104, 79, -100},0, {585, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 79, 100},0, {585, 976},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 122, 100},0, {372, 976},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 122, -100},0, {372, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 144, -100},0, {261, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 144, 100},0, {261, 976},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 190, 100},0, {36, 976},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 190, -100},0, {36, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 11, -100},0, {922, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 11, 100},0, {922, 976},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 55, 100},0, {701, 976},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-104, 55, -100},0, {701, -16},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx bookstack_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 0, 4, 0),
	gsSP1Triangle(6, 7, 0, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(13, 9, 12, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(14, 12, 15, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(1, 5, 4, 0),
	gsSP1Triangle(3, 4, 6, 0),
	gsSP1Triangle(3, 6, 7, 0),
	gsSP1Triangle(8, 3, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(9, 7, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(10, 14, 13, 0),
	gsSP1Triangle(12, 13, 15, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 0, 3, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(0, 4, 1, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_0 + 96, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_0 + 111, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_0 + 127, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 6, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_0 + 143, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx bookstack_000_displaylist_mesh_vtx_1[36] = {
	{{{-96, 79, 100},0, {-6627, -6},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 79, 100},0, {-2140, -6},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 122, 100},0, {-2140, -969},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-96, 122, 100},0, {-6627, -969},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 122, -100},0, {2335, -969},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 122, 100},0, {-2140, -969},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 79, 100},0, {-2140, -6},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 79, -100},0, {2335, -6},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 122, -100},0, {2335, -969},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 79, -100},0, {2335, -6},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 79, -100},0, {6822, -6},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 122, -100},0, {6822, -969},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 190, -100},0, {-2140, 2009},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 190, 100},0, {2335, 2009},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 144, 100},0, {2335, 994},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 144, -100},0, {-2140, 994},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-96, 144, 100},0, {6822, 994},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 144, 100},0, {2335, 994},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 190, 100},0, {2335, 2009},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-96, 190, 100},0, {6822, 2009},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 190, -100},0, {-2140, 2009},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 144, -100},0, {-2140, 994},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 144, -100},0, {-6627, 994},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 190, -100},0, {-6627, 2009},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 11, 100},0, {-6627, 991},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 11, 100},0, {-2140, 991},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 55, 100},0, {-2140, -3},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-96, 55, 100},0, {-6627, -3},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{105, 55, -100},0, {2335, -3},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 55, 100},0, {-2140, -3},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 11, 100},0, {-2140, 991},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 11, -100},0, {2335, 991},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{105, 55, -100},0, {2335, -3},{0x0, 0x0, 0x81, 0xFF}}},
	{{{105, 11, -100},0, {2335, 991},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 11, -100},0, {6822, 991},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 55, -100},0, {6822, -3},{0x0, 0x0, 0x81, 0xFF}}},
};

Gfx bookstack_000_displaylist_mesh_tri_1[] = {
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(bookstack_000_displaylist_mesh_vtx_1 + 32, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_bookstack_sm64_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, PRIMITIVE, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 124, 124, 124, 255),
	gsSPSetLights1(bookstack_sm64_material_lights),
	gsSPEndDisplayList(),
};

Gfx mat_bookstack_sm64_material_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b, 64, bookstack_BookInside_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPSetLights1(bookstack_sm64_material_001_lights),
	gsSPEndDisplayList(),
};

Gfx bookstack_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_bookstack_sm64_material),
	gsSPDisplayList(bookstack_000_displaylist_mesh_tri_0),
	gsSPDisplayList(mat_bookstack_sm64_material_001),
	gsSPDisplayList(bookstack_000_displaylist_mesh_tri_1),
	gsSPEndDisplayList(),
};

Gfx bookstack_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

