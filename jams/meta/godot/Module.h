#pragma once

#if !defined MUD_MODULES || defined MUD_TYPE_LIB
#include <refl/Module.h>
#endif

#ifndef MUD_MODULES
#include <meta/infra/Module.h>
#include <meta/jobs/Module.h>
#include <meta/type/Module.h>
#include <meta/tree/Module.h>
#include <meta/pool/Module.h>
#include <meta/refl/Module.h>
#include <meta/ecs/Module.h>
#include <meta/srlz/Module.h>
#include <meta/math/Module.h>
#include <meta/geom/Module.h>
#include <meta/noise/Module.h>
#include <meta/wfc/Module.h>
#include <meta/fract/Module.h>
#include <meta/lang/Module.h>
#include <meta/ctx/Module.h>
#include <meta/ui/Module.h>
#include <meta/uio/Module.h>
#include <meta/bgfx/Module.h>
#include <meta/gfx/Module.h>
#include <meta/gfx-pbr/Module.h>
#include <meta/gfx-obj/Module.h>
#include <meta/gltf/Module.h>
#include <meta/gfx-gltf/Module.h>
#include <meta/gfx-ui/Module.h>
#include <meta/gfx-edit/Module.h>
#include <meta/tool/Module.h>
#include <meta/wfc-gfx/Module.h>
#include <meta/frame/Module.h>
#include <meta/util/Module.h>
#include <meta/core/Module.h>
#include <meta/visu/Module.h>
#include <meta/edit/Module.h>
#include <meta/block/Module.h>
#include <meta/shell/Module.h>
#endif

#include <godot/Forward.h>
#include <godot/Types.h>
#include <godot/Api.h>

#include <meta/godot/Convert.h>

#ifndef _GODOT_REFL_EXPORT
#define _GODOT_REFL_EXPORT MUD_IMPORT
#endif

export_ class _GODOT_REFL_EXPORT _godot : public Module
{
private:
	_godot();
	
public:
	static _godot& m() { static _godot instance; return instance; }
};

#ifdef _GODOT_MODULE
extern "C"
_GODOT_REFL_EXPORT Module& getModule();
#endif
