@interface BPSDrivableSink : NSObject
@property (nonatomic) @? receivedCompletion;
@property (nonatomic) @? shouldContinue;
@property (nonatomic) BPSSubscriptionStatus status;
@property (nonatomic) BOOL finished;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFinished:;
- (void)setStatus:;
- (id)init;
- (void)cancel;
- (id)newBookmark;
- (void)setReceivedCompletion:;
- (BOOL)finished;
- (void)receiveSubscription:;
- (long long)receiveInput:;
- (void)receiveCompletion:;
- (id)initWithReceiveBookmarkedCompletion:shouldContinue:;
- (void).cxx_destruct;
- (void)setShouldContinue:;
- (id)receivedCompletion;
- (id)status;
- (id)shouldContinue;
- (id)initWithReceiveCompletion:shouldContinue:;
+ (id)new;
@end
