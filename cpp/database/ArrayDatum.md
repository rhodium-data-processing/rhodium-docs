class ArrayDatum : public Datum
===============================

A subclass of `Datum`. Represents an array in a Rhodium database.

Public Interface Functions
--------------------------

`ArrayDatum(std::vector<Value> values)`

Constructor. _SHOULD NEVER BE USED- USE_ `DataObject::getField()` _INSTEAD_.

Parameters:

`std::vector<Value> values`- a vector containing the values.

-----------------------------------------------------------

`Value[] values()`

Really self-explanatory. Gets the values as an array.

Returns:

`Value[]`- the values.

-----------------------------------------------------------

`std::vector<Value> valueVector()`

The name says it all. Gets the values as a vector.

Returns:

`std::vector<Value>`- the values.

-----------------------------------------------------------

`void setValues(Value[] values)`

Exactly what the name says. Sets the values.

Parameters:

`Value[] values`- the new values.

-----------------------------------------------------------

`void setValues(std::vector<Value> values)`

Blinding glimpse of the obvious. Sets the values.

Parameters:

`std::vector<Value> values`- the new values.
