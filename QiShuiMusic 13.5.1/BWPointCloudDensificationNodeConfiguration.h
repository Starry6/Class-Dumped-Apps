@interface BWPointCloudDensificationNodeConfiguration : NSObject
@property (nonatomic) BWSensorConfiguration rgbSensorConfiguration;
@property (nonatomic) BWSensorConfiguration timeOfFlightSensorConfiguration;
@property (nonatomic) NSInteger rgbCameraHorizontalSensorBinningFactor;
@property (nonatomic) NSInteger rgbCameraVerticalSensorBinningFactor;
@property (nonatomic) BOOL filteringEnabled;
@property (nonatomic) I depthPixelFormat;
@property (nonatomic) {?=ii} depthOutputDimensions;
@property (nonatomic) {?=ii} videoInputDimensions;
- (unsigned int)depthPixelFormat;
- (void)dealloc;
- (BOOL)filteringEnabled;
- (id)initWithRGBSensorConfiguration:timeOfFlightSensorConfiguration:rgbCameraHorizontalSensorBinningFactor:rgbCameraVerticalSensorBinningFactor:filteringEnabled:depthPixelFormat:depthOutputDimensions:videoInputDimensions:;
- (id)rgbSensorConfiguration;
- (id)timeOfFlightSensorConfiguration;
- (int)rgbCameraHorizontalSensorBinningFactor;
- (int)rgbCameraVerticalSensorBinningFactor;
- (id)depthOutputDimensions;
- (id)videoInputDimensions;
@end
