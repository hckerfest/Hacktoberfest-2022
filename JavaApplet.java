package files.applets;

import java.awt.*;
import java.applet.Applet;

public class Applet4 extends Applet
{
    TextField t1,t2,t3;
    Button b;
    Label l;

    public void init()
    {
        add(t1 = new TextField(15));
        add(l = new Label("+"));//pass string as +
        add(t2 = new TextField(15));
        add(b = new Button("="));
        add(t3 = new TextField(15));
    }

    public boolean action(Event e, Object o)
    {
        if(e.target.equals(b))
        {
            String s = t1.getText();
            int i = Integer.parseInt(s);
            String s1 = t2.getText();
     
            int j = Integer.parseInt(s1);
            int k = i+j;/
            
            t3.setText(String.valueOf(k));
        } 
            return true;
    }     

};
