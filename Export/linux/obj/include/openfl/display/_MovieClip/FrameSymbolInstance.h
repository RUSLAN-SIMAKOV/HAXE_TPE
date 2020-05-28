// Generated by Haxe 4.1.1
#ifndef INCLUDED_openfl_display__MovieClip_FrameSymbolInstance
#define INCLUDED_openfl_display__MovieClip_FrameSymbolInstance

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_MovieClip,FrameSymbolInstance)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _MovieClip{


class HXCPP_CLASS_ATTRIBUTES FrameSymbolInstance_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FrameSymbolInstance_obj OBJ_;
		FrameSymbolInstance_obj();

	public:
		enum { _hx_ClassId = 0x7207c88b };

		void __construct(int initFrame,int initFrameObjectID,int characterID,int depth, ::openfl::display::DisplayObject displayObject,int clipDepth);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display._MovieClip.FrameSymbolInstance")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display._MovieClip.FrameSymbolInstance"); }
		static ::hx::ObjectPtr< FrameSymbolInstance_obj > __new(int initFrame,int initFrameObjectID,int characterID,int depth, ::openfl::display::DisplayObject displayObject,int clipDepth);
		static ::hx::ObjectPtr< FrameSymbolInstance_obj > __alloc(::hx::Ctx *_hx_ctx,int initFrame,int initFrameObjectID,int characterID,int depth, ::openfl::display::DisplayObject displayObject,int clipDepth);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FrameSymbolInstance_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FrameSymbolInstance",fa,3b,c7,c2); }

		int characterID;
		int clipDepth;
		int depth;
		 ::openfl::display::DisplayObject displayObject;
		int initFrame;
		int initFrameObjectID;
};

} // end namespace openfl
} // end namespace display
} // end namespace _MovieClip

#endif /* INCLUDED_openfl_display__MovieClip_FrameSymbolInstance */ 
