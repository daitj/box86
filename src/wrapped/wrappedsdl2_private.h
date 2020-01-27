#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh!
#endif

// _fini
// _init
GO(SDL_abs, iFi)
GO(SDL_acos, dFd)
GO(SDL_acosf, fFf)
GOM(SDL_AddEventWatch, vFEpp)
// SDL_AddHintCallback
GOM(SDL_AddTimer, pFEupp)
GO(SDL_AllocFormat, pFu)
GO(SDL_AllocPalette, pFi)
GO(SDL_AllocRW, pFv)    // no need to create a "my_" probably
GO(SDL_asin, dFd)
GO(SDL_asinf, fFf)
GO(SDL_atan, dFd)
GO(SDL_atan2, dFdd)
GO(SDL_atan2f, fFff)
GO(SDL_atanf, fFf)
GO(SDL_atof, dFp)
GO(SDL_atoi, iFp)
GO(SDL_AtomicAdd, iFpi)
GO(SDL_AtomicCAS, iFpii)
GO(SDL_AtomicCASPtr, iFppp)
GO(SDL_AtomicGet, iFp)
GO(SDL_AtomicGetPtr, pFp)
// SDL_AtomicLock
GO(SDL_AtomicSet, iFpi)
GO(SDL_AtomicSetPtr, pFpp)
// SDL_AtomicTryLock
// SDL_AtomicUnlock
// SDL_AudioInit
// SDL_AudioQuit
// SDL_AudioStreamAvailable
// SDL_AudioStreamClear
// SDL_AudioStreamFlush
// SDL_AudioStreamGet
// SDL_AudioStreamPut
GO(SDL_BuildAudioCVT, iFpuuiuui)
GO(SDL_CalculateGammaRamp, vFfp)
GO(SDL_calloc, pFuu)
// SDL_CaptureMouse
GO(SDL_ceil, dFd)
GO(SDL_ceilf, fFf)
GO(SDL_ClearError, vFv)
// SDL_ClearHints
// SDL_ClearQueuedAudio
GO(SDL_CloseAudio, vFv)
GO(SDL_CloseAudioDevice, vFi)
// SDL_ComposeCustomBlendMode
GO(SDL_CondBroadcast, iFp)
GO(SDL_CondSignal, iFp)
GO(SDL_CondWait, iFpp)
GO(SDL_CondWaitTimeout, iFppu)
GO(SDL_ConvertAudio, iFp)
GO(SDL_ConvertPixels, iFiiupiupi)
GO(SDL_ConvertSurface, pFppu)
GO(SDL_ConvertSurfaceFormat, pFpuu)
// SDL_copysign
// SDL_copysignf
// SDL_cos
GO(SDL_cosf, fFf)
GO(SDL_CreateColorCursor, pFpii)
GO(SDL_CreateCond, pFv)
// SDL_CreateCursor
GO(SDL_CreateMutex, pFv)
GO(SDL_CreateRenderer, pFpiu)
GO(SDL_CreateRGBSurface, pFuiiiuuuu)
GO(SDL_CreateRGBSurfaceFrom, pFpiiiiuuuu)
GO(SDL_CreateRGBSurfaceWithFormat, pFuiiiu)
GO(SDL_CreateRGBSurfaceWithFormatFrom, pFpiiiiu)
GO(SDL_CreateSemaphore, pFu)
GO(SDL_CreateShapedWindow, pFpuuuuu)
GO(SDL_CreateSoftwareRenderer, pFp)
GO(SDL_CreateSystemCursor, pFu)
GO(SDL_CreateTexture, pFpuiii)
GO(SDL_CreateTextureFromSurface, pFpp)
GOM(SDL_CreateThread, pFEppp)
// SDL_CreateThreadWithStackSize
GO(SDL_CreateWindow, pFpiiiiu)
GO(SDL_CreateWindowAndRenderer, iFiiupp)
GO(SDL_CreateWindowFrom, pFp)
GO(SDL_Delay, vFu)
GOM(SDL_DelEventWatch, vFEpp)
// SDL_DelHintCallback
// SDL_DequeueAudio
GO(SDL_DestroyCond, vFp)
GO(SDL_DestroyMutex, vFp)
GO(SDL_DestroyRenderer, vFp)
GO(SDL_DestroySemaphore, vFp)
GO(SDL_DestroyTexture, vFp)
GO(SDL_DestroyWindow, vFp)
GO(SDL_DetachThread, vFp)
GO(SDL_DisableScreenSaver, vFv)
// SDL_DuplicateSurface
// SDL_DYNAPI_entry
GO(SDL_EnableScreenSaver, vFv)
// SDL_EnclosePoints
GO(SDL_Error, iFi)
GO(SDL_EventState, CFui)
// SDL_exp
// SDL_expf
GO(SDL_fabs, dFd)
GO(SDL_fabsf, fFf)
GO(SDL_FillRect, iFppu)
GO(SDL_FillRects, iFppiu)
// SDL_FilterEvents
// SDL_floor
// SDL_floorf
// SDL_FlushEvent
GO(SDL_FlushEvents, vFuu)
// SDL_fmod
// SDL_fmodf
GO(SDL_free, vFp)
// SDL_FreeAudioStream
GO(SDL_FreeCursor, vFp)
GO(SDL_FreeFormat, vFp)
GO(SDL_FreePalette, vFp)
GO(SDL_FreeRW, vFp)
GO(SDL_FreeSurface, vFp)
// SDL_FreeWAV
GO(SDL_GameControllerAddMapping, iFp)
GOM(SDL_GameControllerAddMappingsFromRW, iFEpi)
GO(SDL_GameControllerClose, vFp)
GO(SDL_GameControllerEventState, iFi)
GO(SDL_GameControllerFromInstanceID, pFi)
GO(SDL_GameControllerGetAttached, iFp)
GO(SDL_GameControllerGetAxis, iFpi)
GO(SDL_GameControllerGetAxisFromString, uFp)
GOS(SDL_GameControllerGetBindForAxis, pFEppi)
GOS(SDL_GameControllerGetBindForButton, pFEppi)
GO(SDL_GameControllerGetButton, uFpi)
GO(SDL_GameControllerGetButtonFromString, uFp)
GO(SDL_GameControllerGetJoystick, pFp)
// SDL_GameControllerGetPlayerIndex
// SDL_GameControllerGetProduct
// SDL_GameControllerGetProductVersion
// SDL_GameControllerGetStringForAxis
GO(SDL_GameControllerGetStringForButton, pFu)
// SDL_GameControllerGetVendor
GO(SDL_GameControllerMapping, pFp)
GO(SDL_GameControllerMappingForDeviceIndex, pFi)
GOM(SDL_GameControllerMappingForGUID, pFEV)   // SDL_GameControllerMappingForGUID structure
// SDL_GameControllerMappingForIndex
GO(SDL_GameControllerName, pFp)
GO(SDL_GameControllerNameForIndex, pFi)
// SDL_GameControllerNumMappings
GO(SDL_GameControllerOpen, pFi)
GO(SDL_GameControllerRumble, iFpWWu)
GO(SDL_GameControllerUpdate, vFv)
// SDL_GetAssertionHandler
// SDL_GetAssertionReport
GO(SDL_GetAudioDeviceName, pFii)
// SDL_GetAudioDeviceStatus
GO(SDL_GetAudioDriver, pFi)
// SDL_GetAudioStatus
GOM(SDL_GetBasePath, pFE)
GO(SDL_GetClipboardText, pFv)
// SDL_GetClipRect
GO(SDL_GetClosestDisplayMode, pFipp)
GO(SDL_GetColorKey, iFpp)
// SDL_GetCPUCacheLineSize
GO(SDL_GetCPUCount, iFv)
GO(SDL_GetCurrentAudioDriver, pFv)
GO(SDL_GetCurrentDisplayMode, iFip)
GO(SDL_GetCurrentVideoDriver, pFv)
// SDL_GetCursor
// SDL_GetDefaultAssertionHandler
GO(SDL_GetDefaultCursor, pFv)
GO(SDL_GetDesktopDisplayMode, iFip)
GO(SDL_GetDisplayBounds, iFip)
// SDL_GetDisplayDPI
GO(SDL_GetDisplayMode, iFiip)
GO(SDL_GetDisplayName, pFi)
// SDL_GetDisplayOrientation
GO(SDL_GetDisplayUsableBounds, iFip)
GO(SDL_getenv, pFp)
GO(SDL_GetError, pFv)
// SDL_GetEventFilter
GO(SDL_GetGlobalMouseState, uFpp)
// SDL_GetGrabbedWindow
GO(SDL_GetHint, pFp)
// SDL_GetHintBoolean
GO(SDL_GetKeyboardFocus, pFv)
GO(SDL_GetKeyboardState, pFp)
GO(SDL_GetKeyFromName, pFp)
GO(SDL_GetKeyFromScancode, uFu)
GO(SDL_GetKeyName, pFu)
// SDL_GetMemoryFunctions
GO(SDL_GetModState, pFv)
GO(SDL_GetMouseFocus, pFv)
GO(SDL_GetMouseState, uFpp)
// SDL_GetNumAllocations
GO(SDL_GetNumAudioDevices, iFi)
GO(SDL_GetNumAudioDrivers, iFv)
GO(SDL_GetNumDisplayModes, iFi)
GO(SDL_GetNumRenderDrivers, iFv)
GO(SDL_GetNumTouchDevices, iFv)
GO(SDL_GetNumTouchFingers, iFu)
GO(SDL_GetNumVideoDisplays, iFv)
GO(SDL_GetNumVideoDrivers, iFv)
GO(SDL_GetPerformanceCounter, UFv)
GO(SDL_GetPerformanceFrequency, UFv)
// SDL_GetPixelFormatName
GO(SDL_GetPlatform, pFv)
GO(SDL_GetPowerInfo, iFpp)
GO(SDL_GetPrefPath, pFpp)
// SDL_GetQueuedAudioSize
GO(SDL_GetRelativeMouseMode, iFv)
GO(SDL_GetRelativeMouseState, uFpp)
GO(SDL_GetRenderDrawBlendMode, iFpp)
// SDL_GetRenderDrawColor
GO(SDL_GetRenderDriverInfo, iFip)
// SDL_GetRenderer
GO(SDL_GetRendererInfo, iFpp)
GO(SDL_GetRendererOutputSize, iFppp)
// SDL_GetRenderTarget
// SDL_GetRevision
// SDL_GetRevisionNumber
GO(SDL_GetRGB, vFupppp)
GO(SDL_GetRGBA, vFuppppp)
GO(SDL_GetScancodeFromKey, uFu)
// SDL_GetScancodeFromName
GO(SDL_GetScancodeName, pFu)
// SDL_GetShapedWindowMode
GO(SDL_GetSurfaceAlphaMod, iFpp)
GO(SDL_GetSurfaceBlendMode, iFpp)
// SDL_GetSurfaceColorMod
GO(SDL_GetSystemRAM, iFv)
// SDL_GetTextureAlphaMod
GO(SDL_GetTextureBlendMode, iFpp)
// SDL_GetTextureColorMod
GO(SDL_GetThreadID, uFp)
// SDL_GetThreadName
GO(SDL_GetTicks, uFv)
GO(SDL_GetTouchDevice, uFi)
// SDL_GetTouchDeviceType
GO(SDL_GetTouchFinger, pFui)
GO(SDL_GetVersion, vFp)
GO(SDL_GetVideoDriver, pFi)
// SDL_GetWindowBordersSize
GO(SDL_GetWindowBrightness, fFp)
GO(SDL_GetWindowData, pFpp)
GO(SDL_GetWindowDisplayIndex, iFp)
GO(SDL_GetWindowDisplayMode, iFpp)
GO(SDL_GetWindowFlags, uFp)
GO(SDL_GetWindowFromID, pFu)
GO(SDL_GetWindowGammaRamp, iFpppp)
GO(SDL_GetWindowGrab, iFp)
GO(SDL_GetWindowID, uFp)
GO(SDL_GetWindowMaximumSize, vFppp)
// SDL_GetWindowMinimumSize
// SDL_GetWindowOpacity
GO(SDL_GetWindowPixelFormat, uFp)
GO(SDL_GetWindowPosition, vFppp)
GO(SDL_GetWindowSize, vFppp)
GO(SDL_GetWindowSurface, pFp)
GO(SDL_GetWindowTitle, pFp)
GO(SDL_GetWindowWMInfo, iFpp)
// SDL_GetYUVConversionMode
// SDL_GetYUVConversionModeForResolution
// SDL_GL_BindTexture
GO(SDL_GL_CreateContext, pFp)
GO(SDL_GL_DeleteContext, vFp)
GO(SDL_GL_ExtensionSupported, iFp)
GO(SDL_GL_GetAttribute, iFup)
GO(SDL_GL_GetCurrentContext, pFv)
GO(SDL_GL_GetCurrentWindow, pFv)
GO(SDL_GL_GetDrawableSize, vFppp)
GOM(SDL_GL_GetProcAddress, pFEp)
GO(SDL_GL_GetSwapInterval, iFv)
GO(SDL_GL_LoadLibrary, iFp)
GO(SDL_GL_MakeCurrent, iFpp)
// SDL_GL_ResetAttributes
GO(SDL_GL_SetAttribute, iFui)
GO(SDL_GL_SetSwapInterval, iFi)
GO(SDL_GL_SwapWindow, vFp)
// SDL_GL_UnbindTexture
GO(SDL_GL_UnloadLibrary, vFv)
GO(SDL_HapticClose, vFp)
GO(SDL_HapticDestroyEffect, vFpi)
GO(SDL_HapticEffectSupported, iFpp)
// SDL_HapticGetEffectStatus
// SDL_HapticIndex
// SDL_HapticName
GO(SDL_HapticNewEffect, iFpp)
// SDL_HapticNumAxes
// SDL_HapticNumEffects
// SDL_HapticNumEffectsPlaying
GO(SDL_HapticOpen, pFi)
// SDL_HapticOpened
GO(SDL_HapticOpenFromJoystick, pFp)
// SDL_HapticOpenFromMouse
// SDL_HapticPause
GO(SDL_HapticQuery, uFp)
GO(SDL_HapticRumbleInit, iFp)
GO(SDL_HapticRumblePlay, iFpfu)
GO(SDL_HapticRumbleStop, iFp)
GO(SDL_HapticRumbleSupported, iFp)
GO(SDL_HapticRunEffect, iFpiu)
// SDL_HapticSetAutocenter
// SDL_HapticSetGain
// SDL_HapticStopAll
GO(SDL_HapticStopEffect, iFpi)
// SDL_HapticUnpause
GO(SDL_HapticUpdateEffect, iFpip)
GOM(SDL_Has3DNow, iFv)
GOM(SDL_HasAltiVec, iFv)
GOM(SDL_HasAVX, iFv)
GOM(SDL_HasAVX2, iFv)
GOM(SDL_HasAVX512F, iFv)
GO(SDL_HasClipboardText, iFv)
GO(SDL_HasColorKey, iFv)
GO(SDL_HasEvent, iFv)
GO(SDL_HasEvents, iFv)
GO(SDL_HasIntersection, iFv)
GOM(SDL_HasMMX, iFv)
GOM(SDL_HasNEON, iFv)
GOM(SDL_HasRDTSC, iFv)
GO(SDL_HasScreenKeyboardSupport, iFv)
GOM(SDL_HasSSE, iFv)
GOM(SDL_HasSSE2, iFv)
GOM(SDL_HasSSE3, iFv)
GOM(SDL_HasSSE41, iFv)
GOM(SDL_HasSSE42, iFv)
GO(SDL_HideWindow, vFp)
// SDL_iconv
// SDL_iconv_close
// SDL_iconv_open
GO(SDL_iconv_string, pFpppu)
GO(SDL_Init, iFu)
GO(SDL_InitSubSystem, iFu)
GO(SDL_IntersectRect, iFppp)
// SDL_IntersectRectAndLine
// SDL_isdigit
GO(SDL_IsGameController, iFi)
GO(SDL_IsScreenKeyboardShown, iFp)
GO(SDL_IsScreenSaverEnabled, iFv)
// SDL_IsShapedWindow
GO(SDL_isspace, iFi)
// SDL_IsTablet
GO(SDL_IsTextInputActive, iFv)
// SDL_itoa
GO(SDL_JoystickClose, vFp)
GO(SDL_JoystickCurrentPowerLevel, iFp)
GO(SDL_JoystickEventState, iFi)
// SDL_JoystickFromInstanceID
GO(SDL_JoystickGetAttached, iFp)
GO(SDL_JoystickGetAxis, iFpi)
// SDL_JoystickGetAxisInitialState
// SDL_JoystickGetBall
GO(SDL_JoystickGetButton, CFpi)
GOS(SDL_JoystickGetDeviceGUID, pFEpi)  // return a struct that is "uint8_t data[16]" => there is hidden 1st arg with address of return buffer, same for ARM
GO(SDL_JoystickGetDeviceInstanceID, iFi)
// SDL_JoystickGetDevicePlayerIndex
GO(SDL_JoystickGetDeviceProduct, WFi)
GO(SDL_JoystickGetDeviceProductVersion, WFi)
// SDL_JoystickGetDeviceType
GO(SDL_JoystickGetDeviceVendor, WFi)
GOS(SDL_JoystickGetGUID, pFEpp)
GOS(SDL_JoystickGetGUIDFromString, pFEpp)
GO(SDL_JoystickGetGUIDString, vFupi)
GO(SDL_JoystickGetHat, CFpi)
GO(SDL_JoystickGetPlayerIndex, iFp)
// SDL_JoystickGetProduct
// SDL_JoystickGetProductVersion
// SDL_JoystickGetType
// SDL_JoystickGetVendor
GO(SDL_JoystickInstanceID, iFp)
GO(SDL_JoystickIsHaptic, iFp)
GO(SDL_JoystickName, pFp)
GO(SDL_JoystickNameForIndex, pFi)
GO(SDL_JoystickNumAxes, iFp)
GO(SDL_JoystickNumBalls, iFp)
GO(SDL_JoystickNumButtons, iFp)
GO(SDL_JoystickNumHats, iFp)
GO(SDL_JoystickOpen, pFi)
GO(SDL_JoystickRumble, iFpWWu)
GO(SDL_JoystickUpdate, vFv)
// SDL_LinuxSetThreadPriority
// SDL_lltoa
GOM(SDL_LoadBMP_RW, pFEpi)
// SDL_LoadDollarTemplates
GOM(SDL_LoadFile_RW, pFEppi)
GOM(SDL_LoadFunction, pFEpp)
GOM(SDL_LoadObject, pFEp)
GOM(SDL_LoadWAV_RW, pFEpippp)
GO(SDL_LockAudio, vFv)
GO(SDL_LockAudioDevice, vFi)
GO(SDL_LockJoysticks, vFv)
GO(SDL_LockMutex, iFp)
GO(SDL_LockSurface, iFp)
// SDL_LockTexture
// SDL_log
GOM(SDL_Log, vFEpV)
// SDL_log10
// SDL_log10f
GOM(SDL_LogCritical, vFEipV)
GOM(SDL_LogDebug, vFEipV)
GOM(SDL_LogError, vFEipV)
// SDL_logf
// SDL_LogGetOutputFunction
// SDL_LogGetPriority
GOM(SDL_LogInfo, vFEipV)
GO2(SDL_LogMessage, vFiupV, SDL_LogMessageV)
GO(SDL_LogMessageV, vFiupV)
// SDL_LogResetPriorities
GO(SDL_LogSetAllPriority, vFu)
GOM(SDL_LogSetOutputFunction, vFEpp)
GO(SDL_LogSetPriority, vFiu)
GOM(SDL_LogVerbose, vFEipV)
GOM(SDL_LogWarn, vFEipV)
// SDL_LowerBlit
// SDL_LowerBlitScaled
// SDL_ltoa
GO(SDL_malloc, pFu)
GO(SDL_MapRGB, uFpCCC)
GO(SDL_MapRGBA, uFpCCCC)
// SDL_MasksToPixelFormatEnum
GO(SDL_MaximizeWindow, vFp)
GO(SDL_memcmp, iFppu)
GO(SDL_memcpy, pFppu)
GO(SDL_memmove, pFppu)
// SDL_MemoryBarrierAcquireFunction
// SDL_MemoryBarrierReleaseFunction
GO(SDL_memset, pFpiu)
GO(SDL_MinimizeWindow, vFp)
GO(SDL_MixAudio, vFppui)
GO(SDL_MixAudioFormat, vFppWui)
// SDL_MouseIsHaptic
// SDL_NewAudioStream
GO(SDL_NumHaptics, iFv)
GO(SDL_NumJoysticks, iFv)
// SDL_NumSensors
GOM(SDL_OpenAudio, iFEpp)
GOM(SDL_OpenAudioDevice, iFEpippi)
GO(SDL_PauseAudio, vFi)
GO(SDL_PauseAudioDevice, vFii)
GO(SDL_PeepEvents, iFpiiuu)
GO(SDL_PixelFormatEnumToMasks, iFuppppp)
GO(SDL_PollEvent, iFp)
GO(SDL_pow, dFdd)
GO(SDL_powf, fFff)
GO(SDL_PumpEvents, vFv)
GO(SDL_PushEvent, iFp)
// SDL_qsort
GO(SDL_QueryTexture, iFppppp)
// SDL_QueueAudio
GO(SDL_Quit, vFv)
GO(SDL_QuitSubSystem, vFu)
GO(SDL_RaiseWindow, vFp)
GOM(SDL_ReadBE16, uFEp)
GOM(SDL_ReadBE32, uFEp)
GOM(SDL_ReadBE64, UFEp)
GOM(SDL_ReadLE16, uFEp)
GOM(SDL_ReadLE32, uFEp)
GOM(SDL_ReadLE64, UFEp)
GOM(SDL_ReadU8, uFEp)
GO(SDL_realloc, pFpu)
// SDL_RecordGesture
GO(SDL_RegisterEvents, uFi)
GOM(SDL_RemoveTimer, iFEp)
GO(SDL_RenderClear, iFp)
GO(SDL_RenderCopy, iFpppp)
// SDL_RenderCopyEx
// SDL_RenderCopyExF
// SDL_RenderCopyF
GO(SDL_RenderDrawLine, iFpiiii)
// SDL_RenderDrawLineF
// SDL_RenderDrawLines
// SDL_RenderDrawLinesF
// SDL_RenderDrawPoint
// SDL_RenderDrawPointF
// SDL_RenderDrawPoints
// SDL_RenderDrawPointsF
// SDL_RenderDrawRect
// SDL_RenderDrawRectF
// SDL_RenderDrawRects
// SDL_RenderDrawRectsF
GO(SDL_RenderFillRect, iFpp)
// SDL_RenderFillRectF
// SDL_RenderFillRects
// SDL_RenderFillRectsF
// SDL_RenderFlush
GO(SDL_RenderGetClipRect, vFpp)
// SDL_RenderGetIntegerScale
// SDL_RenderGetLogicalSize
// SDL_RenderGetMetalCommandEncoder
// SDL_RenderGetMetalLayer
// SDL_RenderGetScale
// SDL_RenderGetViewport
// SDL_RenderIsClipEnabled
GO(SDL_RenderPresent, vFp)
// SDL_RenderReadPixels
GO(SDL_RenderSetClipRect, iFpp)
GO(SDL_RenderSetIntegerScale, iFpi)
GO(SDL_RenderSetLogicalSize, iFpii)
GO(SDL_RenderSetScale, iFpff)
GO(SDL_RenderSetViewport, iFpp)
// SDL_RenderTargetSupported
GO(SDL_ReportAssertion, uFpppi)
// SDL_ResetAssertionReport
GO(SDL_RestoreWindow, vFp)
GOM(SDL_RWFromConstMem, pFEpi)
GOM(SDL_RWFromFP, pFEpi)
GOM(SDL_RWFromFile, pFEpp)
GOM(SDL_RWFromMem, pFEpi)
// SDL_SaveAllDollarTemplates
GOM(SDL_SaveBMP_RW, iFEppi)
// SDL_SaveDollarTemplate
// SDL_scalbn
// SDL_scalbnf
GO(SDL_SemPost, iFp)
GO(SDL_SemTryWait, iFp)
// SDL_SemValue
GO(SDL_SemWait, iFp)
GO(SDL_SemWaitTimeout, iFpu)
// SDL_SensorClose
// SDL_SensorFromInstanceID
// SDL_SensorGetData
// SDL_SensorGetDeviceInstanceID
// SDL_SensorGetDeviceName
// SDL_SensorGetDeviceNonPortableType
// SDL_SensorGetDeviceType
// SDL_SensorGetInstanceID
// SDL_SensorGetName
// SDL_SensorGetNonPortableType
// SDL_SensorGetType
// SDL_SensorOpen
// SDL_SensorUpdate
// SDL_SetAssertionHandler
GO(SDL_SetClipboardText, iFp)
GO(SDL_SetClipRect, iFpp)
GO(SDL_SetColorKey, iFpiu)
GO(SDL_SetCursor, vFp)
GO(SDL_setenv, iFppi)
GO(SDL_SetError, iFppppp)    // it use ..., so putarbitrary  4 args
GOM(SDL_SetEventFilter, vFEpp)
GO(SDL_SetHint, iFpp)
GO(SDL_SetHintWithPriority, iFppi)
GO(SDL_SetMainReady, vFv)
// SDL_SetMemoryFunctions
GO(SDL_SetModState, vFi)
// SDL_SetPaletteColors
// SDL_SetPixelFormatPalette
GO(SDL_SetRelativeMouseMode, iFi)
GO(SDL_SetRenderDrawBlendMode, iFpu)
GO(SDL_SetRenderDrawColor, iFpCCCC)
GO(SDL_SetRenderTarget, iFpp)
GO(SDL_SetSurfaceAlphaMod, iFpC)
GO(SDL_SetSurfaceBlendMode, iFpu)
// SDL_SetSurfaceColorMod
GO(SDL_SetSurfacePalette, iFpp)
GO(SDL_SetSurfaceRLE, iFpi)
GO(SDL_SetTextInputRect, vFp)
GO(SDL_SetTextureAlphaMod, iFpC)
GO(SDL_SetTextureBlendMode, iFpu)
GO(SDL_SetTextureColorMod, iFpCCC)
GO(SDL_SetThreadPriority, iFu)
GO(SDL_SetWindowBordered, vFpi)
GO(SDL_SetWindowBrightness, iFpf)
GO(SDL_SetWindowData, pFppp)
GO(SDL_SetWindowDisplayMode, iFpp)
GO(SDL_SetWindowFullscreen, iFpu)
GO(SDL_SetWindowGammaRamp, iFpppp)
GO(SDL_SetWindowGrab, vFpi)
// SDL_SetWindowHitTest
GO(SDL_SetWindowIcon, vFpp)
// SDL_SetWindowInputFocus
GO(SDL_SetWindowMaximumSize, vFpii)
GO(SDL_SetWindowMinimumSize, vFpii)
// SDL_SetWindowModalFor
// SDL_SetWindowOpacity
GO(SDL_SetWindowPosition, vFpii)
GO(SDL_SetWindowResizable, vFpi)
GO(SDL_SetWindowShape, iFppp)
GO(SDL_SetWindowSize, vFpii)
GO(SDL_SetWindowTitle, vFpp)
// SDL_SetYUVConversionMode
GO(SDL_ShowCursor, iFi)
GO(SDL_ShowMessageBox, iFpp)
GO(SDL_ShowSimpleMessageBox, iFuppp)
GO(SDL_ShowWindow, vFp)
GO(SDL_sin, dFd)
GO(SDL_sinf, fFf)
GOM(SDL_snprintf, iFEpupVV)
GO(SDL_SoftStretch, iFpppp)
GO(SDL_sqrt, dFd)
GO(SDL_sqrtf, fFf)
GO2(SDL_sscanf, iFppV, SDL_vsscanf)
GO(SDL_StartTextInput, vFv)
GO(SDL_StopTextInput, vFv)
GO(SDL_strcasecmp, iFpp)
GO(SDL_strchr, pFpi)
GO(SDL_strcmp, iFpp)
GO(SDL_strdup, pFp)
GO(SDL_strlcat, uFppu)
GO(SDL_strlcpy, uFppu)
GO(SDL_strlen, uFp)
GO(SDL_strlwr, pFp)
GO(SDL_strncasecmp, iFppu)
GO(SDL_strncmp, iFppu)
GO(SDL_strrchr, pFpi)
GO(SDL_strrev, pFp)
GO(SDL_strstr, pFpp)
GO(SDL_strtod, dFpp)
GO(SDL_strtol, iFppi)
GO(SDL_strtoll, IFppi)
GO(SDL_strtoul, uFppi)
GO(SDL_strtoull, UFppi)
GO(SDL_strupr, pFp)
GO(SDL_tan, dFd)
GO(SDL_tanf, fFf)
GO(SDL_ThreadID, uFv)
GO(SDL_TLSCreate, uFv)
GO(SDL_TLSGet, pFu)
GOM(SDL_TLSSet, iFEupp)
// SDL_tolower
// SDL_toupper
GO(SDL_TryLockMutex, iFp)
GO(SDL_uitoa, pFupi)
GO(SDL_ulltoa, pFUpi)
GO(SDL_ultoa, pFupi)
GO(SDL_UnionRect, vFppp)
GOM(SDL_UnloadObject, vFEp)
GO(SDL_UnlockAudio, vFv)
GO(SDL_UnlockAudioDevice, vFi)
GO(SDL_UnlockJoysticks, vFv)
GO(SDL_UnlockMutex, iFp)
GO(SDL_UnlockSurface, vFp)
// SDL_UnlockTexture
GO(SDL_UpdateTexture, iFpppi)
GO(SDL_UpdateWindowSurface, iFp)
// SDL_UpdateWindowSurfaceRects
// SDL_UpdateYUVTexture
GO(SDL_UpperBlit, iFpppp)
GO(SDL_UpperBlitScaled, iFpppp)
GO(SDL_utf8strlcpy, uFppu)
// SDL_utf8strlen
GO(SDL_VideoInit, iFp)
GO(SDL_VideoQuit, vFv)
GOM(SDL_vsnprintf, iFEpupVV)
// SDL_vsscanf
// SDL_Vulkan_CreateSurface
// SDL_Vulkan_GetDrawableSize
// SDL_Vulkan_GetInstanceExtensions
// SDL_Vulkan_GetVkGetInstanceProcAddr
// SDL_Vulkan_LoadLibrary
// SDL_Vulkan_UnloadLibrary
GO(SDL_WaitEvent, iFp)
GO(SDL_WaitEventTimeout, iFpi)
GO(SDL_WaitThread, vFpp)
GO(SDL_WarpMouseGlobal, iFii)
GO(SDL_WarpMouseInWindow, vFpii)
GO(SDL_WasInit, uFu)
// SDL_wcscmp
// SDL_wcsdup
// SDL_wcslcat
// SDL_wcslcpy
GO(SDL_wcslen, uFp)
GOM(SDL_WriteBE16, uFEpW)
GOM(SDL_WriteBE32, uFEpu)
GOM(SDL_WriteBE64, uFEpU)
GOM(SDL_WriteLE16, uFEpW)
GOM(SDL_WriteLE32, uFEpu)
GOM(SDL_WriteLE64, uFEpU)
GOM(SDL_WriteU8, uFEpu)

GOM(SDL_RWseek, IFEpIi)
GOM(SDL_RWtell, IFEp)
GOM(SDL_RWread, uFEppuu)
GOM(SDL_RWwrite, uFEppuu)
GOM(SDL_RWclose, iFEp)

GO2(SDL_mutexP, iFp, SDL_LockMutex)
GO2(SDL_mutexV, iFp, SDL_UnlockMutex)

GO(SDL_doesntexist, IFpIi)

