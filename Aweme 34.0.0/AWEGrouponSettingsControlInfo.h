@interface AWEGrouponSettingsControlInfo : AWEBaseApiModel
@property (nonatomic) NSNumber topCardType;
@property (nonatomic) NSDictionary taskConfig;
@property (nonatomic) Q transformerOfflineType;
@property (nonatomic) NSNumber halfScreenAnimationLimit;
@property (nonatomic) NSDictionary frequencyData;
- (id)taskConfig;
- (void)setTaskConfig:;
- (id)frequencyData;
- (void)setFrequencyData:;
- (id)topCardType;
- (void)setTopCardType:;
- (id)halfScreenAnimationLimit;
- (void)setHalfScreenAnimationLimit:;
- (unsigned long long)transformerOfflineType;
- (void)setTransformerOfflineType:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
@end
