@interface BPSBuffer : BMBookmarkablePublisher
@property (nonatomic) NSMutableArray values;
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) Q size;
@property (nonatomic) Q prefetch;
@property (nonatomic) Q whenFull;
- (id)upstream;
- (id)initWithUpstream:size:prefetch:whenFull:values:;
- (id)values;
- (void)subscribe:;
- (unsigned long long)prefetch;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (unsigned long long)whenFull;
- (void)setValues:;
- (BOOL)canStoreInternalStateInBookmark;
- (id)initWithUpstream:size:prefetch:whenFull:;
- (unsigned long long)size;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
