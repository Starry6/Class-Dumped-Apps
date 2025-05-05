@interface BPSMap : BMBookmarkablePublisher
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) @? transform;
- (id)upstream;
- (id)init;
- (void)setTransform:;
- (void)subscribe:;
- (id)transform;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)initWithUpstream:transform:;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
