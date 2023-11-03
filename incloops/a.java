import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) {
        // ...code... lonely here...
        int b=0, c=0, t=0;
        for (int bctr = 0; bctr <= 10; bctr++) {
            for (int cctr = 0; cctr <= 20; cctr++) {
                for (int tctr = 0; tctr <= 200; tctr++) {
                    if ((bctr * 10 + cctr * 5 + tctr * 0.5 == 100) && (bctr + cctr + tctr == 100)) {
                        System.out.println(bctr + " " + cctr + " " + tctr);
                    }
                }
            }
        }
    }
}