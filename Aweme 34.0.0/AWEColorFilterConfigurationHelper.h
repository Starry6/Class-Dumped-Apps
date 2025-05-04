@interface AWEColorFilterConfigurationHelper : NSObject
@property (nonatomic) NSMutableDictionary ratioMapForBeautifyItems;
@property (nonatomic) Q filterConfigurationType;
- (BOOL)hasIndensityRatioForColorEffect:inputRatioKey:;
- (float)indensityRatioForColorEffect:inputRatioKey:;
- (float)getEffectIndensityWithDefaultIndensity:Ratio:;
- (float)getEffectIndensityRatioWithDefaultIndensity:applyedIndensity:;
- (void)updateIndensityRatioForColorEffect:publishModel:ratioKey:;
- (BOOL)hasIndensityRatioForColorEffect:;
- (BOOL)hasIndensityRatioForColorEffect:publishModel:;
- (float)indensityRatioForColorEffect:publishModel:;
- (float)indensityRatioForColorEffect:;
- (void)setIndensityRatioForColorEffect:ratio:;
- (void)setIndensityRatioForColorEffect:publishModel:ratio:;
- (void)setIndensityRatioForColorEffect:inputRatioKey:ratio:;
- (void)setFilterConfigurationType:;
- (id)ratioMapForBeautifyItems;
- (unsigned long long)filterConfigurationType;
- (id)initWithBeautyConfiguration:;
- (void)setRatioMapForBeautifyItems:;
- (void).cxx_destruct;
+ (id)getColorFilterInputRationKeyWithPublishModel:;
+ (id)configurationKeyWithType:;
+ (id)combineColorFilterRatioDicKey:inputRationKey:;
@end
