@interface AWEMusicStreamingImpl.LunaSongMakerTeamInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSArray composers;
@property (nonatomic) NSArray lyricists;
- (id)composers;
- (void)setComposers:;
- (id)lyricists;
- (void)setLyricists:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)composersJSONTransformer;
+ (id)lyricistsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
