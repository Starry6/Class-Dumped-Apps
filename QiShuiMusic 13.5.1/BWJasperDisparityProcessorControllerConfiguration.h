@interface BWJasperDisparityProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration
@property (nonatomic) BWVideoFormat inputColorFormat;
@property (nonatomic) BWVideoFormat outputDepthFormat;
@property (nonatomic) NSInteger horizontalSensorBinningFactor;
@property (nonatomic) NSInteger verticalSensorBinningFactor;
@property (nonatomic) NSInteger pointCloudTimeMachineCapacity;
- (void)dealloc;
- (void)setVerticalSensorBinningFactor:;
- (void)setHorizontalSensorBinningFactor:;
- (int)verticalSensorBinningFactor;
- (int)horizontalSensorBinningFactor;
- (id)inputColorFormat;
- (void)setInputColorFormat:;
- (id)outputDepthFormat;
- (void)setOutputDepthFormat:;
- (int)pointCloudTimeMachineCapacity;
- (void)setPointCloudTimeMachineCapacity:;
@end
