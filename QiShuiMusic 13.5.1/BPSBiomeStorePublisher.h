@interface BPSBiomeStorePublisher : BMBookmarkablePublisher
@property (nonatomic) NSString streamId;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)streamId;
- (id)withStartTime:;
- (id)init;
- (id)withLastEvents:;
- (id)reverse;
- (void)subscribe:;
- (id)initWithStreamId:storeConfig:streamsAccessClient:;
- (id)initWithStreamDatastoreReader:streamsAccessClient:;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)withBookmark:;
- (id)withMaxEvents:;
- (id)initWithStreamId:storeConfig:;
- (BOOL)canStoreInternalStateInBookmark;
- (id)withEndTime:;
+ (id)new;
+ (id)publisherWithPublisher:upstreams:bookmarkState:;
@end
