@interface AWEAntiAddictNormalMaskConfigModel : MTLModel
@property (nonatomic) AWEAntiAddictDefaultMaskConfigModel defaultSleepDayConfig;
@property (nonatomic) AWEAntiAddictDefaultMaskConfigModel defaultSleepNightConfig;
@property (nonatomic) AWEAntiAddictDefaultMaskConfigModel defaultRestMaskConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)defaultRestMaskConfig;
- (id)defaultSleepDayConfig;
- (id)defaultSleepNightConfig;
- (void).cxx_destruct;
+ (id)defaultSleepDayConfigJSONTransformer;
+ (id)defaultSleepNightConfigJSONTransformer;
+ (id)defaultRestMaskConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
