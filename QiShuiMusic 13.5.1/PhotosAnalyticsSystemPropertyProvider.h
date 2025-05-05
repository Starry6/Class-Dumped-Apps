@interface PhotosAnalyticsSystemPropertyProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)deviceModel;
- (id)lowPowerModeEnabled;
- (id)osVersion;
- (id)getDynamicProperty:forEventName:payloadForSystemPropertyExtraction:;
- (id)_deviceFreeSpaceDescription;
- (id)percentageOfFreeSpaceOnDevice;
- (id)process;
- (void)registerSystemProperties:;
@end
