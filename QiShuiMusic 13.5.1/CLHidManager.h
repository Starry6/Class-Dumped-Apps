@interface CLHidManager : NSObject
@property (nonatomic) <CLHidManagerDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) HIDManager manager;
@property (nonatomic) NSMutableArray clientDevices;
- (id)initWithDelegate:queue:;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegateQueue;
- (id)manager;
- (id)delegate;
- (void)sendMonitorUpdateForDevice:added:;
- (id)createDeviceForMatchingDictionary:;
- (void)updateClientDeviceWithHidDevice:added:;
- (void)activateClientDevice:;
- (id)getClientDeviceMatchingDict:;
- (id)getHidDeviceFromEnumeratedDevicesMatching:;
- (id)getClientDeviceMatchingHIDDevice:;
- (id)registerForDeviceMatching:;
- (void)unregisterForDeviceMatching:;
- (id)clientDevices;
- (void)setClientDevices:;
@end
