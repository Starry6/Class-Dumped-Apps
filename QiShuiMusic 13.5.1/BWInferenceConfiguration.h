@interface BWInferenceConfiguration : NSObject
@property (nonatomic) NSInteger inferenceType;
@property (nonatomic) I priority;
@property (nonatomic) float maximumFramesPerSecond;
@property (nonatomic) BOOL propagatesFrameRatePrevention;
@property (nonatomic) NSDictionary tuningParameters;
- (void)setPriority:;
- (void)dealloc;
- (id)initWithInferenceType:;
- (float)maximumFramesPerSecond;
- (id)tuningParameters;
- (void)setTuningParameters:;
- (int)inferenceType;
- (unsigned int)priority;
- (void)setMaximumFramesPerSecond:;
- (BOOL)propagatesFrameRatePrevention;
- (void)setPropagatesFrameRatePrevention:;
@end
