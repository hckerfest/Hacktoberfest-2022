package files.applets;

import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;

public class Applet13 extends Applet
{
Button b,b1;
TextField t;

public void init()
{
    add(b= new Button("Click"));
    add(t= new TextField(15));
    add(b1= new Button("Clear"));
    b.addFocusListener(new FocusListener()
    {
        @Override
        public void focusGained(FocusEvent e)
        {
          t.setText("Hello");
        }
       public void focusLost(FocusEvent e)
        {

        }
    });
    b1.addFocusListener(new FocusAdapter()
    {
        public void focusGained(FocusEvent e)
        {
            t.setText("");
        }
        /*public void focusLost(FocusEvent e)
        {

        }*/
    });
}
}
 /*<applet code="assignments.applets.Applet13.class" width=300 height=300>
</applet>
*/
