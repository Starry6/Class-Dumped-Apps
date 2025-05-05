@interface CSJTwistThresholdConfig : NSObject
@property (nonatomic) BOOL singleThreshold;
@property (nonatomic) q threshold;
@property (nonatomic) q xThreshold;
@property (nonatomic) q yThreshold;
@property (nonatomic) q zThreshold;
@property (nonatomic) CSJTwistInteractConfigModel interactConfig;
- (BOOL)singleThreshold;
- (id)interactConfig;
- (void)setInteractConfig:;
- (void)setSingleThreshold:;
- (long long)threshold;
- (void)setXThreshold:;
- (void).cxx_destruct;
- (long long)xThreshold;
- (void)setZThreshold:;
- (void)setYThreshold:;
- (long long)yThreshold;
- (long long)zThreshold;
- (void)setThreshold:;
@end
