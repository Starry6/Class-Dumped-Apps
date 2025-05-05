@interface ML3ExportItem : NSObject
@property (nonatomic) q persistentId;
@property (nonatomic) ML3MusicLibrary library;
@property (nonatomic) # entityClass;
- (Class)entityClass;
- (id)valueForProperty:;
- (id)library;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)description;
- (id)exportData;
- (id)initWithPersistentId:entityClass:library:;
- (id)initWithPersistentId:entityClass:propertyKeysToExport:numKeys:library:;
- (id)initWithPersistentId:entityClass:properties:library:;
- (char)charValueForProperty:;
- (short)shortValueForProperty:;
- (int)longValueForProperty:;
- (long long)longlongValueForProperty:;
- (id)dataValueForProperty:;
- (id)stringValueForProperty:;
- (BOOL)hasValueForProperty:;
- (id)propertyKeysToExport:;
- (id)_propertyNameForKey:;
- (id)_propertyNamesFromKeys:numKeys:;
- (id)_allExportPropertyNames;
- (long long)persistentId;
+ (id)allExportPropertyKeysForEntityClass:returnedCount:;
@end
