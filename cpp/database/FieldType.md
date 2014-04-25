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

Standard 64-bit integer.

`Decimal = 2`

Standard double-precision decimal.

`String = 3`

Standard sequence of characters.

`Bool = 4`

Standard boolean value.

`DateTime = 5`

Standard date-time value.

`IntArray = 6`

Array of integers.

`DecimalArray = 7`

Array of decimals.

`StringArray = 8`

Array of strings.

`BoolArray =  9`

Array of booleans.

`DateTimeArray = 10`

Array of date-times.

`Link = 11`

Link to another object in the database.
