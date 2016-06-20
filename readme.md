# Handy wmi query tool.

You can use this tool to query WMI using raw SQL form.

# usage

	c:\>wmiq "select * from win32_bios"
	[     Handy WMI query tool     ]
	                        by somma
	              fixbrain@gmail.com

	query=select * from win32_bios
	    property name=BiosCharacteristics, type=uint16, value=unknwon type (vt=0x2003)
	    property name=BIOSVersion, type=string, value=unknwon type (vt=0x2008)
	    property name=BuildNumber, type=string, value=NULL
	    property name=Caption, type=string, value=0401
	    property name=CodeSet, type=string, value=NULL
	    property name=CurrentLanguage, type=string, value=en|US|iso8859-1
	    property name=Description, type=string, value=0401
	    property name=EmbeddedControllerMajorVersion, type=uint8, value=0xff
	    property name=EmbeddedControllerMinorVersion, type=uint8, value=0xff
	    property name=IdentificationCode, type=string, value=NULL
	    property name=InstallableLanguages, type=uint16, value=0x8
	    property name=InstallDate, type=datetime, value=NULL
	    property name=LanguageEdition, type=string, value=NULL
	    property name=ListOfLanguages, type=string, value=unknwon type (vt=0x2008)
	    property name=Manufacturer, type=string, value=American Megatrends Inc.
	    property name=Name, type=string, value=0401
	    property name=OtherTargetOS, type=string, value=NULL
	    property name=PrimaryBIOS, type=boolean, value=unknwon type (vt=0xb)
	    property name=ReleaseDate, type=datetime, value=20150714000000.000000+000
	    property name=SerialNumber, type=string, value=System Serial Number
	    property name=SMBIOSBIOSVersion, type=string, value=0401
	    property name=SMBIOSMajorVersion, type=uint16, value=0x3
	    property name=SMBIOSMinorVersion, type=uint16, value=0x0
	    property name=SMBIOSPresent, type=boolean, value=unknwon type (vt=0xb)
	    property name=SoftwareElementID, type=string, value=0401
	    property name=SoftwareElementState, type=uint16, value=0x3
	    property name=Status, type=string, value=OK
	    property name=SystemBiosMajorVersion, type=uint8, value=0x5
	    property name=SystemBiosMinorVersion, type=uint8, value=0xb
	    property name=TargetOperatingSystem, type=uint16, value=0x0
	    property name=Version, type=string, value=ALASKA - 1072009
    
	c:\work.wmiq\out\x86_debug>wmiq "SELECT Index, PNPDeviceID, SerialNumber FROM Win32_DiskDrive"
	[     Handy WMI query tool     ]
	                        by somma
	              fixbrain@gmail.com

	query=SELECT Index, PNPDeviceID, SerialNumber FROM Win32_DiskDrive
	    property name=Index, type=uint32, value=0x0
	    property name=PNPDeviceID, type=string, value=SCSI\DISK&VEN_INTEL&PROD_RAID_0_VOLUME\4&27617201&0&000100
	    property name=SerialNumber, type=string, value=OS
	    property name=Index, type=uint32, value=0x1
	    property name=PNPDeviceID, type=string, value=USBSTOR\DISK&VEN_SANDISK&PROD_EXTREMEPRO&REV_0001\AA010811151147340284&0
		property name=SerialNumber, type=string, value=0146100cd



c:\work.wmiq\out\x86_debug>
c:\work.wmiq\out\x86_debug>

# ref
+ [WMI/MI/OMI Providers](https://msdn.microsoft.com/en-us/library/bg126473(v=vs.85).aspx)
+ [WMI Using C++](http://serious-code.net/doku/doku.php?id=kb:wmiusingcpp)