@interface LSSBaseFeatureCollector : NSObject
@property (nonatomic) NSDictionary callerInfo;
@property (nonatomic) NSString collectorName;
@property (nonatomic) NSString featureType;
@property (nonatomic) NSDictionary featureConfig;
- (id)fillInputFeature:projectKey:strategyConfigBundleName:extraInfo:;
- (int)getNetWorkType:;
- (id)featureConfig;
- (void)setCollectorName:;
- (void)setFeatureConfig:;
- (void)updateCallerInfo:;
- (void)updateFeatureConfig:;
- (id)featureType;
- (id)init;
- (id)collectorName;
- (void).cxx_destruct;
- (void)setFeatureType:;
- (id)callerInfo;
- (void)setCallerInfo:;
@end
