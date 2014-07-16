class DatabaseWriter : public StreamComponent
=============================================

A component in a Rhodium processing stream. Used to end most streams, it writes whatever it receives to a database.

Public Interface Functions
--------------------------

`DatabaseWriter(Database db, Table t, StreamComponent upstream)`

Constructor. Creates the database writer.

Parameters:

`Database db`- the database to which the data is to be written.

`Table t`- the table to which the data is to be written.

`StreamComponent upstream`- the upstream component from which the data is to be read.