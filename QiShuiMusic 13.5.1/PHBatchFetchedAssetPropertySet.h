@interface PHBatchFetchedAssetPropertySet : NSObject
@property (nonatomic) NSKnownKeysDictionary knownKeysDictionary;
@property (nonatomic) NSManagedObjectID objectID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)objectID;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithObjectID:knownKeysDictionary:photoLibrary:;
- (id)knownKeysDictionary;
+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (id)entityName;
+ (long long)batchSize;
+ (id)fetchType;
+ (id)propertiesToSortBy;
+ (BOOL)useObjectFetchingContext;
+ (BOOL)useNoIndexSelf;
@end
