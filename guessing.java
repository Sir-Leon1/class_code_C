import java.util.Scanner;
import java.util.Random;

class GuessingGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int guess, trial = 1, rand = 73;

        Random random = new Random();
        rand = random.nextInt(100);

        System.out.println("Hey welcome to the guessing game. You have 3 Trials:");

        while (trial < 4) {
            System.out.println("\tTrial_" + trial + "\nGuess a Number\n::");
            guess = scanner.nextInt();

            if (guess == rand) {
                System.out.println("\t\tGame Won\n\tYou got it Correct:: " + rand);
                scanner.close();
                return;
            } else {
                System.out.println("Wrong, Try again\n");
            }
            trial++;
        }

        System.out.println("\t\tGame Lost\n\tThe number was:: " + rand);
        scanner.close();
    }
}
