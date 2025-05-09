@interface AWENewVersionAlertManager : NSObject
@property (nonatomic) UIWindow window;
@property (nonatomic) UIWindow lastKeyWindow;
@property (nonatomic) UIViewController windowRootViewController;
@property (nonatomic) BOOL alertViewIsShown;
- (id)lastKeyWindow;
- (void)setLastKeyWindow:;
- (id)windowRootViewController;
- (void)setWindowRootViewController:;
- (void)checkAppNewVersion;
- (BOOL)isNewVersionAlertShowing;
- (void)setAlertViewIsShown:;
- (void)splashDidFinished;
- (BOOL)alertViewIsShown;
- (void)checkAppNewVersionInhouseWithDelay;
- (void)checkAppNewVersionTestFlight;
- (void)checkInhouseNewVersionWithDelay;
- (void)getTFLinkResponseCompletion:;
- (void)hideWindow;
- (void)showAlertViewWithInfo:confirmAction:cancelAction:;
- (void)checkInhouseNewVersion;
- (void)checkAppNewVersionInhouse;
- (id)inhouseVersionURL;
- (void)dealloc;
- (void).cxx_destruct;
- (id)window;
- (void)setWindow:;
- (id)buildVersionString;
+ (id)sharedInstance;
@end
