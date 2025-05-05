@interface ASOOverlayManager : NSObject
@property (nonatomic) ASOOverlayWindow window;
@property (nonatomic) ASOOverlayViewController viewController;
@property (nonatomic) UIScene _scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithWindowScene:;
- (id)_scene;
- (id)initWithScene:;
- (void)setViewController:;
- (void)_setScene:;
- (id)viewController;
- (void).cxx_destruct;
- (id)window;
- (void)dismissOverlay;
- (void)presentOverlay:;
- (void)willStartPresentingOverlay;
- (void)didFinishDismissingOverlay;
- (id)makeViewControllerIfNeeded;
@end
