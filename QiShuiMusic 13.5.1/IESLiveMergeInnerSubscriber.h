@interface IESLiveMergeInnerSubscriber : NSObject
@property (nonatomic) <IESLiveSubscriber> downtream;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)receiveDisposal;
- (id)downtream;
- (void)receiveValue:;
- (void)setDowntream:;
- (id)initWithDownstream:;
- (void)receiveSubscription:;
- (void).cxx_destruct;
@end
