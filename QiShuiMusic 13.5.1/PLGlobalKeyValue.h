@interface PLGlobalKeyValue : PLManagedObject
@property (nonatomic) NSNumber boolValue;
@property (nonatomic) NSNumber doubleValue;
@property (nonatomic) NSNumber integerValue;
@property (nonatomic) NSString stringValue;
@property (nonatomic) NSString key;
@property (nonatomic) s type;
@property (nonatomic) <NSSecureCoding> anyValue;
@property (nonatomic) NSDate dateValue;
- (BOOL)supportsCloudUpload;
+ (id)entityName;
+ (void)migrateLocaleIdentifierToGlobalKeyValues:withPathManager:;
+ (id)globalValuesForKeys:managedObjectContext:;
+ (id)globalValueForKey:managedObjectContext:;
+ (id)allDecodeClasses;
+ (void)_setGlobalValue:forKeyValue:managedObjectContext:;
+ (id)attributesForKey;
+ (id)dictionaryWithManagedObjectContext:forMigrationHistory:;
+ (void)setGlobalValue:forKey:managedObjectContext:;
+ (void)populateWithDictionary:managedObjectContext:replaceExisting:;
+ (short)typeForKey:;
+ (id)fetchGlobalKeyValuesForKeys:withManagedObjectContext:;
+ (id)fetchGlobalKeyValueForKey:withManagedObjectContext:createIfMissing:;
+ (void)checkTypeForKey:andValue:;
+ (id)_globalValueForKeyValue:;
@end
