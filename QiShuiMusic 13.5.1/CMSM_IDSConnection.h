@interface CMSM_IDSConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)service:nearbyDevicesChanged:;
- (id)init;
- (id)copyNearbyPairedDeviceUniqueID;
- (id)copyNearbyPairedDeviceName;
- (void)service:connectedDevicesChanged:;
- (id)copyNearbyPairedDeviceModelIdentifier;
- (id)copyNearbyPairedDevice;
- (void)updateNearbyPairedDevice;
- (id)copyNearbyPairedDeviceProductName;
@end
