# Arduino PADictionary

This is a simple key-value dictionary for Arduino. It uses LinkedList (It has its own version within it to ensure compatibility). This library has had very little testing, so use at your own risk.

## Installation
1. Click Code > Download ZIP
2. Open Arduino IDE
3. From the Sketch menu select Include Library > Add .ZIP Library
4. Navigate to PADictionary-master.zip
5. Click Open

  The IDE should say something like *Library added to your libraries. Check "Include library" menu.*

## Usage
  Include the library like this:

```cpp
  #include <PADictionary.h>
```
Create an object with String keys and String values:

 ```cpp
 //Object with String keys and String values
 PADictionary<String, String> MyDict = PADictionary<String, String>();

 Or

 PADictionary<String, String> MyDict;
 ```

 Set a value:
 ```cpp
 // Adds a value to the end of the list, if the key exists replaces the value and does not change the position
 MyDict.set("MyKey", "MyValue");

 // Replace the value of a key
 MyDict.set("MyKey", "AnotherValue");

 // Replace the value of a position
 MyDict.setPos(0, "MyValue");

 // Replace the value of the first position
 MyDict.setFirstPos("MyValue");

 // Replace the value of the last position
 MyDict.setLastPos("MyValue");
 ```
 
 Adding elements:
 ```cpp
 // Add functions do not check key repetition

 // Add a value to the end of the list, if you don't want to repeat keys use MyDict.set("MyKey", "MyValue");
 MyDict.add("MyKey", "MyValue");

 // Add a value to the beginning of the list
 MyDict.addFirst("MyKey", "MyValue");

 // Add a value at position
 MyDict.addPos(0, "MyKey", "MyValue");
 ```

 Set a key:
 ```cpp
 // Replace the key of a position
 MyDict.setKeyPos(0, "MyKey");

 // Replace the key of the first position
 MyDict.setFirstKeyPos("MyKey");

 // Replace the key of the last position
 MyDict.setLastKeyPos("MyKey");

 ```

 Element exists:
 ```cpp
 // Check if a key exists
 bool exists = MyDict.keyExists("MyKey");

 // Check if a value exists
 bool exists = MyDict.valueExists("MyValue");
 ```

 Get a value:
 ```cpp
 //Get a value when a key is known
 MyVal = MyDict.get("MyKey");

 //Get a value by position
 MyVal = MyDict.getPos(0);
 
 //Get a value for the first position
 MyVal = MyDict.getFirstValue();

 //Get a value for the last position
 MyVal = MyDict.getLastValue();
 ```

 Get a key:
  ```cpp
 //Get a key when value is known
 MyKey = MyDict.getKey("MyValue");

 //Get a key by position
 MyKey = MyDict.getKeyPos(0);

 //Get a key for the first position
 MyKey = MyDict.getFirstKey();

 //Get a key for the last position
 MyKey = MyDict.getLastKey();

 // Gets a comma-separated string with the keys whose content is the requested value
 String Keys = MyDict.getAllKeys("MyValue");
 ```
 
 Removing elements:
 ```cpp
 // Remove the object based on the requested key
 MyDict.remove("MyKey");

 // Removes object from position
 MyDict.removePos(0);

 // Remove the first object
 MyDict.removeFirst();

 // Remove the last object
 MyDict.removeLast();

 // Removes all objects with the requested value
 MyDict.removeAllValues("MyValue");
 ```

 Get length of dictionary:
 ```cpp
 int length = MyDict.length();

 Or

 int length = MyDict.count();
 ```

  Clear dictionary:
 ```cpp
 MyDict.clear();
 ```
