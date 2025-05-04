@interface AWEMusicStreamingImpl.LunaBenefitAudioEffect : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSArray audioEffectDetail;
@property (nonatomic) _TtC21AWEMusicStreamingImpl16LunaActivityInfo activityInfo;
- (id)audioEffectDetail;
- (void)setAudioEffectDetail:;
- (void)setActivityInfo:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)activityInfo;
+ (id)audioEffectDetailJSONTransformer;
+ (id)activityInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
