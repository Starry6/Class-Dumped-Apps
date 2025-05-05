@interface IESLiveNotifyEffectSceneItem : MTLModel
@property (nonatomic) NSString key;
@property (nonatomic) IESLiveNotifyEffectFrequencyConfig frequencyConfig;
@property (nonatomic) q maxWaitingTime;
@property (nonatomic) NSArray subScenes;
@property (nonatomic) q maxShowTimes;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)frequencyConfig;
- (long long)maxShowTimes;
- (long long)maxWaitingTime;
- (void)setFrequencyConfig:;
- (void)setMaxShowTimes:;
- (void)setMaxWaitingTime:;
- (void)setSubScenes:;
- (id)subScenes;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
+ (id)frequencyConfigJSONTransformer;
+ (id)subScenesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
