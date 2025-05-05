@interface BPSFlatMap : BMBookmarkablePublisher
@property (nonatomic) q maxPublishers;
@property (nonatomic) @? transform;
@property (nonatomic) <BPSPublisher> upstream;
- (id)upstream;
- (void)subscribe:;
- (id)transform;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)initWithUpstream:maxPublishers:transform:;
- (long long)maxPublishers;
- (BOOL)canStoreInternalStateInBookmark;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
