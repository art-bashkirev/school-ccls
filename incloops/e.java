import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) {
        // ...code... lonely here...
        for (int x = 1; x <= 1000; x++) {
            for (int y = 1; y <= 1000; y++)
            {
                if (x*x*x + y*y*y == 1729)
                {
                    System.out.println(x + " " + y);
                }
            }
        }
    }
}