# Table TV Remote

A simple pleasure in my life is making a meal, sitting on the couch and watching deal or no deal (its free on samsung tv's!). Too often this simple pleausre would be disrupted by me looking for the tv remote, so I decided to put one in my coffee table. I will outline the process and files I used below. 

## 1. Materials Used

* Arduino nano
* IR reciever
* IR transmitter
* Breadboard
* Jumper wires
* Prototyping Board
* Makerbot (borrowed from my roomate)
* Push Buttons
* Resistors

## 2. Receiving IR Codes
Unfortunatley a downside of having to create a new remote is to have access to an existing remote. You might be able to find codes online but I tried for a bit and it is not straightfoward. It's easiest to set up a simple IR receiving circuit to pull codes off of your current remote. I used a Samsung TV. My circuit was based off of the one [here](https://create.arduino.cc/projecthub/electropeak/use-an-ir-remote-transmitter-and-receiver-with-arduino-1e6bc8). I pulled an IR reciever off of an old led strip. Code for recieving is above in the recieve demo in the repo above. It's basically just the code that comes in the examples section of the arduino with a few lines removed. The codes.txt file has the results of my remote.

![IR Recieving Circuit](https://lh3.googleusercontent.com/7LN3mInyzPRGZPjIcOghWujyl1PKMKG-0J_WUytQOWgJW5I6KmHDujRQYqIHltEparNiH-6O8j_xlFWV2xOrCFh6TIMMl9kn4vxwUyJga73TqoXEwkFdDmPSKbQt2cZ6EqJ2hvStjQ=w2400)

## 3. Sending IR Codes
I initially made sure the codes worked by wiring one button on the breadboard and the power command. [This](https://www.youtube.com/watch?v=xA66hXYRx9I) video helped explain the process for this circuit. You need a pull down resistor on the push button and the digital out on the the arduino hooked to button ground pin. Once I ensured it worked I wired the rest of the buttons and codes. I drilled holes in the side of my table with a 1/4 inch drill bit and designed some buttons on my roomates 3D printer. Mach 1 was a pretty ugly array of wires and buttons. I didn't have any protyping board around so I tried to design a plate on the printer and just solder wire directly to the button pins. It worked a little bit but I couldn't get a good enough connection. I hollowed out the bottom of the table and put mach 1 in place. It was ugly and not very robust.

![Plastic Proto Board](https://lh3.googleusercontent.com/pMzLx2kxE4UtpjyppNe66VqbNMFzLAMdQV7eBrWy1ObeMI55_8dveuHLCjuRQPpTrQ4J0AkUJM9cCIaTUTRoLB1I5nskTC4OjIr3O6BvL65ug3XtQ3s33P3lviZrj5KZvUoRiieBFw=w2400)

![Mach 1 in the table](https://lh3.googleusercontent.com/bUxb0yubQ7r0JABBr0JC_p6PjUtBE7uwkIeWpCr6fIVI0RK5doxcazWzDOFkoaa6d49m4l0fp_QSTUdo_hXA_9OjhzRR-IUCMc_CqBGGvPDJKBWHvXBmwZi5mkiu0xkXK3yQcvDfaQ=w2400)

After I used this for a few days I ordered some protyping board and put the rest together for mach 2. The button and face plate models are in the root of this repo. 


![Face Plate](https://lh3.googleusercontent.com/rP9GEcOjRg4RSGYw1F7wecFTj9SUYDWbQB7HA8vB7jhL9_7YQZp7ToNFSBkW4mtUAqnRr3qlTvQSu_RU6IuQg0dqQZ91bb7EmZcC583Oi-FkIp_-MxvXHqszyHwpL1X_772OI2pIwQ=w2400)

![Soldered Circuit](https://lh3.googleusercontent.com/Z0telzRF7qclMfiXb3bu-QERJLBJvU3TTj6FrgNhJBcLCTByjYKKSQ5tLErp0EoWxfSMKpZMigiwhgVYWc9L1iAr6JE2LHl3_Wkoyy0g03m10c3YxB4R1WpTDsicSIJzDSnwMRGfzg=w2400)

Here is a demo of the finished product:

![](https://i.imgur.com/7alkVjS.gifv)
