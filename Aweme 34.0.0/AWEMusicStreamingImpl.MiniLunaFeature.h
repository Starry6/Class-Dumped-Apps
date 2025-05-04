@interface AWEMusicStreamingImpl.MiniLunaFeature : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString miniLunaStatus;
@property (nonatomic) _TtC21AWEMusicStreamingImpl15LunaTrackAnchor anchor;
@property (nonatomic) BOOL isPreview;
- (id)miniLunaStatus;
- (void)setMiniLunaStatus:;
- (id)initWithDictionary:error:;
- (id)anchor;
- (void)setAnchor:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isPreview;
- (id)initWithCoder:;
- (void)setIsPreview:;
+ (id)anchorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
