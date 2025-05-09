@interface IESLiveCombineTupleInnerSubscriber : NSObject
@property (nonatomic) Q type;
@property (nonatomic) IESLiveCombineTupleInnerSubscriber proxySubscriber;
@property (nonatomic) NSArray otherSubscribers;
@property (nonatomic) <IESLiveSubscriber> downtream;
@property (nonatomic) @ lastValue;
@property (nonatomic) Q index;
@property (nonatomic) Q triggerValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)proxySubscriber;
- (void)receiveDisposal;
- (id)downtream;
- (id)otherSubscribers;
- (void)receiveValue:;
- (void)setDowntream:;
- (void)setOtherSubscribers:;
- (void)setProxySubscriber:;
- (id)initWithDownstream:;
- (unsigned long long)triggerValue;
- (void)receiveSubscription:;
- (void)setType:;
- (id)lastValue;
- (unsigned long long)index;
- (unsigned long long)type;
- (void)setIndex:;
- (void).cxx_destruct;
- (void)setTriggerValue:;
- (void)setLastValue:;
@end
