// Generated by Haxe 4.1.1
#ifndef INCLUDED_lime_graphics_opengl__GLSampler_GLSampler_Impl_
#define INCLUDED_lime_graphics_opengl__GLSampler_GLSampler_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLSampler,GLSampler_Impl_)

namespace lime{
namespace graphics{
namespace opengl{
namespace _GLSampler{


class HXCPP_CLASS_ATTRIBUTES GLSampler_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLSampler_Impl__obj OBJ_;
		GLSampler_Impl__obj();

	public:
		enum { _hx_ClassId = 0x32a68d28 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLSampler.GLSampler_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl._GLSampler.GLSampler_Impl_"); }

		inline static ::hx::ObjectPtr< GLSampler_Impl__obj > __new() {
			::hx::ObjectPtr< GLSampler_Impl__obj > __this = new GLSampler_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GLSampler_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GLSampler_Impl__obj *__this = (GLSampler_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLSampler_Impl__obj), false, "lime.graphics.opengl._GLSampler.GLSampler_Impl_"));
			*(void **)__this = GLSampler_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLSampler_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLSampler_Impl_",43,d6,4e,03); }

		static  ::lime::graphics::opengl::GLObject fromInt(int id);
		static ::Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLSampler

#endif /* INCLUDED_lime_graphics_opengl__GLSampler_GLSampler_Impl_ */ 
