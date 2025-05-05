@interface CMHeadphoneMotionManager : NSObject
@property (nonatomic) <CMHeadphoneMotionManagerDelegate> delegate;
@property (nonatomic) BOOL deviceMotionAvailable;
@property (nonatomic) BOOL deviceMotionActive;
@property (nonatomic) CMDeviceMotion deviceMotion;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)stopDeviceMotionUpdatesPrivate;
- (BOOL)isDeviceMotionAvailable;
- (void)startDeviceMotionUpdatesToQueue:withHandler:;
- (id)delegate;
- (id)deviceMotion;
- (void).cxx_destruct;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (BOOL)isDeviceMotionActive;
- (id)delegateQueuePrivate;
- (void)startDeviceMotionUpdatesPrivateToQueue:withHandler:;
- (void)resumeDeviceMotionStreamingPrivate;
- (void)onDeviceMotionPrivate:;
- (void)onDeviceMotionEventPrivate:;
- (void)notifyDeviceConnectedEventToClientPrivate;
- (void)notifyDeviceDisconnectedEventToClientPrivate;
- (void)pauseDeviceMotionStreamingPrivate;
- (void)applyInitialReferencePrivate:;
+ (long long)authorizationStatus;
@end
