@interface LSSDeviceFeatureCollector : LSSBaseFeatureCollector
- (id)fillInputFeature:projectKey:strategyConfigBundleName:extraInfo:;
- (id)initCollector;
+ (id)defaultFeatureCollector;
@end
