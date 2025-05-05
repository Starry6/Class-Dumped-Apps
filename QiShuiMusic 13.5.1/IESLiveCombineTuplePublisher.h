@interface IESLiveCombineTuplePublisher : IESLivePublisher
@property (nonatomic) Q type;
@property (nonatomic) NSArray upstreamList;
- (id)initWithUpstreamList:type:;
- (void)setUpstreamList:;
- (void)subscribe:bindingToSubscription:;
- (id)upstreamList;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
