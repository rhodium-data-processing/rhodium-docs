class Table
===========

A class that provides access to a table in a Rhodium database.

Public Interface Functions
--------------------------

`Table(std::string name)`

Constructor. _SHOULD NEVER BE USED- USE_ `Database::addTable()` _INSTEAD._

Parameters:

`std::string name`- the name of the table.

-----------------------------------------------------------

`void rename(std::string name)`

Renames the table.

Parameters:

`std::string name`- the new name for the table.

-----------------------------------------------------------

`DataObject& getDataObject(int index)`

Gets the data object at the position indicated by `index`.
Throws an `IndexOutOfBoundsException` if the index is out of bounds.

Parameters:

`int index`- the position of the desired data object (0-based).

Returns:

`DataObject&`- the data object.

-----------------------------------------------------------

`DataObject& addDataObject()`

Adds a new data object to the table.
_Data objects should **always** be created like this, and **never** vusing their constructors._

Returns:

`DataObject&`- the data object.
