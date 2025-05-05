@interface ENGroupContextCoreDataCache : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSPersistentContainer container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (void)loadWithCompletion:;
- (void)setQueue:;
- (id)queue;
- (long long)middlewareCacheCostForContext:;
- (void)groupContext:cacheGroup:completion:;
- (void)groupContext:cachedGroupWithID:completion:;
- (void)groupContext:latestCachedGroupWithStableID:completion:;
- (void)groupContext:fetchAllKnownGroups:;
- (void)deleteAllKnownGroupsForGroupContext:completion:;
- (void)deleteCachedValueForForGroupContext:withGroupID:completion:;
- (id)initOnDiskCacheWithContainerURL:Queue:;
- (id)initInMemoryCacheWithQueue:;
- (id)initWithType:containerURL:queue:;
- (void)_groupFromCypher:groupID:applicationData:context:completion:;
@end
