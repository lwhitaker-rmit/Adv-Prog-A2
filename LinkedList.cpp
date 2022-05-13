#include "LinkedList.h"

// For debugging
#include <iostream>


// Create empty LinkedList
LinkedList::LinkedList() {
    head = nullptr;
    size = 0;
}

// Returns 'size', the length of the LinkedList
int LinkedList::length() {
    return size;
}

// ADD, or more accurately, APPEND tile to end of LinkedList
void LinkedList::add(Tile* tile) {
    Node* node = new Node(tile, nullptr);
    if (head == nullptr) {
        head = node;
        size += 1;
    } else {
        // 'cursor': where in the LinkedList it is looking
        Node* cursor = head;
        while (cursor->next != nullptr) {
            cursor = cursor->next;
        }
        cursor->next = node;
        size += 1;
    }
}

// ADD, or more accurately, APPEND node to end of LinkedList
void LinkedList::add(Node* node) {
    if (head == nullptr) {
        head = node;
        size += 1;
    } else {
        // 'cursor': where in the LinkedList it is looking
        Node* cursor = head;
        while (cursor->next != nullptr) {
            cursor = cursor->next;
        }
        cursor->next = node;
        size += 1;
    }
}

// REMOVE node with input letter from LinkedList
bool LinkedList::remove(Letter letter) {
    // Empty list, item not found
    if (head == nullptr) {
        return false;
    }
    // Navigate through LinkedList
    Node* cursor = head;
    Node* prev = nullptr;
    while (cursor->next != nullptr) {
        // Find node with letter
        if (cursor->tile->letter == letter) {
            prev->next = cursor->next;
            size -= 1;
            return true;
        }
        // Next node
        prev = cursor;
        cursor = cursor->next;
    }
    // Tile letter not found, return false
    return false;
}

void LinkedList::printList() {
    Node* cursor = head;
    while (cursor->next != nullptr) {
        std::cout << cursor->tile->letter;
        cursor = cursor->next;
    }
    if (cursor != nullptr) {
        std::cout << cursor->tile->letter;
    }
    std::cout << std::endl;
}

LinkedList::~LinkedList() {


    //Node* cursor = head;
    // while (cursor != nullptr) {
    
    // }
}