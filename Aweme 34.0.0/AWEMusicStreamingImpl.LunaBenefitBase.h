@interface AWEMusicStreamingImpl.LunaBenefitBase : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) _TtC21AWEMusicStreamingImpl20LunaBenefitPlayTrack playTrack;
@property (nonatomic) _TtC21AWEMusicStreamingImpl19LunaBenefitDownload download;
@property (nonatomic) _TtC21AWEMusicStreamingImpl18LunaBenefitQuality quality;
@property (nonatomic) _TtC21AWEMusicStreamingImpl22LunaBenefitAudioEffect audioEffect;
- (id)audioEffect;
- (void)setAudioEffect:;
- (id)playTrack;
- (void)setPlayTrack:;
- (void)setQuality:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)download;
- (id)quality;
- (id)initWithCoder:;
- (void)setDownload:;
+ (id)playTrackJSONTransformer;
+ (id)qualityJSONTransformer;
+ (id)audioEffectJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)downloadJSONTransformer;
@end
