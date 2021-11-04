#include "pch.h"
#include "groundhog_offsets.h"
#include "memory_editing.h"

uint8_t* groundhog::offsets::game_update;

void groundhog::offsets::init()
{
	game_update = memory::pattern_scan(GetModuleHandle(L"groundhog.dll"), "48 89 5c 24 ? 48 89 6c 24 ? 48 89 74 24 ? 57 41 56 41 57 48 83 ec ? 8b 05 ? ? ? ? 4c 8b fa");
}