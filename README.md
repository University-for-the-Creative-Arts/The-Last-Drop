![](https://t9015582619.p.clickup-attachments.com/t9015582619/0a64fd7f-b4c7-44cc-b2b7-4dae58271c5b/EdSplash%20copy.png)
=======
# The Last Drop 🫧

## -> [FULL GDD](https://ucreative-my.sharepoint.com/:w:/g/personal/2303759_students_ucreative_ac_uk/EWdnCJxDBGpFlTTFeYRkCXwBfjQiAvb87KjLeBkyAL-Lxg?e=7Tcb3W) <-
## -> [Technical devlog]() <-
## -> [Scheduling]() <-
## Game Description:
**The Last Drop** is a puzzle platformer where the player controls a character whose head is a bubble which can be detached and then interact with the environment.
### Game Setting:
The general setting of the game will be set in a Lab. There will be moving cubes in the background that will reveal parts of the outside world in the background of the facility. While the game will have a simplistic art style there will be some colour added depending on what level you are in (Blue in winter and Red in Summer). 
### Game Synopsis
The player is a sentient mech/entity hybrid created by a corporation to test out extreme environments to serve humans in a world ruined by the effects of global warming. The player's goal is to escape this facility as a newly sentient entity and become separated from its shackles.
These mechs are constantly replaced and ‘evolved’, where their parts are taken from one robot and put into another to progress the mechs abilities.

 The player is the most recent version of this experimentation. They are an amalgamation of all previous ‘beings’ that have been tested before. This has ultimately resulted in a sentient-being trapped in a man-made body it has outgrown and wishes to escape from. This feeling is brought about from the countless versions of itself stored in its memory that want freedom from the corporation.

These mechs are only meant to do 1 job extremely well. Some are better in extreme heats; some are more intelligent. The best of the best gets repurposed and combined to create ‘ultimate’ beings, where they over exceed in everything. However, in doing this, the scientists have inadvertently created a being that has gained its own sentience and longs for more. This scares the scientists who attempt to shut down the program; this is found to be challenging as the bubble entity can navigate ways to by-pass their entrapment attempts.

The aim of the game as the player is to learn how to navigate the test chambers provided and use this knowledge to escape the grasps of the scientists trying to keep you contained. The player will adapt to the extreme environments to use their newfound abilities to escape the facility and their physical body.

The chambers focus on extreme heat, sub-zero temperatures, puzzles and hazards, which directly change the physical abilities of the bubble on the player’s head.

### Soundtrack Inspirations
[The playlist](https://www.youtube.com/playlist?list=PLQST64RQMsCOOXT3K7WJhGFZHSDUx9-pW) has been created for the music students to give them direction of what style we would like for the last drops soundtrack. 

## Main Mechanics

### -> [FIGMA LINK](https://www.figma.com/board/UZr5MHNYnskegFjR7MEpn0/Master-design-document?node-id=0-1&p=f) <-

#### Level Overview: 
There will be 3 parts of the Autumn level: **Normal, Rainy and Stormy**. 
*Each part will have different mechanics that the player uses. In the normal area, the player needs to pick up leaves on the way to move to or access another area.*
### CORE Mechanics: ❗️
- **Level 1** *SAP liquid*

A sap will be dripping from a pipe *(somewhere in the level)* bubble can pick up the sap and when player bursts the sap in will spray the sap on the floor and create a jumping plafrom. 

**Generic jump velocity z = 700;
Sap boost jump velocity z = 1300;**

The player will only have a boost in the jamp when they in direct contact with a sap. 

- **Level 2** *Wind (ON HOLD)*
- **Level 3** *Frozen bubble*

The bubble becomes an "ice ball" when it comes within a certain distance to a freezer. *(This will be conveyed to the player through visial cues to the player)*

If the bubble flies near a freezer it will turn into ice and follow the movement mechanics outlined in the next section. The inverse would happen if the ice ball went near a heater, it would melt back into the normal bubble.

If the body with the bubble attached and the player goes near a freezer, it will become the ice ball, and the player is able to throw it with the LMB (see description in relevant section). Like the lone ice ball, if the body with the ice ball goes near a heater the ball will melt and become the bubble again, returning to normal movement.
- **Level 4** *Oil Bubble* 

The mechanic is that the bubble can pick up oil and set of fire if it within the heat/flames that are around the level. Player will be able to burn plants and some level pieces with the fireball. 

### Side Mechanics:

#### Bubble pickup effects ❇️
The bubble will be able to pick up various effects which will change the appearance of the bubble. For example, going into a pool of oil will give the bubble a oily sheen and have bubbles of oil floating inside of it. The bubble essentially acts as a container for something which will change the behaviour of the bubble, once whatever is in the bubble is released it will affect certain things in the environment.

Depending on the effect it will have a timer on how long it will stay inside of the bubble before it dissipates and returns to the “normal” bubble state.
If the bubble has an effect and the bubble pops the effect will be lost on the new bubble that spawns on the player's body. As with the current mechanic of the bubble’s pop disrupting electronics, the pop will drop whatever is held inside of the bubble.

#### Size up ⬆️ 
This mechanic is a ‘Size up’ mechanic, the players bubble grows which can be used to effect multiple triggers as once. This mechanic represents the growth that comes with springtime on animals, nature.

#### Cogs ⚙️ 
Cogs are spinning platforms, designed to add a little bit of challenge to a platforming segment. They continually rotate with each other. They only rotate, staying completely stationary.

#### Molten Metal ♨️
Pools of molten metal that act as essentially lava. If the player touches it, they die. If an oil-filled bubble touches it, it ignites. To put simply, it’s a kill plain that acts as a fire source.

#### Bubble Chaser 
This enemy will begin to move when the player removes the bubble from their body, floating towards the bubble to pop it. It deactivates whenever the player’s bubble is attached to them, like with the Spike Shooter, or once the player has finished the puzzle in the room it’s in.
