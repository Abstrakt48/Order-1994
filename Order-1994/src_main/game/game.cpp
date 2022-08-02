#include "game.h"
#include "orderdef.h"
#include "public/string_t.h"
#include "engine/sys.h"

#include "tools/basetypes.h"

#include "renderer/r_local.h"
#include "tools/mathlib.h"

#include <stdlib.h>

int GM_OrderInit(void)
{
	// init code here
	return EXIT_SUCCESS;
};

void GM_OrderMain(void)
{
	Sys_Printf("\n********** %s V%s *********\n", GAME, VERSION);

	vec3_t dlightOrg;
	vec3_t dlightCol;
	Vector3Create(dlightOrg, 0, 10, 0); // placed 10 ingame coords above world origin
	Vector3Create(dlightCol, 100, 10, 0);

	DynamicLight dlight;
	dlight.R_CreateDynamicLight(dlightOrg, dlightCol, 30.f);

	for (int i = 0; i < sizeof(dlight.origin) / sizeof(dlight.origin[0]); i++)
	{
		Sys_Printf("%f ", dlight.origin[i]);
	}
	Sys_Printf("\n");
	for (int i = 0; i < sizeof(dlight.origin) / sizeof(dlight.origin[0]); i++)
	{
		Sys_Printf("%f ", dlight.color[i]);
	}
	Sys_Printf("\n");

	Sys_Exit(0);
};