@interface AWEGeneralColdLaunchLandingConfigModel : MTLModel
@property (nonatomic) NSString configId;
@property (nonatomic) AWEGeneralColdLaunchLandingFrequencyConfigModel frequencyConfig;
@property (nonatomic) NSString openSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)openSchema;
- (void)setOpenSchema:;
- (id)configId;
- (void)setConfigId:;
- (id)frequencyConfig;
- (void)setFrequencyConfig:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
