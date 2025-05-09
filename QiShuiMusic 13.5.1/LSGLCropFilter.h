@interface LSGLCropFilter : LSGLOutput
@property (nonatomic) I outputPixelFormat;
@property (nonatomic) {CGSize=dd} inputSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRegion;
@property (nonatomic) {CGSize=dd} outputSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (void)informTargetsAboutNewFrameAtTime:;
- (id)maximumOutputSize;
- (void)needRender:;
- (void)newFrameReadyAtTime:atIndex:;
- (long long)nextAvailableTextureIndex;
- (void)setCropRegion:;
- (void)setInputFramebuffer:atIndex:;
- (void)setInputRotation:atIndex:;
- (void)setInputSize:atIndex:;
- (void)updateCropTextureCoordinate;
- (BOOL)enabled;
- (id)outputSize;
- (id)initWithContext:;
- (id)inputSize;
- (void).cxx_destruct;
- (unsigned int)outputPixelFormat;
- (void)setOutputSize:;
- (id)cropRegion;
@end
