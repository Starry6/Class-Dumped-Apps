@interface ENGroupContextInMemoryCache : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableDictionary groupIDtoGroup;
@property (nonatomic) NSMutableDictionary latestStableGroupIDToGroup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)initWithQueue:;
- (id)queue;
- (long long)middlewareCacheCostForContext:;
- (void)groupContext:cacheGroup:completion:;
- (void)groupContext:cachedGroupWithID:completion:;
- (void)groupContext:latestCachedGroupWithStableID:completion:;
- (void)groupContext:fetchAllKnownGroups:;
- (void)deleteAllKnownGroupsForGroupContext:completion:;
- (void)deleteCachedValueForForGroupContext:withGroupID:completion:;
- (id)groupIDtoGroup;
- (void)setGroupIDtoGroup:;
- (id)latestStableGroupIDToGroup;
- (void)setLatestStableGroupIDToGroup:;
@end
