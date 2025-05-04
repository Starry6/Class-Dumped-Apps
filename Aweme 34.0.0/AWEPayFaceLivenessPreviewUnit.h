@interface AWEPayFaceLivenessPreviewUnit : NSObject
@property (nonatomic) <VERecorderPublicProtocol> recorder;
@property (nonatomic) @? faceDetectedBlock;
- (void)processExternalVideoInput:;
- (id)faceDetectedBlock;
- (void)setFaceDetectedBlock:;
- (void).cxx_destruct;
- (void)setRecorder:;
- (id)recorder;
+ (id)previewUnitWithView:effectID:;
@end
