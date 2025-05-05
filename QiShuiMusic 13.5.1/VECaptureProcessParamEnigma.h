@interface VECaptureProcessParamEnigma : VECaptureProcessParam
@property (nonatomic) NSString graphConfig;
@property (nonatomic) Q enableCodeTypes;
@property (nonatomic) NSInteger frameNum;
@property (nonatomic) NSInteger enigmaSource;
@property (nonatomic) NSInteger scanCodeBehavior;
- (unsigned long long)enableCodeTypes;
- (void)setGraphConfig:;
- (int)enigmaSource;
- (id)graphConfig;
- (int)scanCodeBehavior;
- (void)setEnableCodeTypes:;
- (void)setEnigmaSource:;
- (void)setFrameNum:;
- (void)setScanCodeBehavior:;
- (id)init;
- (void).cxx_destruct;
- (int)frameNum;
@end
