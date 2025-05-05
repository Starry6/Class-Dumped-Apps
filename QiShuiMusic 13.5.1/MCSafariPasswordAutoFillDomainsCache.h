@interface MCSafariPasswordAutoFillDomainsCache : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> memberQueue;
@property (nonatomic) NSMutableArray memberQueueCache;
- (void)setMemberQueue:;
- (id)memberQueue;
- (id)init;
- (BOOL)isSafariPasswordAutoFillAllowedForURL:;
- (void).cxx_destruct;
- (void)rereadCache;
- (void)memberQueueRereadCache;
- (id)memberQueueCache;
- (void)setMemberQueueCache:;
+ (id)sharedCache;
@end
