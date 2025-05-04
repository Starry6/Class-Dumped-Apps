@interface AWEMusicStreamingImpl.LunaMediaEntity : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) _TtC21AWEMusicStreamingImpl9LunaTrack track;
@property (nonatomic) _TtC21AWEMusicStreamingImpl9LunaVideo video;
- (id)video;
- (id)initWithDictionary:error:;
- (void)setVideo:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)track;
- (void)setTrack:;
+ (id)videoJSONTransformer;
+ (id)trackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
