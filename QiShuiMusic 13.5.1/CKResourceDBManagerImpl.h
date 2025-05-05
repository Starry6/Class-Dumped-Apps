@interface CKResourceDBManagerImpl : NSObject
@property (nonatomic) NSMutableArray ckr_cacheInstances;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)addOrUpdateCache:;
- (id)ckr_cacheInstances;
- (id)defaultResourceCaches;
- (BOOL)deleteCache:;
- (id)initWithFMDBQueue:;
- (id)queryAllCache;
- (id)queryCache:;
- (void)registerCacheInstance:dbQueue:;
- (void)removeCacheInstance:;
- (void)setCkr_cacheInstances:;
- (void).cxx_destruct;
@end
