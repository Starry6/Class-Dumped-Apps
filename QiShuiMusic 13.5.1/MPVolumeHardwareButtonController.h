@interface MPVolumeHardwareButtonController : NSObject
@property (nonatomic) <MPVolumeControllerDataSource> activeDataSource;
- (void)handleVolumeButtonWithType:down:;
- (void)increaseVolume;
- (void)_registerForButtonNotificationsIfNeeded;
- (void)_commitVolumeChange;
- (void)_volumeUpButtonTouchUp:;
- (void)_changeVolumeBy:;
- (void)cancelVolumeEvent;
- (void)_volumeDownButtonTouchDown:;
- (double)_calculateButtonRepeatDelay;
- (void)setActiveDataSource:;
- (void)decreaseVolume;
- (id)activeDataSource;
- (void)handleVolumeUpButton;
- (void)_volumeUpButtonTouchDown:;
- (void)_applicationDidBecomeActiveNotification;
- (void)_volumeDownButtonTouchUp:;
- (void).cxx_destruct;
- (void)_applicationWillResignActiveNotification;
- (id)_init;
- (void)_unregisterForButtonNotificationsIfNeeded;
- (void)handleVolumeDownButton;
+ (id)sharedController;
@end
