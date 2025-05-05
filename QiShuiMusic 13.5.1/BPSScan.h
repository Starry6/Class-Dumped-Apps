@interface BPSScan : BMBookmarkablePublisher
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) @ initialResult;
@property (nonatomic) @? nextPartialResult;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)upstream;
- (id)initialResult;
- (void)subscribe:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)initWithUpstream:initialResult:nextPartialResult:;
- (id)nextPartialResult;
- (BOOL)canStoreInternalStateInBookmark;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
