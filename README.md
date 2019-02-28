# Factory Pattern

### About
In these repositories, some design patterns are implemented to a mini game system for self education. They may not be suited to use in an actual game (directly anyway). However, it is good to have some examples underhand to take reference. And even if anyone wants to use them, you are welcome.

### Definition
**_Factory method_**, defines an interface for creating an object, but lets subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.

**_Abstract Factory_**, provides an interface for creating families of related or dependent objects without specifying their concrete classes.

### Description
Our weapon is upgraded, but we don't have any protection. So we need some armors to withstand damages. We just need to make some armor classes like we did before with weapons. However, variety of items is increasing and how will we manage and equip these items? After type check, we can just create the armor with new operator and assign it to the character, but doesn't it lead to coupling problems? Also it won't be used in one place and if we want to add new armor type, we will have to change every place where it is implemented.

So, we should just extract that type checks and armor creation to a method. That method will just be responsible for creating our armors corresponding to given type, nothing else. It could be in our base armor class or in an another class like ArmorFactory. With this, our character won't know or care which armor it is, he just equips it. And our classes become loosely coupled. That is the Factory Method.

However, we don't have just armors, we also have weapons. We should make a factory for them too. Now we have two factories, creating weapons and armors for us. Both items are equipable have in common. So can't we improve it even more? We first let someone else to create our armors and weapons for us and now let another one to create corresponding factory for us. This way, we even don't know the item we are equipping is armor or weapon and even which factory it is coming from. And that is the Abstract Factory.
