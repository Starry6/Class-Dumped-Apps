@interface NSIncrementalStoreNode : NSObject
@property (nonatomic) NSManagedObjectID objectID;
@property (nonatomic) Q version;
- (id)knownKeyValuesPointer;
- (id)objectID;
- (void)dealloc;
- (unsigned int)_versionNumber;
- (unsigned long long)version;
- (id)_snapshot_;
- (id)initWithObjectID:withValues:version:;
- (void)updateWithValues:version:;
- (id)_propertyCache;
- (id)valueForPropertyDescription:;
- (id)description;
- (id)initWithObjectID:fromSQLRow:;
@end
