@interface AWESearchCommonEasterEggModel : AWEDynamicPatchModel
@property (nonatomic) AWESearchCommonEasterEggConfigModel easterEggConfig;
@property (nonatomic) NSDictionary logData;
- (void)setEasterEggConfig:;
- (id)easterEggConfig;
- (id)logData;
- (void)setLogData:;
- (void).cxx_destruct;
+ (id)easterEggConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
