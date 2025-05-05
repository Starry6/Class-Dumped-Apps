@interface BPSMergeMany : BMBookmarkablePublisher
@property (nonatomic) NSArray publishers;
- (id)init;
- (id)publishers;
- (void)subscribe:;
- (id)initWithPublishers:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
