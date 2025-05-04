@interface AWEMusicStreamingImpl.LunaPlaylistSortTracksResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) AWEMiniLunaPlaylistInfoModel playlistInfo;
@property (nonatomic) NSArray mediaArr;
- (id)playlistInfo;
- (void)setPlaylistInfo:;
- (id)mediaArr;
- (void)setMediaArr:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)playlistInfoJSONTransformer;
+ (id)mediaArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
