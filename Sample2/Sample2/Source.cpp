#include <ntddk.h>

void SampleUnload(PDRIVER_OBJECT DriverObject)
{
	UNREFERENCED_PARAMETER(DriverObject);

	KdPrint(("Sample Driver Unload Called\n"));

}

extern "C" NTSTATUS 
DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
	UNREFERENCED_PARAMETER(RegistryPath);
	DriverObject->DriverUnload = SampleUnload;

	KdPrint(("Sample driver initilized successfully\n"));

	return STATUS_SUCCESS;

}