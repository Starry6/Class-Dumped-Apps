@interface AWEBindPhoneAlertManager : NSObject
@property (nonatomic) UIWindow window;
@property (nonatomic) UIWindow lastKeyWindow;
@property (nonatomic) UIViewController windowRootViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)lastKeyWindow;
- (void)setLastKeyWindow:;
- (id)windowRootViewController;
- (void)setWindowRootViewController:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)window;
- (void)setWindow:;
+ (BOOL)shouldShowAlertWithType:;
+ (void)showBindPhoneAlertWithType:confirmBlock:cancelBlock:;
+ (void)showBindPhoneAlertWithType:cancelTitle:confirmTitle:subtitle:confirmBlock:cancelBlock:presentHandler:;
+ (BOOL)checkAndShowBindPhoneAlertWithType:confirmBlock:cancelBlock:;
+ (BOOL)checkAndShowBindPhoneAlertWithPrivacyType:;
+ (id)sharedInstance;
+ (void)start;
@end
