@interface BPSSubscription : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray upstreamSubscriptions;
- (void)cancel;
- (void)requestDemand:;
- (id)upstreamSubscriptions;
@end
