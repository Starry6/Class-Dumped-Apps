@interface BPSCollect : BMBookmarkablePublisher
@property (nonatomic) <BPSPublisher> upstream;
- (id)upstream;
- (void)subscribe:;
- (id)initWithUpstream:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
