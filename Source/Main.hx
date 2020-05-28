package;

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
//        var vbox = UIBuilder.create(VBox);
//        var text = UIBuilder.create(Text, {
//              text         : 'Hello from openfl',
//               embededFonts: true,
//               format      : {
//                   font    : Assets.getFont('fonts/OpenSans-Regular.ttf').fontName,
//                   italic  : true,
//                   color   : 0xFF0000,
//                   size    : 18
//               }
//        });
//        var button = UIBuilder.create(Button, {
//                text : 'HY',
//                embededFonts: true,
//                format : {
//                    font    : Assets.getFont('fonts/OpenSans-Regular.ttf').fontName,
//                }
//        });
//        vbox.addChild(text);
//        vbox.addChild(button);
//        Lib.current.addChild(vbox);
        //register skins
        UIBuilder.regSkins('Assets/ui/skins.xml');

        //Create our UI
        Lib.current.addChild( UIBuilder.buildFn('Assets/ui/index.xml')() );
    }
}
