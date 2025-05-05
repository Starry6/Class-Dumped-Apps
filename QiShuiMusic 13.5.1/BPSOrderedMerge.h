@interface BPSOrderedMerge : BMBookmarkablePublisher
@property (nonatomic) NSArray publishers;
@property (nonatomic) @? comparator;
- (id)init;
- (id)publishers;
- (id)initWithA:b:comparator:;
- (void)subscribe:;
- (id)initWithPublishers:comparator:;
- (void)setComparator:;
- (id)comparator;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
