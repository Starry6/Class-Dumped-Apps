@interface TTVideoEngineNetworkSpeedPredictorConfigModel : NSObject
@property (nonatomic) q singleSpeedInterval;
@property (nonatomic) q mutilSpeedInterval;
@property (nonatomic) q speedOutputType;
@property (nonatomic) BOOL enableReport;
@property (nonatomic) q maxWindowSize;
@property (nonatomic) q samplingRate;
- (long long)speedOutputType;
- (BOOL)enableReport;
- (long long)maxWindowSize;
- (long long)mutilSpeedInterval;
- (void)setEnableReport:;
- (void)setMaxWindowSize:;
- (void)setMutilSpeedInterval:;
- (void)setSingleSpeedInterval:;
- (void)setSpeedOutputType:;
- (long long)singleSpeedInterval;
- (long long)samplingRate;
- (void)setSamplingRate:;
@end
