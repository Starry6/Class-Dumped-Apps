@interface AWEUGWidgetSupportModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (BOOL)onHandleAppOpenUrl;
+ (void)liveActivitySDKRegister;
+ (unsigned long long)priority;
@end
