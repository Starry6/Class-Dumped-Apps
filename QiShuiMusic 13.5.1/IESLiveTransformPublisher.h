@interface IESLiveTransformPublisher : IESLivePublisher
@property (nonatomic) <IESLivePublisher> upstream;
@property (nonatomic) @ transform;
@property (nonatomic) q type;
- (id)initWithUpstream:transform:type:;
- (void)subscribe:bindingToSubscription:;
- (id)upstream;
- (void)setTransform:;
- (void)setType:;
- (id)transform;
- (void)setUpstream:;
- (long long)type;
- (void).cxx_destruct;
@end
