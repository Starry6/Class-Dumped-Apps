@interface AWEMusicStreamingImpl.LunaGetVideoV2Response : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) _TtC21AWEMusicStreamingImpl9LunaVideo video;
@property (nonatomic) _TtC21AWEMusicStreamingImpl14LunaPlayerInfo player;
@property (nonatomic) q riskResult;
@property (nonatomic) q expireAt;
- (long long)expireAt;
- (void)setExpireAt:;
- (long long)riskResult;
- (void)setRiskResult:;
- (id)video;
- (BOOL)isExpired;
- (id)initWithDictionary:error:;
- (void)setVideo:;
- (id)init;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)videoJSONTransformer;
+ (id)playerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
