@interface BPSCorrelate : BMBookmarkablePublisher
@property (nonatomic) <BPSPublisher> prior;
@property (nonatomic) <BPSPublisher> current;
@property (nonatomic) BPSCorrelateHandler correlateHandler;
- (id)current;
- (id)init;
- (id)prior;
- (void)subscribe:;
- (id)initWithPrior:current:comparator:correlateHandler:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)correlateHandler;
- (id)initWithPrior:current:comparator:updatedInitialContext:correlateHandler:;
- (BOOL)canStoreInternalStateInBookmark;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
+ (long long)correlateSourceForIndex:;
@end
