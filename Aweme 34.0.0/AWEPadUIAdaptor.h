@interface AWEPadUIAdaptor : NSObject
@property (nonatomic) q orientation;
@property (nonatomic) BOOL didEnterBackGround;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL rotateLockOn;
- (void)__setupNotifications;
- (void)setHooksForRotationControl;
- (void)onApplicationWillEnterForeground:;
- (void)onApplicationDidChangeStatusBarOrientation:;
- (void)setDidEnterBackGround:;
- (void)setRotationEnvironmentWithEnable:;
- (void)setRotateLockOn:;
- (BOOL)rotateLockOn;
- (BOOL)didEnterBackGround;
- (BOOL)enable;
- (id)init;
- (void)setOrientation:;
- (void)dealloc;
- (long long)orientation;
- (void)onApplicationDidEnterBackground:;
+ (BOOL)awe_isDeviceVertical;
+ (BOOL)awe_isIpad;
+ (unsigned long long)awe_interfaceOrientationMaskFrom:;
+ (id)sharedInstance;
@end
