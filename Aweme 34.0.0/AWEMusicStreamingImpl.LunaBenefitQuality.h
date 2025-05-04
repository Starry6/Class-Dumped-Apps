@interface AWEMusicStreamingImpl.LunaBenefitQuality : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q maxQualityLevel;
- (long long)maxQualityLevel;
- (void)setMaxQualityLevel:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
