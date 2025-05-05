@interface MCManagedDomainsCache : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> memberQueue;
@property (nonatomic) NSMutableArray memberQueueCache;
- (void)setMemberQueue:;
- (BOOL)isURLManaged:;
- (id)memberQueue;
- (id)init;
- (void).cxx_destruct;
- (void)rereadCache;
- (void)memberQueueRereadCache;
- (id)memberQueueCache;
- (void)setMemberQueueCache:;
+ (id)sharedCache;
@end
