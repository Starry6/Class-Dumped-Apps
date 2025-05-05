@interface IAPAudioCallbackInfo : NSObject
- (id)init;
- (void)dealloc;
- (void)_handleiAPDaemonDied:;
- (void)_deviceStateChanged:;
- (void)_volumeChanged:;
- (void)_pauseOnHeadphoneDisconnectChanged:;
- (void)_volumeControlSupportChanged:;
- (void)setupDeviceStateChangedCallback:withContext:andRunLoop:;
- (void)clearDeviceStateChangedCallback;
- (void)setupVolumeChangedCallback:withContext:andRunLoop:;
- (void)clearVolumeChangedCallback;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:withContext:andRunLoop:;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)setupVolumeControlSupportChangedCallback:withContext:andRunLoop:;
- (void)clearVolumeControlSupportChangedCallback;
- (void)startNotificationCenterOnRunLoop:;
+ (id)sharedInstance;
@end
