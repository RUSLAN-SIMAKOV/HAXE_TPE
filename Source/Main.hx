package;


import sys.FileSystem;
import sys.io.File;
import openfl.display.Sprite;
import openfl.Assets;
import flash.Lib;
import ru.stablex.ui.UIBuilder;
import ru.stablex.ui.widgets.Text;
import ru.stablex.ui.widgets.VBox;
import ru.stablex.ui.widgets.Button;

class Main extends Sprite {

    public static function main() {

        UIBuilder.init();
        var content : String = 'Can not read file!!!';

        var exist = FileSystem.exists(Sys.programPath() + '/Assets/text.txt');
        trace(Sys.executablePath());
        if (exist) content = sys.io.File.getContent('/home/user/IdeaProjects/HelloOpenfl/Assets/text.txt');

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
        var button = UIBuilder.create(Button, {
                text : 'HY',
                embededFonts: true,
                format : {
                    font    : Assets.getFont('fonts/OpenSans-Regular.ttf').fontName,
                }
        });

        vbox.addChild(text);
        vbox.addChild(button);

        //register skins
        UIBuilder.regSkins('Assets/ui/skins.xml');
        Lib.current.addChild( UIBuilder.buildFn('Assets/ui/index.xml')() );
        Lib.current.addChild(vbox);
    }

}
