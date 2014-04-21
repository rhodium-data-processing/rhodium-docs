class Table
===========

A class that provides access to a table in a Rhodium database.

Public Interface Functions
--------------------------

`Table(std::string name, std::vector<Field> fields)`

Constructor. _SHOULD NEVER BE USED- USE_ `Database::addTable()` _INSTEAD._

Parameters:

`std::string name`- the name of the table.

`std::vector<Field> fields`- a vector containing the fields.

-----------------------------------------------------------

`void rename(std::string name)`

Renames the table.

Parameters:

`std::string name`- the new name for the table.

-----------------------------------------------------------

`FieldType typeOfField(std::string name)`

Gets the type of the field indicated by `name`.

Parameters:

`std::string name`- the name of the field.

Returns:

`FieldType`- an enum representing the type of the field. `Invalid` (0) if the field does not exist.

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
