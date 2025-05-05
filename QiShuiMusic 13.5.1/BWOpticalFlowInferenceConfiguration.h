@interface BWOpticalFlowInferenceConfiguration : BWInferenceConfiguration
@property (nonatomic) {?=ii} inputDimensions;
@property (nonatomic) {?=ii} outputDimensions;
@property (nonatomic) NSString portType;
@property (nonatomic) Q concurrencyWidth;
@property (nonatomic) I inputRotationAngle;
@property (nonatomic) NSString attachedMediaKeyForPropagatedColorInput;
@property (nonatomic) BOOL cropColorInputToPrimaryCaptureRect;
@property (nonatomic) {?=ii} forceIntermediateDimensions;
- (id)portType;
- (void)setOutputDimensions:;
- (void)setPortType:;
- (id)outputDimensions;
- (id)inputDimensions;
- (void)setInputDimensions:;
- (id)forceIntermediateDimensions;
- (void)setForceIntermediateDimensions:;
- (unsigned long long)concurrencyWidth;
- (void)setConcurrencyWidth:;
- (unsigned int)inputRotationAngle;
- (void)setInputRotationAngle:;
- (id)attachedMediaKeyForPropagatedColorInput;
- (void)setAttachedMediaKeyForPropagatedColorInput:;
- (BOOL)cropColorInputToPrimaryCaptureRect;
- (void)setCropColorInputToPrimaryCaptureRect:;
@end
