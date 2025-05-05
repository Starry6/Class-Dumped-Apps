@interface HMDCustomReportConfig : NSObject
@property (nonatomic) q customReportMode;
@property (nonatomic) q thresholdSize;
@property (nonatomic) q uploadInterval;
- (long long)customReportMode;
- (id)initConfigWithMode:;
- (void)setCustomReportMode:;
- (void)setThresholdSize:;
- (void)setUploadInterval:;
- (long long)thresholdSize;
- (long long)uploadInterval;
@end
