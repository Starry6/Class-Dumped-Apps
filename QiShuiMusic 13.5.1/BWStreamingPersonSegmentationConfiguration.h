@interface BWStreamingPersonSegmentationConfiguration : BWInferenceConfiguration
@property (nonatomic) I inputRotationAngle;
@property (nonatomic) BOOL propagateColorInput;
@property (nonatomic) BOOL cropColorInputToPrimaryCaptureRect;
@property (nonatomic) BOOL useLowFrameRateOptimizedNetwork;
- (unsigned int)inputRotationAngle;
- (void)setInputRotationAngle:;
- (BOOL)cropColorInputToPrimaryCaptureRect;
- (void)setCropColorInputToPrimaryCaptureRect:;
- (BOOL)propagateColorInput;
- (void)setPropagateColorInput:;
- (BOOL)useLowFrameRateOptimizedNetwork;
- (void)setUseLowFrameRateOptimizedNetwork:;
@end
