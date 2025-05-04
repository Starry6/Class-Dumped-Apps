@interface AWEMusicStreamingImpl.LunaDeleteCollectedMediaListResponseInfo : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) AWEMiniLunaPlaylistInfoModel playlistInfo;
@property (nonatomic) NSArray deletedMedia;
@property (nonatomic) _TtC21AWEMusicStreamingImpl11LunaURLInfo coverURL;
- (id)playlistInfo;
- (void)setPlaylistInfo:;
- (id)deletedMedia;
- (void)setDeletedMedia:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)playlistInfoJSONTransformer;
+ (id)deletedMediaJSONTransformer;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
