@interface AWEMusicStreamingImpl.LunaArtistTrackListRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) q sortType;
@property (nonatomic) NSString artistID;
@property (nonatomic) NSString maxCursor;
@property (nonatomic) q count;
- (id)maxCursor;
- (void)setMaxCursor:;
- (id)initWithArtistID:sortType:;
- (Class)responseModelClass;
- (id)init;
- (void)setCount:;
- (id)path;
- (long long)count;
- (void).cxx_destruct;
- (id)method;
- (id)params;
- (void)setSortType:;
- (long long)sortType;
- (id)artistID;
- (void)setArtistID:;
@end
