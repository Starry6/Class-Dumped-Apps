@interface BPSReduce : BMBookmarkablePublisher
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) @ initialResult;
@property (nonatomic) @? nextPartialResult;
- (id)upstream;
- (id)init;
- (id)initialResult;
- (void)subscribe:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)initWithUpstream:initialResult:nextPartialResult:;
- (id)nextPartialResult;
- (BOOL)canStoreInternalStateInBookmark;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
