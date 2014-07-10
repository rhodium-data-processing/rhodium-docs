class StreamComponent
=====================

A class that represents a component in a Rhodium processing stream.

Each StreamComponent class operates in a separate thread.

Public Interface Functions
--------------------------

`void start()`

Starts the stream component.

----------------------------------------------------------

`DataObject read()`

Reads a data object from the output queue. Used by the downstream component.

Returns:

`DataObject`- the data object that was read.

Protected Functions
-------------------

`void send(DataObject obj)`

Sends the object downstream.

Parameters:

`DataObject obj`- the object to be sent.
