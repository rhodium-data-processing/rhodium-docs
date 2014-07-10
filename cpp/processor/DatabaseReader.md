class DatabaseReader : public StreamComponent
=============================================

A stream component in a Rhodium processing stream. Used to begin most streams.

Public Interface Functions
--------------------------

`DatabaseReader(Database db, Table t)`

Constructor.

Parameters:

`Database db`- the database from which the data is to be read.

`Table t`- the table from which the data is to be read.

-----------------------------------------------------------

`DataObject read()`

Reads the data object from the database. Throws a `NoDataRemainingException` if there is no remaining data.

Returns:

`DataObject`- the data object.
