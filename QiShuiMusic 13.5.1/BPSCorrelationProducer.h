@interface BPSCorrelationProducer : BMBookmarkableSubscription
@property (nonatomic) q state;
@property (nonatomic) BPSSubscription subscription;
@property (nonatomic) <BPSSubscriber> downstream;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subscription;
- (void)cancel;
- (id)receiveNewValue:source:;
- (id)initWithDownstream:;
- (void)requestDemand:;
- (id)upstreamSubscriptions;
- (void)setSubscription:;
- (void)setState:;
- (id)downstream;
- (void)receiveSubscription:;
- (long long)receiveInput:;
- (void)setDownstream:;
- (void)receiveCompletion:;
- (long long)state;
- (void).cxx_destruct;
- (long long)receiveInput:source:;
@end
