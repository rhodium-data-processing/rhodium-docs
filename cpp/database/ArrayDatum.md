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

`ArrayDatum& array()`

Converts this object to an array.
Must be used whenever performing operations on array data
because `DataObject::getField()` returns a `Datum`, not an `ArrayDatum`.

Returns:

`ArrayDatum&`- the object converted to an `ArrayDatum`.

-----------------------------------------------------------

`Value[] getValues()`

Really self-explanatory. Gets the values as an array.

Returns:

`Value[]`- the values.

-----------------------------------------------------------

`std::vector<Value> getValueVector()`

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

-----------------------------------------------------------
