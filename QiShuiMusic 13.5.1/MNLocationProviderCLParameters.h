@interface MNLocationProviderCLParameters : NSObject
@property (nonatomic) q activityType;
@property (nonatomic) BOOL fusionInfoEnabled;
- (long long)activityType;
- (void)setActivityType:;
- (void)setFusionInfoEnabled:;
- (BOOL)fusionInfoEnabled;
@end
