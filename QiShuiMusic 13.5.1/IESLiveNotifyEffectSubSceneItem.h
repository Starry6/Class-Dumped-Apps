@interface IESLiveNotifyEffectSubSceneItem : MTLModel
@property (nonatomic) NSString key;
@property (nonatomic) IESLiveNotifyEffectFrequencyConfig frequencyConfig;
@property (nonatomic) q maxShowTimes;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)frequencyConfig;
- (long long)maxShowTimes;
- (void)setFrequencyConfig:;
- (void)setMaxShowTimes:;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
+ (id)frequencyConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
