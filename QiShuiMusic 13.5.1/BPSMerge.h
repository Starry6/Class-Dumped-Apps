@interface BPSMerge : BMBookmarkablePublisher
@property (nonatomic) <BPSPublisher> a;
@property (nonatomic) <BPSPublisher> b;
- (id)b;
- (id)init;
- (id)a;
- (void)subscribe:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;
- (id)initWithA:b:;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
