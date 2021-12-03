#include "ReferenceManager.h"

//constructors/destructors
  ReferenceManager::ReferenceManager(int temp) {capacity = temp;}
  ReferenceManager::ReferenceManager(const ReferenceManager &temp) {capacity = temp.capacity; referencelist = temp.referencelist; size = temp.size;}
  ReferenceManager::~ReferenceManager() {}

//Other functions
  bool ReferenceManager::add(Reference *temp) {
//Check if array full
    if (size >= capacity){
      return false;
    } else {
//Add a reference and add to the count
      referencelist[size] = *temp;
      size++;
      return true;
    }
    }


  int ReferenceManager::get(int temp) {
    return referencelist[temp].getId();
  }

  bool ReferenceManager::deleteReference(int temp) {
//Checking if temp in list
    if ((temp<0) && (temp >= size))
      return false;
    else {
      for (int i = temp; i < size; i++) {
        referencelist[i] = referencelist[i+1];
        i++;
      }
      return true;
    }

  }

  bool ReferenceManager::search(int temp) {
    for (size_t i = 0; i < size; i++) {
      if (referencelist[i].getId() == temp)
        return true;
    }
  return false;
  }



//Accessing functions
  int ReferenceManager::getSize() const {return size;}
  //All other accessing functions would disrupt code operation
