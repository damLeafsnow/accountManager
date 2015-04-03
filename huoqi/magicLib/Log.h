#ifndef STRUCT_H
#define STRUCT_H

//Log
enum handle{save, draw};
namespace magic
{
	struct Log
	{
		char dataTime[25];
		handle flag;
		float amount;
	};
}
#endif