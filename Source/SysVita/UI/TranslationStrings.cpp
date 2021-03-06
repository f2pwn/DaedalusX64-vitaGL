#include "SysVita/UI/Menu.h"

char *lang_identifiers[] = {
	FOREACH_STR(GET_STRING)
};

// This is properly populated so that emulator won't crash if an user launches it without language INI files.
char lang_strings[][128] = {
	"Downloading compatibility list database", // STR_DOWNLOADER_COMPAT_LIST
	"Downloading an update", // STR_DOWNLOADER_UPDATE
	"Checking for updates", // STR_DOWNLOADER_CHECK_UPDATE
	"Unknown", // STR_UNKNOWN
	"Unused", // STR_UNUSED
	"Used", // STR_USED
	"Required", // STR_REQUIRED
	"Game Name", // STR_GAME_NAME
	"Region", // STR_REGION
	"Cic Type", // STR_CIC_TYPE
	"ROM Size", // STR_ROM_SIZE
	"Save Type", // STR_SAVE_TYPE
	"Tags", // STR_TAGS
	"Playable", // STR_GAME_PLAYABLE
	"Ingame +", // STR_GAME_INGAME_PLUS
	"Ingame -", // STR_GAME_INGAME_MINUS
	"Crash", // STR_GAME_CRASH
	"Slow", // STR_GAME_SLOW
	"Games that can be played from start to\nend with playable performances.", // STR_PLAYABLE_DESC
	"Games that go far ingame but have glitches\nor have non-playable performances.", // STR_INGAME_PLUS_DESC
	"Games that go ingame but have major issues\nthat prevents it from going further early on.", // STR_INGAME_MINUS_DESC
	"Games that crash before reaching ingame.", // STR_CRASH_DESC
	"Game is playable but still not fullspeed.", // STR_SLOW_DESC
	"Language", // STR_MENU_LANG
	"Extra", // STR_MENU_EXTRA
	"Emulation", // STR_MENU_EMULATION
	"Graphics", // STR_MENU_GRAPHICS
	"Audio", // STR_MENU_AUDIO
	"Input", // STR_MENU_INPUT
	"Options", // STR_MENU_OPTIONS
	"Debugger", // STR_MENU_DEBUGGER
	"Credits", // STR_MENU_CREDITS
	"Save Global Settings", // STR_MENU_GLOBAL_SETTINGS
	"Save Game Settings", // STR_MENU_GAME_SETTINGS
	"UI Theme", // STR_MENU_UI_THEME
	"Hide Menubar", // STR_MENU_MENUBAR
	"Auto Update at Boot", // STR_MENU_AUTOUPDATE
	"Update Compat List at Boot", // STR_MENU_COMPAT_LIST
	"Console Logs", // STR_MENU_LOG
	"Textures Dumper", // STR_MENU_TEX_DUMPER
	"DynaRec (Unsafe)", // STR_MENU_UNSAFE_DYNAREC
	"DynaRec (Safe)", // STR_MENU_SAFE_DYNAREC
	"Cached Interpreter", // STR_MENU_CACHED_INTERP
	"Interpreter", // STR_MENU_INTERP
	"High Level Emulation", // STR_MENU_HLE
	"Frame Limit", // STR_MENU_FRAME_LIMIT
	"Sync Video Rate", // STR_MENU_VIDEO_RATE
	"Sync Audio Rate", // STR_MENU_AUDIO_RATE
	"Aspect Ratio", // STR_MENU_ASPECT_RATIO
	"16:9 Unstretched", // STR_MENU_RATIO_UNSTRETCHED
	"Original", // STR_MENU_RATIO_ORIGINAL
	"Brightness", // STR_MENU_BRIGHTNESS
	"Textures Caching", // STR_MENU_TEX_CACHE
	"Bilinear Filter", // STR_MENU_BILINEAR
	"Mipmaps", // STR_MENU_MIPMAPS
	"High-Res Textures", // STR_MENU_HIRES_TEX
	"Use VRAM", // STR_MENU_VRAM
	"Clear Depth Buffer", // STR_MENU_DEPTH_BUFFER
	"Wait Rendering Done", // STR_MENU_WAIT_REND
	"Files", // STR_MENU_FILES
	"Cheats", // STR_MENU_CHEATS
	"Save Savestate", // STR_MENU_SAVE_STATE
	"Load Savestate", // STR_MENU_LOAD_STATE
	"Restart Rom", // STR_MENU_RESTART_ROM
	"Close Rom", // STR_MENU_CLOSE_ROM
	"Sort Roms", // STR_MENU_SORT_ROMS
	"Disable MP3 instructions", // STR_MENU_MP3_INSTR
	"Use Rearpad", // STR_MENU_REARPAD
	"Controls Mapping", // STR_MENU_CTRL_MAP
	"A to Z", // STR_SORT_A_TO_Z
	"Z to A", // STR_SORT_Z_TO_A
	"Disabled", // STR_DISABLED
	"Slot", // STR_SLOT
	"vFlux Configuration", // STR_VFLUX_CONFIG
	"Filter Color", // STR_VFLUX_COLOR
	"Enable vFlux", // STR_VFLUX_ENABLE
	"Port Author", // STR_CREDITS_AUTHOR
	"Patreon Supporters:", // STR_CREDITS_PATRONERS
	"Special thanks to:", // STR_CREDITS_THANKS
	"xerpi for the initial Vita port", // STR_CREDITS_1
	"MasterFeizz for the ARM DynaRec", // STR_CREDITS_2
	"TheFloW for his contributions to the DynaRec code", // STR_CREDITS_3
	"m4xw for the help sanitizing PIF code", // STR_CREDITS_4
	"Salvy & frangarcj for the help with some bugfixes", // STR_CREDITS_5
	"Inssame for some additions to the UI code", // STR_CREDITS_6
	"That One Seong & TheIronUniverse for the Livearea assets", // STR_CREDITS_7
	"withLogic for the high-res preview assets", // STR_CREDITS_8
	"Cartridge ID", // STR_CART_ID
	"Installed GFX Microcode", // STR_GFX_UCODE
	"Installed Audio Microcode", // STR_AUDIO_UCODE
	"Synchronous", // STR_SYNC
	"Asynchronous", // STR_ASYNC
	"Controller", // STR_CONTROLLER
	"Accessory", // STR_ACCESSORY
	"Accurate", // STR_ACCURATE
	"Fast", // STR_FAST
	"Disables MP3 instructions for better performances.", // STR_DESC_MP3_INSTR
	"Emulates L1/R1/L3/R3 through rearpad inputs.", // STR_DESC_REARPAD
	"Blends a color filter on screen depending on daytime.", // STR_DESC_VFLUX
	"Enables VRAM usage for textures storing.", // STR_DESC_VRAM
	"Enables depth buffer clear at every frame. May solve some glitches.", // STR_DESC_DEPTH_BUFFER
	"Makes CPU wait GPU rendering end before elaborating the next frame.\nReduces artifacting at the cost of performances.", // STR_DESC_WAIT_REND
	"Enables external high-res textures packs usage.", // STR_DESC_HIRES_TEX
	"Forces mipmaps generation for 3D rendering.", // STR_DESC_MIPMAPS
	"Forces bilinear filtering on every texture.", // STR_DESC_BILINEAR
	"Caches permanently stored textures.\nImproves greatly performances but may cause severe glitches.", // STR_DESC_CACHE_FAST
	"Caches stored textures at each frame.\nImproves performances but may cause glitches.", // STR_DESC_CACHE_ACCURATE
	"Disables caching for stored textures.\nReduces graphical glitches at the cost of performances.", // STR_DESC_CACHE_DISABLED
	"Speed up audio logic to match framerate.", // STR_DESC_AUDIO_RATE
	"Speed up video logic to match framerate.", // STR_DESC_VIDEO_RATE
	"Limits framerate to the one running game is supposed to have.", // STR_DESC_FRAME_LIMIT
	"Enables high level emulation of OS functions for better performance.\nMay cause instability on some games.", // STR_DESC_HLE
	"Enables interpreter for best compatibility.", // STR_DESC_INTERP
	"Enables cached interpreter for decent performances and better compatibility.", // STR_DESC_CACHED_INTERP
	"Enables safe dynamic recompilation for good performances and better compatibility.", // STR_DESC_SAFE_DYNAREC
	"Enables full dynamic recompilation for best performances.", // STR_DESC_UNSAFE_DYNAREC
	"Enables textures dumping for high-res textures pack.", // STR_DESC_TEX_DUMPER
	"Dark", // STR_THEME_DARK
	"Light", // STR_THEME_LIGHT
	"Classic", // STR_THEME_CLASSIC
	"Germany", // STR_REGION_GER
	"USA", // STR_REGION_USA
	"France", // STR_REGION_FRA
	"Italy", // STR_REGION_ITA
	"Japan", // STR_REGION_JAP
	"Europe", // STR_REGION_EUR
	"Spain", // STR_REGION_ESP
	"Australia" // STR_REGION_AUS
};
