@interface AWEMusicStreamingImpl.LunaSearchItem : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) _TtC21AWEMusicStreamingImpl16LunaSearchEntity entity;
@property (nonatomic) _TtC21AWEMusicStreamingImpl18LunaSearchDataMeta meta;
@property (nonatomic) _TtC21AWEMusicStreamingImpl20LunaTrackLyricsMatch lyricsMatchInfo;
- (id)lyricsMatchInfo;
- (void)setLyricsMatchInfo:;
- (id)meta;
- (id)entity;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setMeta:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setEntity:;
+ (id)entityJSONTransformer;
+ (id)metaJSONTransformer;
+ (id)lyricsMatchInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
