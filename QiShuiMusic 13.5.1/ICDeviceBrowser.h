@interface ICDeviceBrowser : NSObject
@property (nonatomic) BOOL browsing;
@property (nonatomic) NSMutableArray internalDevices;
@property (nonatomic) Q internalBrowsedDeviceTypeMask;
@property (nonatomic) {os_unfair_lock_s=I} devicesLock;
@property (nonatomic) BOOL suspended;
@property (nonatomic) <ICDeviceBrowserDelegate> delegate;
@property (nonatomic) Q browsedDeviceTypeMask;
@property (nonatomic) NSArray devices;
- (id)init;
- (void)dealloc;
- (void)start;
- (id)devices;
- (void)setDelegate:;
- (void)stop;
- (void)setBrowsing:;
- (BOOL)isSuspended;
- (id)delegate;
- (BOOL)containsDevice:;
- (void)setSuspended:;
- (id)preferredDevice;
- (BOOL)isBrowsing;
- (void)resetContentsAuthorizationWithCompletion:;
- (void)resetControlAuthorizationWithCompletion:;
- (unsigned long long)browsedDeviceTypeMask;
- (void)setBrowsedDeviceTypeMask:;
- (void)addDevice:moreComing:;
- (void)removeDevice:moreGoing:;
- (id)deviceWithRef:;
- (id)contentsAuthorizationStatus;
- (void)requestContentsAuthorizationWithCompletion:;
- (id)controlAuthorizationStatus;
- (void)requestControlAuthorizationWithCompletion:;
- (id)internalDevices;
- (void)setInternalDevices:;
- (unsigned long long)internalBrowsedDeviceTypeMask;
- (void)setInternalBrowsedDeviceTypeMask:;
- (id)devicesLock;
- (void)setDevicesLock:;
@end
