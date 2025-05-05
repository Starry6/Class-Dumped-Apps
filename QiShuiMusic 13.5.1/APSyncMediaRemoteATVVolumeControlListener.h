@interface APSyncMediaRemoteATVVolumeControlListener : NSObject
- (void)dealloc;
- (id)initWithContextAndCallback:callbackContext:;
- (void)_volumeControlTypeChanged:;
@end
