@interface AWEMusicStreamingImpl.LunaAlbumDetailResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) _TtC21AWEMusicStreamingImpl9LunaAlbum albumInfo;
@property (nonatomic) NSArray tracks;
- (id)albumInfo;
- (void)setAlbumInfo:;
- (BOOL)isBizSuccess;
- (id)initWithDictionary:error:;
- (id)init;
- (id)tracks;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setTracks:;
+ (id)albumInfoJSONTransformer;
+ (id)tracksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
