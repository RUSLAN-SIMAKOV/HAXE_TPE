// Generated by Haxe 4.1.1
#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_compressed_ATC_texture
#define INCLUDED_lime_graphics_opengl_ext_AMD_compressed_ATC_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7a228448205ba8a3_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,AMD_compressed_ATC_texture)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES AMD_compressed_ATC_texture_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMD_compressed_ATC_texture_obj OBJ_;
		AMD_compressed_ATC_texture_obj();

	public:
		enum { _hx_ClassId = 0x0b199aa3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.AMD_compressed_ATC_texture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.AMD_compressed_ATC_texture"); }

		inline static ::hx::ObjectPtr< AMD_compressed_ATC_texture_obj > __new() {
			::hx::ObjectPtr< AMD_compressed_ATC_texture_obj > __this = new AMD_compressed_ATC_texture_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AMD_compressed_ATC_texture_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AMD_compressed_ATC_texture_obj *__this = (AMD_compressed_ATC_texture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMD_compressed_ATC_texture_obj), false, "lime.graphics.opengl.ext.AMD_compressed_ATC_texture"));
			*(void **)__this = AMD_compressed_ATC_texture_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7a228448205ba8a3_4_new)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::AMD_compressed_ATC_texture)(__this) )->ATC_RGBA_INTERPOLATED_ALPHA_AMD = 34798;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::AMD_compressed_ATC_texture)(__this) )->ATC_RGBA_EXPLICIT_ALPHA_AMD = 35987;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::AMD_compressed_ATC_texture)(__this) )->ATC_RGB_AMD = 35986;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMD_compressed_ATC_texture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AMD_compressed_ATC_texture",15,0b,6c,91); }

		int ATC_RGB_AMD;
		int ATC_RGBA_EXPLICIT_ALPHA_AMD;
		int ATC_RGBA_INTERPOLATED_ALPHA_AMD;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_AMD_compressed_ATC_texture */ 
