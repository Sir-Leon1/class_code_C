import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

import java.util.Random;

public class GuessingGameGUI extends Application {
    private int randomNumber;
    private int trialNumber = 1;

    @Override
    public void start(Stage primaryStage) {
        Random random = new Random();
        randomNumber = random.nextInt(100);

        Label label = new Label("Welcome to the Guessing Game. You have 3 trials:");
        Label trialLabel = new Label("Trial 1");
        TextField inputField = new TextField();
        Button guessButton = new Button("Guess");
        Label resultLabel = new Label("");

        guessButton.setOnAction(event -> {
            try {
                int guess = Integer.parseInt(inputField.getText());
                if (guess == randomNumber) {
                    showResult("Game Won", "You guessed it right: " + randomNumber);
                } else if (trialNumber < 3) {
                    trialNumber++;
                    trialLabel.setText("Trial " + trialNumber);
                    inputField.clear();
                    resultLabel.setText("Wrong guess. Try again.");
                } else {
                    showResult("Game Lost", "The number was: " + randomNumber);
                }
            } catch (NumberFormatException e) {
                resultLabel.setText("Invalid input. Please enter a number.");
            }
        });

        VBox root = new VBox(20, label, trialLabel, inputField, guessButton, resultLabel);
        root.setAlignment(Pos.CENTER);
        Scene scene = new Scene(root, 300, 200);

        primaryStage.setTitle("Guessing Game");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    private void showResult(String title, String message) {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setTitle(title);
        alert.setHeaderText(null);
        alert.setContentText(message);
        alert.showAndWait();
        System.exit(0);
    }

    public static void main(String[] args) {
        launch(args);
    }
}
