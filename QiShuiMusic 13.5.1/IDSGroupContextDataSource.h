@interface IDSGroupContextDataSource : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)initWithQueue:;
- (id)queue;
- (void)participantsForCypher:completion:;
- (void)validateCachedGroup:isParentOfGroup:completion:;
- (void)groupContext:upsertGroupWithInfo:previousGroup:completion:;
- (void)groupContext:fetchGroupWithID:completion:;
- (void)publicDataRepresentationForGroup:inContext:completion:;
- (void)groupFromPublicDataRepresentation:inContext:completion:;
- (long long)middlewareCacheCostForContext:;
- (void)groupContext:cacheGroup:completion:;
- (void)groupContext:cachedGroupWithID:completion:;
- (void)groupContext:latestCachedGroupWithStableID:completion:;
- (void)groupContext:fetchAllKnownGroups:;
- (void)deleteAllKnownGroupsForGroupContext:completion:;
- (void)deleteCachedValueForForGroupContext:withGroupID:completion:;
- (id)_groupContextDataSource;
- (id)_groupContextCacheMiddleware;
@end
