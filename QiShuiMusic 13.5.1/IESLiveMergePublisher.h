@interface IESLiveMergePublisher : IESLivePublisher
@property (nonatomic) NSArray upstreamList;
- (id)initWithUpstreamList:;
- (void)setUpstreamList:;
- (void)subscribe:bindingToSubscription:;
- (id)upstreamList;
- (void).cxx_destruct;
@end
