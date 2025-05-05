@interface BPSHandleEvents : BMBookmarkablePublisher
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) @? receiveSubscription;
@property (nonatomic) @? receiveOutput;
@property (nonatomic) @? receiveCompletion;
@property (nonatomic) @? receiveCancel;
@property (nonatomic) @? receiveRequest;
- (id)upstream;
- (void)subscribe:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (void)connect;
- (id)initWithUpstream:receiveSubscription:receiveOutput:receiveCompletion:receiveCancel:receiveRequest:;
- (id)receiveSubscription;
- (id)receiveOutput;
- (id)receiveCompletion;
- (id)receiveCancel;
- (id)receiveRequest;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
