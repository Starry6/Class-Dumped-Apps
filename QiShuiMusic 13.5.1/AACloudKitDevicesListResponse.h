@interface AACloudKitDevicesListResponse : AAResponse
@property (nonatomic) NSArray incompatibleDevices;
@property (nonatomic) NSArray needUpgradeDevices;
@property (nonatomic) NSArray incompatibleDeviceNames;
@property (nonatomic) NSArray needUpgradeDeviceNames;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)incompatibleDevices;
- (id)needUpgradeDevices;
- (id)incompatibleDeviceNames;
- (id)needUpgradeDeviceNames;
@end
