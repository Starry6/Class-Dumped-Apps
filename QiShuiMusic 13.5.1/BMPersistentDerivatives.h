@interface BMPersistentDerivatives : BMBookmarkablePublisher
@property (nonatomic) NSURL url;
@property (nonatomic) NSString tableName;
@property (nonatomic) NSString streamName;
@property (nonatomic) BPSPublisher upstream;
- (id)streamName;
- (id)upstream;
- (id)url;
- (id)init;
- (id)tableName;
- (void)subscribe:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;
- (id)initWithUpstream:derivativeDatabaseURL:derivedTableName:;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
