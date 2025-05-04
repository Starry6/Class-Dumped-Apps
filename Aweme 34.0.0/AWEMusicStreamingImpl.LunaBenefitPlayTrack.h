@interface AWEMusicStreamingImpl.LunaBenefitPlayTrack : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q expireTime;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
- (long long)expireTime;
- (void)setExpireTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
