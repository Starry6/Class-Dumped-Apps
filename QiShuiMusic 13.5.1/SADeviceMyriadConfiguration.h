@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand
@property (nonatomic) double deviceAdjustment;
@property (nonatomic) double deviceClass;
@property (nonatomic) double deviceDelay;
@property (nonatomic) double deviceTrumpDelay;
@property (nonatomic) double deviceVTEndtimeDistanceThreshold;
- (double)deviceClass;
- (void)setDeviceClass:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (double)deviceTrumpDelay;
- (void)setDeviceDelay:;
- (double)deviceDelay;
- (void)setDeviceTrumpDelay:;
- (double)deviceAdjustment;
- (void)setDeviceAdjustment:;
- (double)deviceVTEndtimeDistanceThreshold;
- (void)setDeviceVTEndtimeDistanceThreshold:;
+ (id)deviceMyriadConfiguration;
+ (id)deviceMyriadConfigurationWithDictionary:context:;
@end
