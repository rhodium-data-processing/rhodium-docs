class DataObject
================

A class that represents a Rhodium data object (known as a row in SQL).

Public Interface Functions
--------------------------

`DataObject(std::map<std::string, Datum> fields)`

Constructor. _SHOULD NEVER BE USED- USE_ `Table::addDataObject()` _INSTEAD._

Parameters:

`std::map<std::string, Datum> fields`- a map containing the fields.

-----------------------------------------------------------

`Datum& getField(std::string name)`

Gets the datum containing the value for the given field.

Parameters:

`std::string name`- the name of the field.

Returns:

`Datum&`- the datum containing the value for the field.

-----------------------------------------------------------

`ArrayDatum& getArrayField(std::string name)`

Gets the array datum containing the value for the given field.

Parameters:

`std::string name`- the name of the field.

Returns:

`ArrayDatum&`- the array datum containing the value for this field.
