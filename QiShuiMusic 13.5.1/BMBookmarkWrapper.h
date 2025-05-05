@interface BMBookmarkWrapper : BPSPublisher
@property (nonatomic) BPSPublisher upstream;
@property (nonatomic) @ initialState;
@property (nonatomic) NSArray bookmarkableUpstreams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)initWithUpstream:initialState:;
- (id)upstream;
- (id)init;
- (void)subscribe:;
- (id)initialState;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)withBookmark:;
- (BOOL)canStoreInternalStateInBookmark;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
