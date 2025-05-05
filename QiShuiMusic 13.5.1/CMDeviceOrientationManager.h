@interface CMDeviceOrientationManager : NSObject
- (id)init;
- (id)stringForOrientation:;
- (void)dealloc;
- (void)onMotionPreferencesUpdated;
- (void)signalAndReleaseSemaphoreIfNecessaryPrivate;
- (void)onDeviceOrientation:;
- (void)start;
- (id)initPrivate;
- (void)onNotification:;
- (void)startDeviceOrientationUpdatesPrivateToQueue:withHandler:;
- (BOOL)isDeviceOrientationAvailable;
- (void)stop;
- (void)deallocPrivate;
- (void)setDeviceOrientationCallbackModePrivate:;
- (void)stopDeviceOrientationUpdates;
- (void)startDeviceOrientationUpdatesToQueue:withHandler:;
- (BOOL)orientationNotificationsDisabled;
- (void)updateAggregateDictionaryPrivate;
- (void)stopDeviceOrientationUpdatesPrivate;
- (id)deviceOrientationBlocking;
- (BOOL)isDeviceOrientationActive;
+ (void)dummySelector:;
+ (BOOL)isAlwaysOn;
+ (BOOL)isAvailable;
@end
