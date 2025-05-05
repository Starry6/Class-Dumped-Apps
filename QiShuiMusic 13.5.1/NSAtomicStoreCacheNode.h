@interface NSAtomicStoreCacheNode : NSObject
@property (nonatomic) NSManagedObjectID objectID;
@property (nonatomic) NSMutableDictionary propertyCache;
- (id)valueForKey:;
- (id)knownKeyValuesPointer;
- (id)objectID;
- (id)init;
- (void)setValue:forKey:;
- (void)dealloc;
- (unsigned int)_versionNumber;
- (id)_snapshot_;
- (BOOL)isEqual:;
- (id)initWithObjectID:;
- (void)_setVersionNumber:;
- (id)propertyCache;
- (void)setPropertyCache:;
+ (BOOL)accessInstanceVariablesDirectly;
@end
