@interface IESLiveBlockSubscriber : NSObject
@property (nonatomic) @? valueCallback;
@property (nonatomic) <IESLiveSubscription> subscription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)receiveDisposal;
- (id)initWithValueCallback:;
- (void)receiveValue:;
- (void)setValueCallback:;
- (id)valueCallback;
- (id)subscription;
- (void)setSubscription:;
- (void)receiveSubscription:;
- (void).cxx_destruct;
@end
