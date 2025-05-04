@interface AWELoginStrategySceneModel : MTLModel
@property (nonatomic) AWELoginStrategySceneFrequencyControl frequencyControl;
@property (nonatomic) AWELoginStrategySceneFailRemit failRemitStrategy;
@property (nonatomic) AWELoginStrategySceneExtraInfo extraInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)frequencyControl;
- (void)setFrequencyControl:;
- (unsigned long long)forceLoginGuideShape;
- (unsigned long long)forceLoginUserType;
- (id)failRemitStrategy;
- (void)setFailRemitStrategy:;
- (void).cxx_destruct;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)extraInfoJSONTransformer;
+ (id)frequencyControlJSONTransformer;
+ (id)failRemitStrategyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
