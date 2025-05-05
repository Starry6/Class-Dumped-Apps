@interface AFMediaRemoteDeviceInfo : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (id)init;
- (void)getRouteIdentifierWithCompletion:;
- (id)serialQueue;
- (void)_updateWithRouteIdentifier:groupIdentifier:;
- (void).cxx_destruct;
- (void)_activeDeviceInfoChanged:;
- (void)setSerialQueue:;
- (void)_getMRDeviceInfoWithCompletion:;
- (void)getGroupIdentifierWithCompletion:;
+ (id)currentDevice;
+ (id)localDeviceInfo;
@end
