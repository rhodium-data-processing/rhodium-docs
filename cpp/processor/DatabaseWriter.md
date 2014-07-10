class DatabaseWriter : public StreamComponent
=============================================

A component in a Rhodium processing stream. Used to end most streams, it writes whatever it receives to a database.

Public Interface Functions
--------------------------

`DatabaseWriter(Database db, Table t, StreamComponent upstream)`
