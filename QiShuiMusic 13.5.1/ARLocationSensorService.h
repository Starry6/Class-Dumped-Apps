@interface ARLocationSensorService : ARSensorService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithConnection:;
- (void)sensor:didOutputSensorData:;
- (void)configureForReplay;
- (void)currentLocationWithReply:;
- (void)lookupAltitudeAtCoordinate:completionHandler:;
- (void)updateARSessionState:;
- (void)updateEstimationFromVIOPose:imageData:;
- (void)updateFromVisualLocalizationResult:;
- (id)updateFromLocationData:;
- (id)updateFromDeviceOrientationData:;
+ (id)serviceName;
@end
