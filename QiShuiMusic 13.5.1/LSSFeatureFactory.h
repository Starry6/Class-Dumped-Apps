@interface LSSFeatureFactory : NSObject
- (id)featchFeatureData:inFeatureData:projectKey:sdkInfo:;
- (void)setFeature:eventInfo:;
- (void)updateCallerInfo:callerInfo:;
- (void)updateFeatureConfig:;
+ (id)defaultFeatureFactory;
@end
