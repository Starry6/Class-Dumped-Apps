@interface BiomeFlexibleStorageDirectory : NSObject
+ (id)directoryForPrivateTable;
+ (id)privateDBPathWithIdentifier:directory:create:;
@end
