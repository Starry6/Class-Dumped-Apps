@interface AWEIMConsecutiveChatFrequencyModel : AWEBaseApiModel
@property (nonatomic) AWEIMConsecutiveChatAnimationModel animationModel;
@property (nonatomic) AWEIMConsecutiveChatBasicModel basicModel;
- (id)animationModel;
- (id)basicModel;
- (void)setAnimationModel:;
- (void)setBasicModel:;
- (void).cxx_destruct;
+ (id)animationModelJSONTransformer;
+ (id)basicModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
