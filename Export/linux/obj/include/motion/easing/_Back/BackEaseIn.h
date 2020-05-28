// Generated by Haxe 4.1.1
#ifndef INCLUDED_motion_easing__Back_BackEaseIn
#define INCLUDED_motion_easing__Back_BackEaseIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS3(motion,easing,_Back,BackEaseIn)

namespace motion{
namespace easing{
namespace _Back{


class HXCPP_CLASS_ATTRIBUTES BackEaseIn_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BackEaseIn_obj OBJ_;
		BackEaseIn_obj();

	public:
		enum { _hx_ClassId = 0x0bb98a7f };

		void __construct(Float s);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing._Back.BackEaseIn")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing._Back.BackEaseIn"); }
		static ::hx::ObjectPtr< BackEaseIn_obj > __new(Float s);
		static ::hx::ObjectPtr< BackEaseIn_obj > __alloc(::hx::Ctx *_hx_ctx,Float s);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BackEaseIn_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BackEaseIn",1a,0d,75,bd); }

		Float s;
		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing
} // end namespace _Back

#endif /* INCLUDED_motion_easing__Back_BackEaseIn */ 