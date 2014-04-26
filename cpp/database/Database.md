class Database
==============

A class that provides access to a Rhodium database.

Public Interface Functions
--------------------------

`Database(std::string filename)`

Constructor. Loads the database indicated by `filename` and creates the new object.
Throws a `DatabaseIoException` if anything went wrong.

Parameters:

`std::string filename`- the name of the file to be loaded.

-----------------------------------------------------------

`template<n> Table& addTable(std::string name, Field (&fields)[n])`

Adds a new table with the given name and fields.

Although this is a template function, it does not need to be used as such:
Simply `addTable("something", array)` will do.

Parameters:

`std::string name`- the name of the table.

`Field (&fields)[n]`- an array of the fields to be created in the table.

Returns:

`Table&`- A reference to the actual table that was created.
_Tables should **always** be created using_ `addTable()`_, and **never** using their constructors._

-----------------------------------------------------------

`Table& addTable(std::string name, std::vector<Field> fields)`

Same as the previous function, but it accepts a vector of `Field`s as a paremeter,
instead of an array.

Parameters:

`std::string name`- the name of the table.

`std::vector<Field> fields`- a vector containing the fields to be created in the table.

Returns:

`Table&`- A reference to the actual table that was created.

-----------------------------------------------------------

`bool tableExists(std::string name)`

Pretty self-explanatory. Checks whether or not a table with the give name exists.

Parameters:

`std::string name`- the name of the table.

Returns:

`bool`- whether or not the table exists.

-----------------------------------------------------------

`Table& getTable(std::string name)`

Retrieves a table with the given name. Throws a `TableNotFoundException` if the table does not exist.

Parameters:

`std::string name`- the name of the table.

Returns:

`Table&`- a reference to the table.

-----------------------------------------------------------

`void write()`

Writes the database to the file. Throws a `DatabaseIoException` if anything went wrong.

-----------------------------------------------------------

`void close()`

Closes the database file. Throws a `DatabaseIoException` if anything went wrong.
