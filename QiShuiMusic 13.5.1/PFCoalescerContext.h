@interface PFCoalescerContext : NSObject
@property (nonatomic) PFCoalescer coalescer;
@property (nonatomic) NSObject<OS_dispatch_queue> isolationQueue;
@property (nonatomic) NSObject<OS_dispatch_group> group;
@property (nonatomic) NSHashTable pendingActivityTokens;
@property (nonatomic) NSArray pendingActivityTokensSnapshot;
@property (nonatomic) Q coalescedUpdatesCount;
- (void)pushBack:;
- (void)notifyActivityTokenCompletionOnQueue:handler:;
- (void)setCoalescedUpdatesCount:;
- (id)activityTokenWithReason:;
- (id)isolationQueue;
- (void)setPendingActivityTokens:;
- (void)setIsolationQueue:;
- (void)cancelPendingActivityTokens;
- (void)setGroup:;
- (id)pendingActivityTokens;
- (id)group;
- (id)initWithCoalescer:;
- (void)delayNextInvocationByTimeInterval:;
- (void).cxx_destruct;
- (unsigned long long)coalescedUpdatesCount;
- (id)activityToken;
- (id)pendingActivityTokensSnapshot;
- (id)coalescer;
- (void)setCoalescer:;
@end
