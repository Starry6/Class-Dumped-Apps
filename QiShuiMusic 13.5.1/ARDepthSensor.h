@interface ARDepthSensor : ARImageSensor
@property (nonatomic) AVCapturePointCloudDataOutput pointCloudOutput;
@property (nonatomic) ARDepthSensorSettings mutableDepthSettings;
@property (nonatomic) NSString projectorMode;
@property (nonatomic) ARDepthSensorSettings settings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProjectorMode:;
- (void)start;
- (void)stop;
- (id)projectorMode;
- (void).cxx_destruct;
- (id)description;
- (void)reconfigure:;
- (id)pointCloudOutput;
- (void)pointCloudDataOutput:didOutputPointCloudData:timestamp:connection:;
- (void)pointCloudDataOutput:didDropPointCloudData:timestamp:connection:reason:;
- (unsigned long long)providedDataTypes;
- (id)prepareToStart;
- (id)configureCaptureSession;
- (id)mutableDepthSettings;
- (BOOL)canReconfigure:;
- (void)_configureProjectorModeForDevice:;
- (void)setPointCloudOutput:;
+ (void)registerSignPostForPointCloudData:;
@end
