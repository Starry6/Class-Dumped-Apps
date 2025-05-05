@interface VCPImageHumanPoseAnalyzer : VCPImageAnalyzer
@property (nonatomic) BOOL trackingMode;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)trackingMode;
- (void)setTrackingMode:;
- (int)configForAspectRatio:;
- (int)analyzePixelBuffer:flags:results:cancel:;
- (int)copyImage:toData:withChannels:;
- (int)reInitModel;
- (int)updateModelForAspectRatio:;
- (int)preferredInputFormat:height:format:;
- (id)initWithKeypointsOption:aspectRatio:lightweight:forceCPU:sharedModel:flushModel:;
- (int)parsePersons:width:height:;
- (int)processPersons:width:height:;
- (int)generateHumanPose:;
- (int)createModelWithHeight:srcWidth:;
- (int)createInput:withBuffer:modelInputHeight:modelInputWidth:;
+ (id)sharedModel:;
+ (BOOL)saveKeypoints;
@end
