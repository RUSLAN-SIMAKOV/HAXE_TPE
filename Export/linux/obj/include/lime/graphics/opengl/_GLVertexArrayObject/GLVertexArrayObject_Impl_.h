// Generated by Haxe 4.1.1
#ifndef INCLUDED_lime_graphics_opengl__GLVertexArrayObject_GLVertexArrayObject_Impl_
#define INCLUDED_lime_graphics_opengl__GLVertexArrayObject_GLVertexArrayObject_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLVertexArrayObject,GLVertexArrayObject_Impl_)

namespace lime{
namespace graphics{
namespace opengl{
namespace _GLVertexArrayObject{


class HXCPP_CLASS_ATTRIBUTES GLVertexArrayObject_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLVertexArrayObject_Impl__obj OBJ_;
		GLVertexArrayObject_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4fa2d9b0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLVertexArrayObject.GLVertexArrayObject_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl._GLVertexArrayObject.GLVertexArrayObject_Impl_"); }

		inline static ::hx::ObjectPtr< GLVertexArrayObject_Impl__obj > __new() {
			::hx::ObjectPtr< GLVertexArrayObject_Impl__obj > __this = new GLVertexArrayObject_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GLVertexArrayObject_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GLVertexArrayObject_Impl__obj *__this = (GLVertexArrayObject_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLVertexArrayObject_Impl__obj), false, "lime.graphics.opengl._GLVertexArrayObject.GLVertexArrayObject_Impl_"));
			*(void **)__this = GLVertexArrayObject_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLVertexArrayObject_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLVertexArrayObject_Impl_",2f,b2,16,89); }

		static  ::lime::graphics::opengl::GLObject fromInt(int id);
		static ::Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLVertexArrayObject

#endif /* INCLUDED_lime_graphics_opengl__GLVertexArrayObject_GLVertexArrayObject_Impl_ */ 
