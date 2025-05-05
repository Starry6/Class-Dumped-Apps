@interface ARRemoteLocationSensor : ARRemoteSensor
@property (nonatomic) ARLocationData currentLocation;
@property (nonatomic) <ARSensorDelegate> delegate;
@property (nonatomic) Q powerUsage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)currentLocation;
- (unsigned long long)providedDataTypes;
- (void)configureForReplay;
- (void)lookupAltitudeAtCoordinate:completionHandler:;
- (void)updateARSessionState:;
- (void)updateEstimationFromVIOPose:imageData:;
- (void)updateFromVisualLocalizationResult:;
- (id)updateFromLocationData:;
- (id)initWithServerConnection:;
+ (id)new;
@end
