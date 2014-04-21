class Datum
===========

A class that represents a datum in a Rhodium database.

Type Declarations
-----------------

`typedef boost::variant<int, double, std::string, bool, std::time_t> Value`

A type to represent values.

Public Interface Functions
--------------------------

Datum(Value value)

Constructor. _SHOULD NEVER BE USED- USE_ `DataObject::getField()` _INSTEAD._

Parameters:

`Value value`- the value of the datum.

-----------------------------------------------------------

`Value getValue()`

Self-explanatory. Returns the value of the datum.

Returns:

`Value`- the value.

-----------------------------------------------------------

`void setValue(Value value)`

Also self-explanatory. Sets the value of the datum.

Parameters:

`Value value`- the new value.
