YouTube Channel Class

This repository contains a C++ program that implements a YouTube channel class, 
allowing you to create and manage YouTube channels with attributes such as name, owner name, published video titles, and subscriber count.

Features:

- Create YouTube channels with optional initial video titles and subscriber count
- Subscribe and unsubscribe from channels
- Publish new videos
- Get channel information, including name, owner name, subscriber count, and published video titles

Class Diagram:

The YouTubeCH class has the following private attributes:

- name (string)
- OwnerName (string)
- PublishedVideoTitles (list<string>)
- SubscriberCount (unsigned int)

The class has the following public methods:

- Constructor with optional initial video titles and subscriber count
- Subscribe()
- Unsubscribe()
- set_name()
- get_name()
- PublishVideo()
- GetInfo()

Usage:

The main function demonstrates how to create YouTube channels, publish videos, subscribe and unsubscribe, and display channel information.
