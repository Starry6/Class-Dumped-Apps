@interface VERenderConfig : NSObject
@property (nonatomic) HTSGLFramebuffer outputFramebuffer;
@property (nonatomic) ^v onScreenRLRenderInfo;
@property (nonatomic) BOOL shouldClear;
@property (nonatomic) BOOL waitFinish;
@property (nonatomic) {CGSize=dd} inputSize;
@property (nonatomic) {CGSize=dd} outputSize;
@property (nonatomic) ^{__CVBuffer=} outputYCbCrPixbuffer;
- (id)initWithFBO:;
- (id)onScreenRLRenderInfo;
- (id)outputFramebuffer;
- (id)outputYCbCrPixbuffer;
- (BOOL)renderToScreen;
- (id)rlRenderingInfo:;
- (void)setOnScreenRLRenderInfo:;
- (void)setOutputFramebuffer:;
- (void)setOutputYCbCrPixbuffer:;
- (void)setWaitFinish:;
- (BOOL)waitFinish;
- (void)dealloc;
- (id)outputSize;
- (id)inputSize;
- (void).cxx_destruct;
- (BOOL)shouldClear;
- (void)setShouldClear:;
- (void)setInputSize:;
- (void)setOutputSize:;
@end
