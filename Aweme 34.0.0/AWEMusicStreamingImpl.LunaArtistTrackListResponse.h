@interface AWEMusicStreamingImpl.LunaArtistTrackListResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSArray hotTracks;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString maxCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (id)hotTracks;
- (void)setHotTracks:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)hotTracksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
