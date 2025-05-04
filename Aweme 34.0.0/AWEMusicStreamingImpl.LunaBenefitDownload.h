@interface AWEMusicStreamingImpl.LunaBenefitDownload : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q quota;
@property (nonatomic) q used;
- (id)initWithDictionary:error:;
- (id)init;
- (long long)used;
- (void)setQuota:;
- (id)initWithCoder:;
- (long long)quota;
- (void)setUsed:;
+ (id)JSONKeyPathsByPropertyKey;
@end
