@interface AWEProgressIndicatorStatusUIConfig : NSObject
@property (nonatomic) q totalDuration;
@property (nonatomic) AWEProgressIndicatorUIConfig indicatorNormalConfig;
@property (nonatomic) AWEProgressIndicatorUIConfig indicatorActiveConfig;
@property (nonatomic) AWEProgressIndicatorUIConfig indicatorDraggingConfig;
@property (nonatomic) AWEProgressIndicatorUIConfig indicatorStableConfig;
- (id)indicatorNormalConfig;
- (void)setIndicatorNormalConfig:;
- (id)indicatorActiveConfig;
- (void)setIndicatorActiveConfig:;
- (id)indicatorDraggingConfig;
- (void)setIndicatorDraggingConfig:;
- (id)indicatorStableConfig;
- (void)setIndicatorStableConfig:;
- (long long)totalDuration;
- (void).cxx_destruct;
- (void)setTotalDuration:;
@end
