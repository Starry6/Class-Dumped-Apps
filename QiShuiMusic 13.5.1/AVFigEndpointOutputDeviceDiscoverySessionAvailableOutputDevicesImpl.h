@interface AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject
@property (nonatomic) NSArray allDevices;
@property (nonatomic) NSArray availableOutputDeviceGroups;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)availableOutputDeviceGroups;
- (id)allDevices;
- (id)initWithAvailableFigEndpoints:;
@end
