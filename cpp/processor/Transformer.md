class Transformer : public StreamComponent
==========================================

A transformer component in a Rhodium processing stream.

Rhodium stream components are of three types:
**Processors**, **Filters**, and **Transformers**.
Processors process/handle data; Filters filter the stream and discard unneeded data;
Transformers transform the data into some other type.

Transformers cannot change or remove the data;
all they can do is change its type/fields.

Public Interface Functions
--------------------------

`Transformer(vector<Field> fieldsIn, vector<Field> fieldsOut, DataObject (*transformData)(DataObject obj))`

Constructor. Initializes the object.

Parameters:

`vector<Field> fieldsIn`- the fields that the incoming data objects are guaranteed to have.

`vector<Field> fieldsOut`- the fields the the outgoing data objects must have.
Note that not only the field _types_, but the field _names_ can be different.

`DataObject (*transformData)(DataObject obj)`- a function pointer to the transformation function.