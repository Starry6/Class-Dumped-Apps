@interface PuzzlePrefetchCacheManager : NSObject
@property (nonatomic) <HTSKVStore> kvStoreManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fetchAllKeys;
- (id)fetchObjectForKey:;
- (id)kvStoreManager;
- (void)setKvStoreManager:;
- (id)init;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
- (void)saveObject:forKey:;
@end
