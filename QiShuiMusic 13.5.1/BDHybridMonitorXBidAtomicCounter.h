@interface BDHybridMonitorXBidAtomicCounter : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> counter_queue;
@property (nonatomic) NSMutableDictionary dict;
- (unsigned long long)_getBidCount:;
- (id)counter_queue;
- (unsigned long long)increaseIdForBid:;
- (void)setCounter_queue:;
- (void).cxx_destruct;
- (id)dict;
- (void)setDict:;
+ (id)shareInstance;
@end
