@interface LSLiveFaceDetectResultData : LSLiveAlgorithmResultData
@property (nonatomic) double yaw;
@property (nonatomic) double pitch;
@property (nonatomic) double roll;
@property (nonatomic) Q action;
- (double)yaw;
- (void)setPitch:;
- (id)init;
- (double)pitch;
- (unsigned long long)action;
- (void)setAction:;
- (double)roll;
- (void)setYaw:;
- (void)setRoll:;
@end
