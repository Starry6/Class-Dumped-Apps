@interface AWEPadUIAdaptor : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL levelTwoPageShouldToPortrait;
- (void)__setupNotifications;
- (BOOL)levelTwoPageShouldToPortrait;
- (void)onApplicationWillEnterForeground:;
- (BOOL)enable;
- (id)init;
- (void)dealloc;
- (void)onApplicationDidEnterBackground:;
+ (unsigned long long)awe_interfaceOrientationMaskFrom:;
+ (BOOL)awe_isDeviceVertical;
+ (BOOL)awe_isIpad;
+ (id)sharedInstance;
@end
