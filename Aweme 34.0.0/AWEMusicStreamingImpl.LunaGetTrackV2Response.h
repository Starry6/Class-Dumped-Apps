@interface AWEMusicStreamingImpl.LunaGetTrackV2Response : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) _TtC21AWEMusicStreamingImpl15LunaTrackLyrics lyric;
@property (nonatomic) _TtC21AWEMusicStreamingImpl9LunaTrack track;
@property (nonatomic) _TtC21AWEMusicStreamingImpl14LunaPlayerInfo player;
@property (nonatomic) q riskResult;
@property (nonatomic) q expireAt;
- (id)lyric;
- (void)setLyric:;
- (long long)expireAt;
- (void)setExpireAt:;
- (long long)riskResult;
- (void)setRiskResult:;
- (BOOL)isExpired;
- (id)initWithDictionary:error:;
- (id)init;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)track;
- (void)setTrack:;
+ (id)JSONKeyPathsByPropertyKey;
@end
