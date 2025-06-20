import java.util.Scanner;

public class day_1 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Welcome to code Cafe☕");
        boolean on = true;
        float sum = 0;
        int ch = 0;
        int items = 0;
        while (on) {
            System.out.println("");
            System.out.println("\n-----Menu-----");
            System.out.println("1.Coffee");
            System.out.println("2.Tea");
            System.out.println("3.Sandwich");
            System.out.println("4.Burger");
            System.out.println("5.Muffin");
            System.out.println("6.View Cart");
            System.out.println("7.Exit");

            System.out.print("Enter your choice: ");
            ch = sc.nextInt();
            System.out.println("");

            switch (ch) {
                case 1:
                    boolean loop = true;
                    while (loop) {
                        System.out.println("");
                        System.out.println("-----Select your Coffee-----");
                        System.out.println("");
                        System.out.println("1.Cappuccino ₹30");
                        System.out.println("2.Latte ₹40");
                        System.out.println("3.Espresso ₹25");
                        System.out.println("4.Back");
                        System.out.print("Enter your choice: ");
                        ch = sc.nextInt();
                        System.out.println("");

                        switch (ch) {
                            case 1:
                                sum = sum + 30;
                                items = items + 1;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 2:
                                sum += 40;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 3:
                                sum += 25;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 4:
                                System.out.println("Total items: " + items);
                                System.out.println("Cost: " + sum);
                                loop = false;
                                break;
                            default:
                                System.out.println("Enter correct choice");
                                break;
                        }

                    }
                    break;

                case 3:
                    loop = true;
                    while (loop) {
                        System.out.println("");
                        System.out.println("-----Select your Sandwich-----");
                        System.out.println("");
                        System.out.println("1.Veg ₹100");
                        System.out.println("2.Egg ₹115");
                        System.out.println("3.chicken ₹130");
                        System.out.println("4.Back");
                        System.out.print("Enter your choice: ");
                        ch = sc.nextInt();
                        System.out.println("");

                        switch (ch) {
                            case 1:
                                sum = sum + 100;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 2:
                                sum += 115;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 3:
                                sum += 130;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 4:
                                System.out.println("Total items: " + items);
                                loop = false;
                                break;
                            default:
                                System.out.println("Enter correct choice");
                                break;
                        }
                    }
                    break;
                case 2:
                    loop = true;
                    while (loop) {
                        System.out.println("");
                        System.out.println("-----Select your Tea-----");
                        System.out.println("");
                        System.out.println("1.Normal Tea ₹12");
                        System.out.println("2.Lemon Tea ₹25");
                        System.out.println("3.Green Tea ₹30");
                        System.out.println("4.Back");
                        System.out.print("Enter your choice: ");
                        ch = sc.nextInt();
                        System.out.println("");

                        switch (ch) {
                            case 1:
                                sum = sum + 12;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 2:
                                sum += 25;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 3:
                                sum += 30;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 4:
                                System.out.println("Total items: " + items);
                                loop = false;
                                break;
                            default:
                                System.out.println("Enter correct choice");
                                break;
                        }
                    }

                    break;
                case 4:
                    loop = true;
                    while (loop) {
                        System.out.println("");
                        System.out.println("-----Select your Sandwich-----");
                        System.out.println("");
                        System.out.println("1.Veg ₹150");
                        System.out.println("2.Egg ₹165");
                        System.out.println("3.chicken ₹190");
                        System.out.println("4.Back");
                        System.out.print("Enter your choice: ");
                        ch = sc.nextInt();
                        System.out.println("");

                        switch (ch) {
                            case 1:
                                sum = sum + 150;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 2:
                                sum += 165;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 3:
                                sum += 190;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 4:
                                System.out.println("Total items: " + items);
                                loop = false;
                                break;
                            default:
                                System.out.println("Enter correct choice");
                                break;
                        }
                    }
                    break;

                case 5:
                    loop = true;
                    while (loop) {
                        System.out.println("");
                        System.out.println("-----Select your Muffin-----");
                        System.out.println("");
                        System.out.println("1.Banana Chocolate Chip ₹190");
                        System.out.println("2.Strawberry ₹190");
                        System.out.println("3.Blueberry ₹210");
                        System.out.println("4.Back");
                        System.out.print("Enter your choice: ");
                        ch = sc.nextInt();
                        System.out.println("");

                        switch (ch) {
                            case 1:
                                sum = sum + 190;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 2:
                                sum += 190;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 3:
                                sum += 210;
                                items++;
                                System.out.println("");
                                System.out.println("/***Items added***/");
                                break;
                            case 4:
                                System.out.println("Total items: " + items);
                                loop = false;
                                break;
                            default:
                                System.out.println("Enter correct choice");
                                break;
                        }
                    }

                    break;

                case 6:
                    System.out.println("Total items: " + items);
                    System.out.println("Cost: " + sum);
                    break;
                case 7:
                    on = false;
                    break;
            }

        }

        sc.close();
    }
}