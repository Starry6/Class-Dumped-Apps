@interface BPSSink : NSObject
@property (nonatomic) @? receivedCompletion;
@property (nonatomic) @? receivedValue;
@property (nonatomic) q demand;
@property (nonatomic) BPSSubscriptionStatus status;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDemand:;
- (void)setStatus:;
- (long long)demand;
- (id)init;
- (void)cancel;
- (id)newBookmark;
- (void)setReceivedCompletion:;
- (id)initWithReceiveBookmarkedCompletion:receiveInput:;
- (void)receiveSubscription:;
- (long long)receiveInput:;
- (void)receiveCompletion:;
- (id)initWithReceiveCompletion:receiveInput:;
- (id)receivedValue;
- (void)setReceivedValue:;
- (void).cxx_destruct;
- (id)receivedCompletion;
- (id)status;
+ (id)new;
@end
