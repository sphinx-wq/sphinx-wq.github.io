class HealthTracker:
    def __init__(self):
        self.steps = 0
        self.calories_burned = 0

    def log_steps(self, steps):
        self.steps += steps

    def log_calories_burned(self, calories):
        self.calories_burned += calories

    def display_stats(self):
        print("Daily Steps:", self.steps)
        print("Calories Burned:", self.calories_burned)


def main():
    tracker = HealthTracker()
    while True:
        print("\nHealth Tracker Menu:")
        print("1. Log Steps")
        print("2. Log Calories Burned")
        print("3. Display Stats")
        print("4. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            steps = int(input("Enter number of steps: "))
            tracker.log_steps(steps)
        elif choice == "2":
            calories = int(input("Enter number of calories burned: "))
            tracker.log_calories_burned(calories)
        elif choice == "3":
            tracker.display_stats()
        elif choice == "4":
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please enter a number between 1 and 4.")


if __name__ == "__main__":
    main()