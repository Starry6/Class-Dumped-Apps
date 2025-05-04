@interface AWEMusicStreamingImpl.LunaCollectMediaListResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) AWEMiniLunaPlaylistInfoModel playlistInfo;
@property (nonatomic) NSArray collectedMedia;
@property (nonatomic) _TtC21AWEMusicStreamingImpl11LunaURLInfo coverURL;
- (id)playlistInfo;
- (void)setPlaylistInfo:;
- (BOOL)isBizSuccess;
- (id)collectedMedia;
- (void)setCollectedMedia:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)collectedMediaJSONTransformer;
+ (id)playlistInfoJSONTransformer;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
