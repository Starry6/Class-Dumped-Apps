@interface RemoteDeviceManager : NSObject
- (id)init;
- (void)dealloc;
- (void)disconnectDevice:;
- (void)sendMessage:args:;
@end
