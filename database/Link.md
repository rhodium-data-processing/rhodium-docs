class Link : public Datum
=========================

A class that represents a link to another DataObject.

Public Interface Functions
--------------------------

`Link(Table t, DataObject obj)`

Constructor. _SHOULD NEVER BE USED- USE_ `DataObject::getField()` _INSTEAD._

Parameters:

`Table t`- the table that contains the target of the link.

`DataObject obj`- the target of the link.

Links across databases are not supported.

-----------------------------------------------------------

`DataObject& target()`

Returns a reference to the target of this link.

Returns:

`DataObject&`- the target of this link.

-----------------------------------------------------------

`void setTarget(Table t, DataObject obj)`

Changes the target of this link.

Parameters:

`Table t`- the table that contains the target of the link.

`DataObject obj`- the target of the link.
