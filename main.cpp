#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  speaker //  1)
//  Noun:
//  action 1: the speaker blasts
speaker.blastMusic();
//  action 2: the speaker powers off
speaker.powerOff();
//  action 3: the speaker changes volume
speaker.changeVolume();
//  fan. 2)
//  Noun:
//  action 1: the fan turns on
fan.on();
//  action 2: the fan turns off
fan.off();
//  action 3: the fan rotates
fan.rotate();
//  monitor  3)
//  Noun:
//  action 1: the monitor selects HDMI
monitor.selectHDMI();
//  action 2: the monitor selects Bluetooth
monitor.selectBluetooth();
//  action 3: the monitor selects USBC
monitor.selectUSBC();
//  cat  4)
//  Noun:
//  action 1: the cat runs
cat.run();
//  action 2: the cat jumps
cat.jump();
//  action 3: the cat sleeps
cat.sleep();
//  dog  5)
//  Noun: the dog barks
//  action 1:
dog.bark();
//  action 2: the dog digs
dog.dig();
//  action 3: the dog eats
dog.eat();
//  tree  6)
//  Noun:
//  action 1: the tree grows
tree.grow();
//  action 2: the tree branches
tree.branch();
//  action 3: the tree photosynthesizes
tree.photosynthesize();
//  taco truck  7)
//  Noun:
//  action 1: the taco truck makes tacos
tacoTruck.makeTaco();
//  action 2: the taco truck drives
tacoTruck.drive();
//  action 3: the taco truck makes change
tacoTruck.makeChange();
//  heater  8)
//  Noun:
//  action 1: the heater sets to high
heater.high();
//  action 2: the heater sets to medium
heater.medium();
//  action 3: the heater sets to low
heater.low();
//  9)
//  Noun: air purifier
//  action 1: the air purifier turns on
airPurifier.on();
//  action 2: the air purifier turns off
airPurifier.off();
//  action 3: the air purifier changes to the next speed
airPurifier.nextSpeed();
//   bird 10)
//  Noun:
//  action 1: the bird chirps
bird.chirp();
//  action 2: the bird flys
bird.fly();
//  action 3: the bird perches
bird.perch();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
