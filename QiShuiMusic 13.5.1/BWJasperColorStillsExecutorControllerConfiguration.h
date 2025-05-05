@interface BWJasperColorStillsExecutorControllerConfiguration : BWStillImageProcessorControllerConfiguration
@property (nonatomic) BWVideoFormat inputColorFormat;
@property (nonatomic) BWVideoFormat outputDepthFormat;
@property (nonatomic) NSInteger horizontalSensorBinningFactor;
@property (nonatomic) NSInteger verticalSensorBinningFactor;
- (void)dealloc;
- (void)setVerticalSensorBinningFactor:;
- (void)setHorizontalSensorBinningFactor:;
- (int)verticalSensorBinningFactor;
- (int)horizontalSensorBinningFactor;
- (id)inputColorFormat;
- (void)setInputColorFormat:;
- (id)outputDepthFormat;
- (void)setOutputDepthFormat:;
@end
