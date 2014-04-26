#include <rhodium/database.h>

using namespace Rhodium;

int main()
{
	Database db = Database("test.db");
	Field[] fields = {Field("foo", Integer),
		Field("bar", String),
		Field("whatever"), DecimalArray};
	Table t = db.addTable("whatever", fields);
	DataObject& obj = t.addDataObject();
	obj.getField("foo").setValue(5);
	obj.getField("bar").setValue("Lorem Iipum");
	obj.getField("whatever").array().setValues([1.5, 2.5, 3.14]);
	db.write();
	db.close();
}
