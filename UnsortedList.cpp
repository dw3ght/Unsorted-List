#include <iostream>
using namespace std;
#include "UnsortedList.h"

template < class ItemType > UnsortedList < ItemType >::UnsortedList ()
// No argumentconstructor
// Post: Max_Items initialized to 50 and Length have been initialized.
// The array to hold the list elements has been allocated.
{
  Max_Items = 50;
  length = 0;
  info = new ItemType[Max_Items];
}


template < class ItemType > UnsortedList < ItemType >::UnsortedList (int max)
// constructor
// Post: Max_Itemms and Length have been initialized.
// The array to hold the list elements has been allocated.
{
// complete the code]
  Max_Items = max;
  length = 0;
  info = new ItemType[Max_Items];
}

template < class ItemType > UnsortedList < ItemType >::~UnsortedList ()	// Class destructor
{
  delete[]info;
}

template < class ItemType > void UnsortedList < ItemType >::makeEmpty ()
// Post: Length has been reset to the empty state.
{
  length = 0;
}

template < class ItemType > bool UnsortedList < ItemType >::isEmpty () const
// Returns true if the List is empty; false otherwise.
{
  if (length == 0)
    return true;
  else
    return false;

}

template < class ItemType > bool UnsortedList < ItemType >::isFull () const
// Returns true if the List is full; false otherwise.                                                                                 
{
  if (length == Max_Items)
    {
      return true;
    }
  else
    {
      return false;
    }
}

template < class ItemType > int UnsortedList < ItemType >::getLength () const
// Returns number of elements in the list
{
  return length;
}

template < class ItemType >
  int UnsortedList < ItemType >::findIndex (ItemType item) const
//Searches the list for item and returns itembs  index if the item was found.
{
  ItemType vari;
  ItemType varii;
  int index = 0;
  for (int i = 0; i < Max_Items; i++)
    {
      vari = item;
      varii = info[i];
// acess value as a pointer
      if (vari == varii)
	{
	  index = i;
	  i = Max_Items;
	}
      else
	{
	  index = -1;
	}

// move to next item in list

    }
  return index;

}

template < class ItemType >
  void UnsortedList < ItemType >::putItem (ItemType newItem)
/*Adds a new element to list. This function should not
  allow duplicate keys and must check that there is space for the new item*/
{
  if (isFull () == true)
    {
      throw std::invalid_argument ("Exception: List is full!");
    }
  else if (findIndex (newItem) >= 0)
    {
      throw
	std::invalid_argument
	("Exception: Item's keys was found in the list.");
    }
  else
    {

      int arrIndex = 0;
      if (length == Max_Items)
	return;
      while (arrIndex < length)
	{
	  arrIndex++;
	}
      for (int index = length; index > arrIndex; index--)
	info[index] = info[index - 1];
      info[arrIndex] = newItem;
      length++;

    }
}

template < class ItemType >
  void UnsortedList < ItemType >::deleteItem (ItemType item)
//Removes an element from the list 
{
  if ((findIndex (item)) < 0)
    {
      throw std::invalid_argument ("Exception: Item not found!");
    }
  else
    {
      int arrIndex = 0;
      int check = 0;
      while (arrIndex < length)
	{
	  if (item == info[arrIndex])
	    {
	      check = 1;
	      break;
	    }
	  arrIndex++;
	}
      if (check)
	{
	  for (int index = arrIndex + 1; index < length; index++)
	    info[index - 1] = info[index];
	  length--;
	}
    }
}

template < class ItemType >
  ItemType UnsortedList < ItemType >::getAt (int index) const
{
  if (index < 0 || index > Max_Items)
    {
      throw std::out_of_range ("Index is not in range!");
    }
  else
    {
      return info[index];
    }
}
