// Generated by Haxe 4.1.1
#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#define INCLUDED_openfl__internal_text_TextFormatRange

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,text,TextFormatRange)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace openfl{
namespace _internal{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextFormatRange_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextFormatRange_obj OBJ_;
		TextFormatRange_obj();

	public:
		enum { _hx_ClassId = 0x3d606f28 };

		void __construct( ::openfl::text::TextFormat format,int start,int end);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.text.TextFormatRange")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl._internal.text.TextFormatRange"); }
		static ::hx::ObjectPtr< TextFormatRange_obj > __new( ::openfl::text::TextFormat format,int start,int end);
		static ::hx::ObjectPtr< TextFormatRange_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::text::TextFormat format,int start,int end);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextFormatRange_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFormatRange",39,67,56,af); }

		int end;
		 ::openfl::text::TextFormat format;
		int start;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace text

#endif /* INCLUDED_openfl__internal_text_TextFormatRange */ 
