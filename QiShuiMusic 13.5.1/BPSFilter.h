@interface BPSFilter : BMBookmarkablePublisher
@property (nonatomic) BPSPublisher upstream;
@property (nonatomic) @? isIncluded;
- (id)upstream;
- (id)init;
- (void)subscribe:;
- (void)setUpstream:;
- (id)initWithUpstream:isIncluded:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)isIncluded;
- (BOOL)canStoreInternalStateInBookmark;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
