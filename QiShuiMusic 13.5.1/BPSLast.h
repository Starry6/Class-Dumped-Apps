@interface BPSLast : BMBookmarkablePublisher
@property (nonatomic) <BPSPublisher> upstream;
- (id)upstream;
- (id)init;
- (void)subscribe:;
- (id)initWithUpstream:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
