@interface SYSerializationSupport : NSObject
+ (id)archiveDataFromItemData:;
+ (id)archiveDataFromData:formatIdentifier:majorVersion:minorVersion:;
+ (id)itemDataFromArchiveData:majorVersion:minorVersion:error:;
@end
