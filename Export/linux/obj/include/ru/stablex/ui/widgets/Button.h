// Generated by Haxe 4.1.1
#ifndef INCLUDED_ru_stablex_ui_widgets_Button
#define INCLUDED_ru_stablex_ui_widgets_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_ui_widgets_Text
#include <ru/stablex/ui/widgets/Text.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS4(ru,stablex,ui,skins,Skin)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Bmp)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Box)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Button)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Text)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)

namespace ru{
namespace stablex{
namespace ui{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Button_obj : public  ::ru::stablex::ui::widgets::Text_obj
{
	public:
		typedef  ::ru::stablex::ui::widgets::Text_obj super;
		typedef Button_obj OBJ_;
		Button_obj();

	public:
		enum { _hx_ClassId = 0x12698a7b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.widgets.Button")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ru.stablex.ui.widgets.Button"); }
		static ::hx::ObjectPtr< Button_obj > __new();
		static ::hx::ObjectPtr< Button_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,Button_obj *_hx_obj);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Button",12,d6,74,0e); }

		static void _onHover( ::openfl::events::MouseEvent e);
		static ::Dynamic _onHover_dyn();

		static void _onHout( ::openfl::events::MouseEvent e);
		static ::Dynamic _onHout_dyn();

		static void _onPress( ::openfl::events::MouseEvent e);
		static ::Dynamic _onPress_dyn();

		static void _onRelease( ::openfl::events::MouseEvent e);
		static ::Dynamic _onRelease_dyn();

		bool pressed;
		bool hovered;
		bool disabled;
		int disabledFormatColor;
		bool _mouseChildrenBeforeDisabled;
		int _formatColorBeforeDisabled;
		 ::ru::stablex::ui::widgets::Bmp _ico;
		 ::ru::stablex::ui::widgets::Bmp _icoHovered;
		 ::ru::stablex::ui::widgets::Bmp _icoPressed;
		 ::ru::stablex::ui::widgets::Bmp _icoDisabled;
		bool icoBeforeLabel;
		::String skinHoveredName;
		 ::ru::stablex::ui::skins::Skin skinHovered;
		::String skinPressedName;
		 ::ru::stablex::ui::skins::Skin skinPressed;
		::String skinDisabledName;
		 ::ru::stablex::ui::skins::Skin skinDisabled;
		bool apart;
		::Dynamic onPress;
		inline ::Dynamic &onPress_dyn() {return onPress; }

		::Dynamic onRelease;
		inline ::Dynamic &onRelease_dyn() {return onRelease; }

		::Dynamic onHover;
		inline ::Dynamic &onHover_dyn() {return onHover; }

		::Dynamic onHout;
		inline ::Dynamic &onHout_dyn() {return onHout; }

		bool set_disabled(bool disabled);
		::Dynamic set_disabled_dyn();

		bool set_icoBeforeLabel(bool ibl);
		::Dynamic set_icoBeforeLabel_dyn();

		 ::ru::stablex::ui::widgets::Bmp get_ico();
		::Dynamic get_ico_dyn();

		 ::ru::stablex::ui::widgets::Bmp set_ico( ::ru::stablex::ui::widgets::Bmp ico);
		::Dynamic set_ico_dyn();

		 ::ru::stablex::ui::widgets::Bmp get_icoHovered();
		::Dynamic get_icoHovered_dyn();

		 ::ru::stablex::ui::widgets::Bmp set_icoHovered( ::ru::stablex::ui::widgets::Bmp ico);
		::Dynamic set_icoHovered_dyn();

		 ::ru::stablex::ui::widgets::Bmp get_icoPressed();
		::Dynamic get_icoPressed_dyn();

		 ::ru::stablex::ui::widgets::Bmp set_icoPressed( ::ru::stablex::ui::widgets::Bmp ico);
		::Dynamic set_icoPressed_dyn();

		 ::ru::stablex::ui::widgets::Bmp get_icoDisabled();
		::Dynamic get_icoDisabled_dyn();

		 ::ru::stablex::ui::widgets::Bmp set_icoDisabled( ::ru::stablex::ui::widgets::Bmp ico);
		::Dynamic set_icoDisabled_dyn();

		::String set_skinHoveredName(::String s);
		::Dynamic set_skinHoveredName_dyn();

		::String set_skinPressedName(::String s);
		::Dynamic set_skinPressedName_dyn();

		::String set_skinDisabledName(::String s);
		::Dynamic set_skinDisabledName_dyn();

		void _addIco( ::ru::stablex::ui::widgets::Bmp ico);
		::Dynamic _addIco_dyn();

		void _switchIco( ::ru::stablex::ui::widgets::Bmp ico);
		::Dynamic _switchIco_dyn();

		void _switchSkin( ::ru::stablex::ui::skins::Skin skin);
		::Dynamic _switchSkin_dyn();

		void refresh();

		void applySkin();

		void alignElements();

		void _moveApart();
		::Dynamic _moveApart_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets

#endif /* INCLUDED_ru_stablex_ui_widgets_Button */ 