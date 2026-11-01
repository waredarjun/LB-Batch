import java.util.Scanner;

class Digit
{
    public void DisplayDigits()
    {
        int iNo = 175902;

        System.out.println("Number is: "+iNo);      //175902

        System.out.println(iNo % 10);               //2
        iNo = iNo/10;                               //75920
        System.out.println("Number is: "+iNo);      //75920

        System.out.println(iNo % 10);               //0
        iNo = iNo/10;                               //759
        System.out.println("Number is: "+iNo);      //75

        System.out.println(iNo % 10);               //5
        iNo = iNo/10;                               //7
        System.out.println("Number is: "+iNo);      //7

        System.out.println(iNo % 10);               //5
        iNo = iNo/10;                               //17
        System.out.println("Number is: "+iNo);      //17

        System.out.println(iNo % 10);               //5
        iNo = iNo/10;                               //17
        System.out.println("Number is: "+iNo);      //17

        System.out.println(iNo % 10);               //5
        iNo = iNo/10;                               //17
        System.out.println("Number is: "+iNo);      //17

    }
}

class Program120
{
    public static void main(String A [])
    {
        Digit digit = new Digit();
        digit.DisplayDigits();






    }
}