@interface BPSMulticast : BMBookmarkablePublisher
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) @? createSubject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)upstream;
- (void)subscribe:;
- (id)lazySubject;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)initWithUpstream:createSubject:;
- (void)connect;
- (id)createSubject;
- (BOOL)canStoreInternalStateInBookmark;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
