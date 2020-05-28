// Generated by Haxe 4.1.1
#ifndef INCLUDED_motion_easing__Quad_QuadEaseOut
#define INCLUDED_motion_easing__Quad_QuadEaseOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS3(motion,easing,_Quad,QuadEaseOut)

namespace motion{
namespace easing{
namespace _Quad{


class HXCPP_CLASS_ATTRIBUTES QuadEaseOut_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QuadEaseOut_obj OBJ_;
		QuadEaseOut_obj();

	public:
		enum { _hx_ClassId = 0x5291eb74 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing._Quad.QuadEaseOut")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing._Quad.QuadEaseOut"); }
		static ::hx::ObjectPtr< QuadEaseOut_obj > __new();
		static ::hx::ObjectPtr< QuadEaseOut_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QuadEaseOut_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("QuadEaseOut",19,b3,90,65); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing
} // end namespace _Quad

#endif /* INCLUDED_motion_easing__Quad_QuadEaseOut */ 
