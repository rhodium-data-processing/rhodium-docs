enum FieldType
==============

```cpp
enum FieldType
{
	Invalid = 0,
	Int = 1,
	Decimal = 2,
	String = 3,
	Bool = 4,
	DateTime = 5,
	IntArray = 6,
	DecimalArray = 7,
	StringArray = 8,
	BoolArray = 9,
	DateTimeArray = 10,
	Link = 11
};
```

Enum Items
----------

`Invalid = 0`

Invalid. Used by `Table::typeOfField()` to denote that the field does not exist.

`Int = 1`

Basic integer. 64-bit.

`Decimal = 2`

Standard double-precision decimal.
