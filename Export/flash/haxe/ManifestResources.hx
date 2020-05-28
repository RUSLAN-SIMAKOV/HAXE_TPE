package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_opensans_light_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_opensans_extrabolditalic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_opensans_bold_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_opensans_bolditalic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_opensans_extrabold_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_opensans_lightitalic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_opensans_semibold_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_opensans_semibolditalic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_opensans_italic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_opensans_regular_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_opensans_light_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_opensans_extrabolditalic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_opensans_bold_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_opensans_bolditalic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_opensans_extrabold_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_opensans_lightitalic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_opensans_semibold_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_opensans_semibolditalic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_opensans_italic_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__fonts_opensans_regular_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:sizei11560y4:typey4:TEXTy9:classNamey33:__ASSET__assets_fonts_license_txty2:idy28:assets%2Ffonts%2FLICENSE.txtgoR0i101696R1y4:FONTR3y40:__ASSET__assets_fonts_opensans_light_ttfR5y35:assets%2Ffonts%2FOpenSans-Light.ttfgoR0i92772R1R7R3y50:__ASSET__assets_fonts_opensans_extrabolditalic_ttfR5y45:assets%2Ffonts%2FOpenSans-ExtraBoldItalic.ttfgoR0i104120R1R7R3y39:__ASSET__assets_fonts_opensans_bold_ttfR5y34:assets%2Ffonts%2FOpenSans-Bold.ttfgoR0i92628R1R7R3y45:__ASSET__assets_fonts_opensans_bolditalic_ttfR5y40:assets%2Ffonts%2FOpenSans-BoldItalic.ttfgoR0i102076R1R7R3y44:__ASSET__assets_fonts_opensans_extrabold_ttfR5y39:assets%2Ffonts%2FOpenSans-ExtraBold.ttfgoR0i92488R1R7R3y46:__ASSET__assets_fonts_opensans_lightitalic_ttfR5y41:assets%2Ffonts%2FOpenSans-LightItalic.ttfgoR0i100820R1R7R3y43:__ASSET__assets_fonts_opensans_semibold_ttfR5y38:assets%2Ffonts%2FOpenSans-SemiBold.ttfgoR0i92180R1R7R3y49:__ASSET__assets_fonts_opensans_semibolditalic_ttfR5y44:assets%2Ffonts%2FOpenSans-SemiBoldItalic.ttfgoR0i92240R1R7R3y41:__ASSET__assets_fonts_opensans_italic_ttfR5y36:assets%2Ffonts%2FOpenSans-Italic.ttfgoR0i96932R1R7R3y42:__ASSET__assets_fonts_opensans_regular_ttfR5y37:assets%2Ffonts%2FOpenSans-Regular.ttfgoR0i11560R1R2R3y26:__ASSET__fonts_license_txtR5y19:fonts%2FLICENSE.txtgoR0i101696R1R7R3y33:__ASSET__fonts_opensans_light_ttfR5y26:fonts%2FOpenSans-Light.ttfgoR0i92772R1R7R3y43:__ASSET__fonts_opensans_extrabolditalic_ttfR5y36:fonts%2FOpenSans-ExtraBoldItalic.ttfgoR0i104120R1R7R3y32:__ASSET__fonts_opensans_bold_ttfR5y25:fonts%2FOpenSans-Bold.ttfgoR0i92628R1R7R3y38:__ASSET__fonts_opensans_bolditalic_ttfR5y31:fonts%2FOpenSans-BoldItalic.ttfgoR0i102076R1R7R3y37:__ASSET__fonts_opensans_extrabold_ttfR5y30:fonts%2FOpenSans-ExtraBold.ttfgoR0i92488R1R7R3y39:__ASSET__fonts_opensans_lightitalic_ttfR5y32:fonts%2FOpenSans-LightItalic.ttfgoR0i100820R1R7R3y36:__ASSET__fonts_opensans_semibold_ttfR5y29:fonts%2FOpenSans-SemiBold.ttfgoR0i92180R1R7R3y42:__ASSET__fonts_opensans_semibolditalic_ttfR5y35:fonts%2FOpenSans-SemiBoldItalic.ttfgoR0i92240R1R7R3y34:__ASSET__fonts_opensans_italic_ttfR5y27:fonts%2FOpenSans-Italic.ttfgoR0i96932R1R7R3y35:__ASSET__fonts_opensans_regular_ttfR5y28:fonts%2FOpenSans-Regular.ttfgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_license_txt extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_light_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_extrabolditalic_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_bold_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_bolditalic_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_extrabold_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_lightitalic_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_semibold_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_semibolditalic_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_italic_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_regular_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_license_txt extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_opensans_light_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_opensans_extrabolditalic_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_opensans_bold_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_opensans_bolditalic_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_opensans_extrabold_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_opensans_lightitalic_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_opensans_semibold_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_opensans_semibolditalic_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_opensans_italic_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__fonts_opensans_regular_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends flash.utils.ByteArray { }


