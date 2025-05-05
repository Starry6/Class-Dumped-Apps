@interface IESECFeatureCenterPerformanceTracker : NSObject
- (void)trackFeatureCostWithDuration:functionType:featureName:actionStatus:;
@end
