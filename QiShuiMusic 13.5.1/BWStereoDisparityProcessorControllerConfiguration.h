@interface BWStereoDisparityProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration
@property (nonatomic) {?=ii} inputDimensions;
@property (nonatomic) {?=ii} disparityOutputDimensions;
@property (nonatomic) NSInteger fsdNetStereoImagesAlignment;
@property (nonatomic) NSInteger stillImageDepthDataType;
@property (nonatomic) BOOL shouldComputeDisparityWhenCalibrationFails;
- (void)setShouldComputeDisparityWhenCalibrationFails:;
- (BOOL)shouldComputeDisparityWhenCalibrationFails;
- (id)inputDimensions;
- (void)setInputDimensions:;
- (id)disparityOutputDimensions;
- (void)setDisparityOutputDimensions:;
- (int)fsdNetStereoImagesAlignment;
- (void)setFsdNetStereoImagesAlignment:;
- (int)stillImageDepthDataType;
- (void)setStillImageDepthDataType:;
@end
