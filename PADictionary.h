#include "dependencies/LinkedList/LinkedList.h"

template <class T, class U>
class PADictionary
{
private:
    LinkedList<T> KeyList = LinkedList<T>();
    LinkedList<U> ValList = LinkedList<U>();

public:
    void add(T key, U val)
    {
        KeyList.add(key);
        ValList.add(val);
    }

    void addFirst(T key, U val)
    {
        KeyList.add(0, key);
        ValList.add(0, val);
    }

    void addPos(int pos, T key, U val)
    {
        KeyList.add(pos, key);
        ValList.add(pos, val);
    }

    void set(T key, U val)
    {
        for (int i = 0; i < KeyList.size(); i++)
        {
            if (KeyList.get(i) == key) {
                ValList.set(i, val);
                return;
            }
        }
        KeyList.add(key);
        ValList.add(val);
    }

    void setPos(int pos, U val)
    {
        ValList.set(pos, val);
    }

    void setFirstPos(U val)
    {
        ValList.set(0, val);
    }

    void setLastPos(U val)
    {
        ValList.set(ValList.size() - 1, val);
    }

    void setKeyPos(int pos, T key)
    {
        KeyList.set(pos, key);
    }

    void setFirstKeyPos(T key)
    {
        KeyList.set(0, key);
    }

    void setLastKeyPos(T key)
    {
        KeyList.set(KeyList.size() - 1, key);
    }

    bool keyExists(T key)
    {
        for (int i = 0; i < KeyList.size(); i++)
        {
            if (KeyList.get(i) == key)
            {
                return true;
            }
        }
        return false;
    }

    bool valueExists(U val)
    {
        for (int i = 0; i < ValList.size(); i++)
        {
            if (ValList.get(i) == val)
            {
                return true;
            }
        }
        return false;
    }

    U get(T key)
    {
        for (int i = 0; i < KeyList.size(); i++)
        {
            if (KeyList.get(i) == key)
            {
                return ValList.get(i);
            }
        }
        return U(false);
    }

    U getPos(int pos) {
        return ValList.get(pos);
    }

    U getFirstValue()
    {
        return ValList.get(0);
    }

    U getLastValue()
    {
        return ValList.get(KeyList.size() - 1);
    }

    T getKey(U val)
    {
        for (int i = 0; i < ValList.size(); i++)
        {
            if (ValList.get(i) == val)
            {
                return KeyList.get(i);
            }
        }
        return T(false);
    }

    T getKeyPos(int pos) {
        return KeyList.get(pos);
    }

    T getFirstKey()
    {
        return KeyList.get(0);
    }

    T getLastKey()
    {
        return KeyList.get(KeyList.size() - 1);
    }

    String getAllKeys(U val) 
    {
        String keys = "";

        for (int i = 0; i < ValList.size(); i++)
        {
            if (ValList.get(i) == val)
            {
                if (keys != "")
                    keys += ",";
                keys += KeyList.get(i);
            }
        }
        return keys;
    }

    void remove(T key)
    {
        for (int i = 0; i < KeyList.size(); i++)
        {
            if (KeyList.get(i) == key)
            {
                KeyList.remove(i);
                ValList.remove(i);
                return;
            }
        }
    }

    void removePos(int pos)
    {
        KeyList.remove(pos);
        ValList.remove(pos);
    }

    void removeAllValues(U val)
    {
        for (int i = KeyList.size(); i > 0; i--)
        {
            if (ValList.get(i) == val)
            {
                KeyList.remove(i);
                ValList.remove(i);
            }
        }
    }

    void removeFirst()
    {
        KeyList.remove(0);
        ValList.remove(0);
    }

    void removeLast()
    {
        KeyList.remove(KeyList.size() - 1);
        ValList.remove(ValList.size() - 1);
    }

    int length()
    {
        return KeyList.size();
    }

    int count()
    {
        return KeyList.size();
    }

    void clear() {
        KeyList.clear();
    }

    
};
