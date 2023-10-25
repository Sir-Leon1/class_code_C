print("Hello world")

class Dog():
    def __init__(self, name):
        self.name = name

    def sit(self):
        print(f"{self.name} is sitting. ")

my_dog = Dog('Fido')
print(f"{my_dog.name} is Awesome.")
my_dog.sit()

"""The car class"""

class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
        self.fuel_capacity = 15
        self.fuel_level = 0