#elseif (desktop || cpp)

@:keep @:file("Assets/fonts/LICENSE.txt") @:noCompletion #if display private #end class __ASSET__assets_fonts_license_txt extends haxe.io.Bytes {}
@:keep @:font("Assets/fonts/OpenSans-Light.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_light_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-ExtraBoldItalic.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_extrabolditalic_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-Bold.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_bold_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-BoldItalic.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_bolditalic_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-ExtraBold.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_extrabold_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-LightItalic.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_lightitalic_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-SemiBold.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_semibold_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-SemiBoldItalic.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_semibolditalic_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-Italic.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_italic_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-Regular.ttf") @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_regular_ttf extends lime.text.Font {}
@:keep @:file("Assets/fonts/LICENSE.txt") @:noCompletion #if display private #end class __ASSET__fonts_license_txt extends haxe.io.Bytes {}
@:keep @:font("Assets/fonts/OpenSans-Light.ttf") @:noCompletion #if display private #end class __ASSET__fonts_opensans_light_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-ExtraBoldItalic.ttf") @:noCompletion #if display private #end class __ASSET__fonts_opensans_extrabolditalic_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-Bold.ttf") @:noCompletion #if display private #end class __ASSET__fonts_opensans_bold_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-BoldItalic.ttf") @:noCompletion #if display private #end class __ASSET__fonts_opensans_bolditalic_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-ExtraBold.ttf") @:noCompletion #if display private #end class __ASSET__fonts_opensans_extrabold_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-LightItalic.ttf") @:noCompletion #if display private #end class __ASSET__fonts_opensans_lightitalic_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-SemiBold.ttf") @:noCompletion #if display private #end class __ASSET__fonts_opensans_semibold_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-SemiBoldItalic.ttf") @:noCompletion #if display private #end class __ASSET__fonts_opensans_semibolditalic_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-Italic.ttf") @:noCompletion #if display private #end class __ASSET__fonts_opensans_italic_ttf extends lime.text.Font {}
@:keep @:font("Assets/fonts/OpenSans-Regular.ttf") @:noCompletion #if display private #end class __ASSET__fonts_opensans_regular_ttf extends lime.text.Font {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__assets_fonts_opensans_light_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_light_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/OpenSans-Light.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Light"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_opensans_extrabolditalic_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_extrabolditalic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/OpenSans-ExtraBoldItalic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans ExtraBold Italic"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_opensans_bold_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_bold_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/OpenSans-Bold.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Bold"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_opensans_bolditalic_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_bolditalic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/OpenSans-BoldItalic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Bold Italic"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_opensans_extrabold_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_extrabold_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/OpenSans-ExtraBold.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans ExtraBold"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_opensans_lightitalic_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_lightitalic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/OpenSans-LightItalic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Light Italic"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_opensans_semibold_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_semibold_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/OpenSans-SemiBold.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans SemiBold"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_opensans_semibolditalic_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_semibolditalic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/OpenSans-SemiBoldItalic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans SemiBold Italic"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_opensans_italic_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_italic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/OpenSans-Italic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Italic"; super (); }}
@:keep @:expose('__ASSET__assets_fonts_opensans_regular_ttf') @:noCompletion #if display private #end class __ASSET__assets_fonts_opensans_regular_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/fonts/OpenSans-Regular.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Regular"; super (); }}
@:keep @:expose('__ASSET__fonts_opensans_light_ttf') @:noCompletion #if display private #end class __ASSET__fonts_opensans_light_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/OpenSans-Light.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Light"; super (); }}
@:keep @:expose('__ASSET__fonts_opensans_extrabolditalic_ttf') @:noCompletion #if display private #end class __ASSET__fonts_opensans_extrabolditalic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/OpenSans-ExtraBoldItalic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans ExtraBold Italic"; super (); }}
@:keep @:expose('__ASSET__fonts_opensans_bold_ttf') @:noCompletion #if display private #end class __ASSET__fonts_opensans_bold_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/OpenSans-Bold.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Bold"; super (); }}
@:keep @:expose('__ASSET__fonts_opensans_bolditalic_ttf') @:noCompletion #if display private #end class __ASSET__fonts_opensans_bolditalic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/OpenSans-BoldItalic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Bold Italic"; super (); }}
@:keep @:expose('__ASSET__fonts_opensans_extrabold_ttf') @:noCompletion #if display private #end class __ASSET__fonts_opensans_extrabold_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/OpenSans-ExtraBold.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans ExtraBold"; super (); }}
@:keep @:expose('__ASSET__fonts_opensans_lightitalic_ttf') @:noCompletion #if display private #end class __ASSET__fonts_opensans_lightitalic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/OpenSans-LightItalic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Light Italic"; super (); }}
@:keep @:expose('__ASSET__fonts_opensans_semibold_ttf') @:noCompletion #if display private #end class __ASSET__fonts_opensans_semibold_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/OpenSans-SemiBold.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans SemiBold"; super (); }}
@:keep @:expose('__ASSET__fonts_opensans_semibolditalic_ttf') @:noCompletion #if display private #end class __ASSET__fonts_opensans_semibolditalic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/OpenSans-SemiBoldItalic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans SemiBold Italic"; super (); }}
@:keep @:expose('__ASSET__fonts_opensans_italic_ttf') @:noCompletion #if display private #end class __ASSET__fonts_opensans_italic_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/OpenSans-Italic.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Italic"; super (); }}
@:keep @:expose('__ASSET__fonts_opensans_regular_ttf') @:noCompletion #if display private #end class __ASSET__fonts_opensans_regular_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "fonts/OpenSans-Regular.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Open Sans Regular"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_light_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_light_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_light_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_extrabolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_extrabolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_extrabolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_bold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_bold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_bold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_bolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_bolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_bolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_extrabold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_extrabold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_extrabold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_lightitalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_lightitalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_lightitalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_semibold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_semibold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_semibold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_semibolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_semibolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_semibolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_italic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_italic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_italic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_regular_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_regular_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_regular_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_light_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_light_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_light_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_extrabolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_extrabolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_extrabolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_bold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_bold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_bold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_bolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_bolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_bolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_extrabold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_extrabold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_extrabold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_lightitalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_lightitalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_lightitalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_semibold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_semibold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_semibold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_semibolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_semibolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_semibolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_italic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_italic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_italic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_regular_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_regular_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_regular_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_light_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_light_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_light_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_extrabolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_extrabolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_extrabolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_bold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_bold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_bold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_bolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_bolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_bolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_extrabold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_extrabold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_extrabold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_lightitalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_lightitalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_lightitalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_semibold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_semibold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_semibold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_semibolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_semibolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_semibolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_italic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_italic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_italic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__assets_fonts_opensans_regular_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__assets_fonts_opensans_regular_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__assets_fonts_opensans_regular_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_light_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_light_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_light_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_extrabolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_extrabolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_extrabolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_bold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_bold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_bold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_bolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_bolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_bolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_extrabold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_extrabold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_extrabold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_lightitalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_lightitalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_lightitalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_semibold_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_semibold_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_semibold_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_semibolditalic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_semibolditalic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_semibolditalic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_italic_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_italic_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_italic_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__fonts_opensans_regular_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__fonts_opensans_regular_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__fonts_opensans_regular_ttf ()); super (); }}

#end

#end
#end

#end
