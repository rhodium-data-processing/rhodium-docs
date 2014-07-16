class Filter : public StreamComponent
=====================================

A filter component in a Rhodium processing stream.

Rhodium stream components are of three types:
**Processors**, **Filters**, and **Transformers**.
Processors process/handle data; Filters filter the stream and discard unneeded data;
Transformers transform the data into some other type.

Filters cannot change the data or its type,
but they _can remove unneeded data objects from the stream._

Public Interface Functions
--------------------------

`Filter(vector<Field> fields, bool (*sendDataObject)(DataObject obj)`

Constructor. Initializes the object.

Parameters:

`vector<Field> fields`- the fields that the filter is guaranteed to receive,
and which all outgoing data objects must contain.

`bool (*sendDataObject)(DataObject obj)`- the filter function.
Returns `true` if the data object is to be sent down, or `false` otherwise.