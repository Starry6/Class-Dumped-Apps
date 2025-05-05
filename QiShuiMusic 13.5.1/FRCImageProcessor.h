@interface FRCImageProcessor : NSObject
@property (nonatomic) q inputRotation;
@property (nonatomic) BOOL selfNormalization;
@property (nonatomic) ^{__CVBuffer=} normalizedFirst;
@property (nonatomic) ^{__CVBuffer=} normalizedSecond;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)inputRotation;
- (void)setInputRotation:;
- (id)initWithUsage:;
- (BOOL)selfNormalization;
- (void)setSelfNormalization:;
- (void)allocateNormalizedBuffers;
- (void)allocteRGBABuffersForBuffer:;
- (BOOL)shouldScaleBuffer:;
- (void)preProcessFirstInput:secondInput:waitForCompletion:;
- (BOOL)shouldCropOutputFrame:;
- (void)postProcessNormalizedFrame:output:timeScale:waitForCompletion:;
- (id)normalizedFirst;
- (id)normalizedSecond;
@end
