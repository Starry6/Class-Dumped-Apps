@interface EDThreadScopeManager : NSObject
@property (nonatomic) <EDThreadScopeManagerDataSource> dataSource;
@property (nonatomic) <EFScheduler> evictionScheduler;
@property (nonatomic) NSArray threadScopes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
- (id)threadScopesByDatabaseID;
- (BOOL)isThreadScopePrecomputed:mailboxProvider:shouldMigrate:;
- (id)_threadScopeInfoForThreadScope:;
- (id)precomputedMailboxScopeForThreadScope:mailboxProvider:hasFollowUpPredicate:;
- (id)_precomputedMailboxScopeForFilterPredicate:mailboxProvider:hasFollowUpPredicate:;
- (id)threadScopeFromPrecomputedMailboxScope:hasFollowUpPredicate:mailboxProvider:;
- (BOOL)_shouldPrecomputeMailboxWithObjectID:;
- (BOOL)_shouldPrecomputeMailboxType:;
- (id)threadScopes;
- (long long)databaseIDForThreadScope:;
- (void)addThreadScope:withDatabaseID:needsUpdate:lastViewedDate:;
- (void)setNeedsUpdate:forThreadScope:;
- (void)setLastViewedDate:forThreadScope:;
- (void)removeAllThreadScopes;
- (void)removeThreadScope:;
- (void)removeThreadScopesForMailboxScope:;
- (void)_initializeThreadScopesIfNeeded;
- (void)_evictAtLeast:upTo:fromThreadScopesWithDatabaseIDs:;
- (double)_evictionScoreForCount:timeInterval:;
- (id)_threadScopesWithLastViewedOlderThanLimit;
- (unsigned long long)_numberOfThreadScopesToEvictFrom:upTo:;
- (id)evictionScheduler;
+ (id)log;
+ (id)mailboxTypesToPrecompute;
@end
