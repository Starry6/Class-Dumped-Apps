@interface AWEPayFaceLivenessProcedure : NSObject
@property (nonatomic) AWEPayFaceLivenessPreviewUnit previewUnit;
@property (nonatomic) @? completion;
@property (nonatomic) @? faceDetectedBlock;
@property (nonatomic) NSString effectID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)previewUnit;
- (void)setPreviewUnit:;
- (void)faceVC:endFaceVerifyWithError:result:;
- (BOOL)faceVC:showCapturedSampleBuffer:;
- (void)setEffectID:;
- (id)faceDetectedBlock;
- (void)setFaceDetectedBlock:;
- (id)completion;
- (void)setCompletion:;
- (void).cxx_destruct;
- (id)effectID;
@end
