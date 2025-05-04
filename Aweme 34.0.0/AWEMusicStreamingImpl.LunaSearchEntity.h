@interface AWEMusicStreamingImpl.LunaSearchEntity : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) _TtC21AWEMusicStreamingImpl9LunaTrack track;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)track;
- (void)setTrack:;
+ (id)trackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
