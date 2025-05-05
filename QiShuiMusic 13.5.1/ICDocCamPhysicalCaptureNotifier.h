@interface ICDocCamPhysicalCaptureNotifier : NSObject
@property (nonatomic) q state;
@property (nonatomic) q _volumeUpButtonState;
@property (nonatomic) q _volumeDownButtonState;
@property (nonatomic) <ICDocCamPhysicalCaptureNotifierDelegate> delegate;
@property (nonatomic) BOOL enabled;
- (id)init;
- (void)_setState:;
- (void)dealloc;
- (void)setDelegate:;
- (long long)state;
- (id)delegate;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)_handleVolumeUpButtonUpNotification:;
- (void)_handleVolumeUpButtonDownNotification:;
- (void)_handleVolumeDownButtonUpNotification:;
- (void)_handleVolumeDownButtonDownNotification:;
- (void)_updateCaptureButtonNotifications;
- (void)_setVolumeUpButtonState:;
- (void)_setVolumeDownButtonState:;
- (void)_updateStateAndNotifyDelegateIfNeeded;
- (long long)_volumeUpButtonState;
- (long long)_volumeDownButtonState;
@end
