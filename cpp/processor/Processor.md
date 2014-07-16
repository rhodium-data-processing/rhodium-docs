class Processor : public StreamComponent
========================================

A processor component in a Rhodium processing stream.

Rhodium stream components are of three types:
**Processors**, **Filters**, and **Transformers**.
Processors process/handle data; Filters filter the stream and discard unneeded data;
Transformers transform the data into some other type.

Processors _can_ change the data, but _they cannot change its type,_
and they _cannot remove any data._
Processors can also perform additional operations, such as I/O,
although writing the processed data back to a database
is best done by the DatabaseWriter class.

Public Interface Functions
--------------------------

`Processor(vector<Field> fields, DataObject (*processObject)(DataObject obj))`

Constructs the object.

Parameters:

`vector<FieldType> fields`- an array of fields.
The data object that the processor receives will always have these fields
as a precondition, and the data object that the processor returns must always
have these fields as a postcondition.

`DataObject (*processObject)(DataObjectt obj)`- the processor function.