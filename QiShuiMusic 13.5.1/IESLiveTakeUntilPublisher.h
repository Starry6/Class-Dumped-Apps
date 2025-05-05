@interface IESLiveTakeUntilPublisher : IESLivePublisher
@property (nonatomic) <IESLivePublisher> upstream;
@property (nonatomic) <IESLiveSubscription> externalSubscription;
- (id)externalSubscription;
- (id)initWithUpstream:subscription:;
- (void)setExternalSubscription:;
- (void)subscribe:bindingToSubscription:;
- (id)upstream;
- (void)setUpstream:;
- (void).cxx_destruct;
@end
