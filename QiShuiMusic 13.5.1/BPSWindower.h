@interface BPSWindower : BMBookmarkablePublisher
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) @? key;
@property (nonatomic) <BPSWindowAssigner> assigner;
@property (nonatomic) NSArray bookmarkableUpstreams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)upstream;
- (id)init;
- (id)key;
- (void)subscribe:;
- (void)setKey:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;
- (id)assigner;
- (id)initWithUpstream:key:assigner:;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
