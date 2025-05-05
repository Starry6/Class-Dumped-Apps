@interface IESLiveTakeUntilSubscriber : NSObject
@property (nonatomic) <IESLiveSubscriber> downtream;
@property (nonatomic) <IESLiveSubscription> subscription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)receiveDisposal;
- (id)downtream;
- (id)initWithDownstream:subscription:;
- (void)receiveValue:;
- (void)setDowntream:;
- (id)subscription;
- (void)setSubscription:;
- (void)receiveSubscription:;
- (void).cxx_destruct;
@end
