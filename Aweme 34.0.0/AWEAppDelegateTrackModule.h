@interface AWEAppDelegateTrackModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)onAppWillEnterForeground;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (BOOL)writeLog;
+ (BOOL)enableFullLaunchLogCompensate;
+ (unsigned long long)priority;
@end
