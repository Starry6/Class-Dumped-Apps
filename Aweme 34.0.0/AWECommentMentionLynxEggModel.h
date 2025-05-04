@interface AWECommentMentionLynxEggModel : AWEBaseApiModel
@property (nonatomic) Q effectType;
@property (nonatomic) AWECommentLynxEggVideoEffectModel videoEffect;
@property (nonatomic) NSString rawData;
@property (nonatomic) NSString resourceType;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString keyword;
- (void)setVideoEffect:;
- (id)videoEffect;
- (id)schema;
- (id)resourceType;
- (void)setResourceType:;
- (void)setSchema:;
- (void)setRawData:;
- (void).cxx_destruct;
- (unsigned long long)effectType;
- (id)rawData;
- (void)setEffectType:;
- (id)keyword;
- (void)setKeyword:;
+ (id)videoEffectJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
