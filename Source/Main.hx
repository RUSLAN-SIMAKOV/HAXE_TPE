package;


import flash.Lib;
import openfl.Assets;
import openfl.display.Sprite;
import ru.stablex.ui.UIBuilder;
import ru.stablex.ui.widgets.Text;
import ru.stablex.ui.widgets.VBox;
import sys.FileSystem;

class Main extends Sprite {

    public static function main() {

        UIBuilder.init();

        var content : String = 'Can not read file!!!';
        var exist = FileSystem.exists('text.txt');
        if (exist) content = sys.io.File.getContent('text.txt');

         var vbox = UIBuilder.create(VBox,
         {
             w : 800,
             h : 800,
             childPadding : 20
         });

        var text = UIBuilder.create(Text, {
              text         : content,
               embededFonts: true,
               format      : {
                   font    : Assets.getFont('fonts/OpenSans-Regular.ttf').fontName,
                   italic  : true,
                   color   : 0xFF0000,
                   size    : 18
               }
        });

        vbox.addChild(text);

        UIBuilder.regSkins('Assets/ui/skins.xml');
        Lib.current.addChild( UIBuilder.buildFn('Assets/ui/index.xml')() );
        Lib.current.addChild(vbox);
    }

}
