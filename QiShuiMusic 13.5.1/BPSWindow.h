@interface BPSWindow : BPSSubscription
@property (nonatomic) NSString identifier;
@property (nonatomic) <BPSSubscriber> downstream;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)requestDemand:;
- (id)downstream;
- (void)receiveSubscription:;
- (id)metadata;
- (long long)receiveInput:;
- (id)identifier;
- (void)setDownstream:;
- (void)receiveCompletion:;
- (void).cxx_destruct;
@end
