@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject
@property (nonatomic) NSArray recentlyUsedDevices;
@property (nonatomic) NSArray otherDevices;
- (id)recentlyUsedDevices;
- (id)init;
- (void)dealloc;
- (id)availableOutputDeviceGroups;
- (unsigned long long)hash;
- (id)otherDevices;
- (id)impl;
- (id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:;
- (BOOL)isEqual:;
- (void)_loadOutputDevices;
+ (id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:;
@end
