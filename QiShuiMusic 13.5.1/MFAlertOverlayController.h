@interface MFAlertOverlayController : NSObject
@property (nonatomic) UIWindow overlayWindow;
@property (nonatomic) UIWindowScene scene;
@property (nonatomic) BOOL isPresentingAlert;
@property (nonatomic) UIAlertController topmostPresentedAlert;
- (id)initWithWindowScene:;
- (void)dealloc;
- (id)scene;
- (void).cxx_destruct;
- (void)presentAlertController:animated:completion:;
- (void)_handlePresentationDismissalNotification:;
- (BOOL)isPresentingAlert;
- (id)topmostPresentedAlert;
- (id)_topmostViewController;
- (id)_bottomPresentedAlert;
- (void)_setupOverlayWindowWithScene:;
- (void)_teardownOverlayWindow;
- (id)overlayWindow;
- (void)setOverlayWindow:;
+ (id)log;
@end
