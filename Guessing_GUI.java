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



public class Guessing_GUI extends Application {
    private int rand;
    private int trial = 1;

    @Override
    public void start(Stage primaryStage) {
        Random random = new Random();
        rand = random.nextInt(100);

        Label label = new Label("Hey, welcome to the guessing game. You have 3 Trials:");
        Label trialLabel = new Label("Trial 1");
        TextField inputField = new TextField();
        Button guessButton = new Button("Guess");
        Label resultLabel = new Label("");

        guessButton.setOnAction(event -> {
            int guess = Integer.parseInt(inputField.getText());
            if (guess == rand) {
                showResult("Game Won", "You got it Correct: " + rand);
            } else if (trial < 3) {
                trial++;
                trialLabel.setText("Trial " + trial);
                inputField.clear();
                resultLabel.setText("Wrong, Try again");
            } else {
                showResult("Game Lost", "The number was: " + rand);
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
