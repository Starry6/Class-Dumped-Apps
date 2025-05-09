@interface RUINavigationController : UINavigationController
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) RUIStyle style;
@property (nonatomic) Q ruiModalPresentationStyle;
@property (nonatomic) UIViewController hostViewController;
@property (nonatomic) @? menuDismissalHandler;
@property (nonatomic) @? viewDidDisappearHandler;
- (void)setStyle:;
- (void)dismissViewControllerAnimated:completion:;
- (void)viewDidDisappear:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (unsigned long long)ruiModalPresentationStyle;
- (BOOL)isDismissing;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)style;
- (void)viewDidLoad;
- (void)setSupportedInterfaceOrientations:;
- (void)setIsDismissing:;
- (BOOL)canBeShownFromSuspendedState;
- (id)hostViewController;
- (void)setHostViewController:;
- (void)_menuButtonPressed:;
- (void)setRuiModalPresentationStyle:;
- (id)menuDismissalHandler;
- (void)setMenuDismissalHandler:;
- (id)viewDidDisappearHandler;
- (void)setViewDidDisappearHandler:;
@end
