@interface UIPrintPanelNavigationController : UINavigationController
@property (nonatomic) <UIPrintPanelAppearanceDelegate> appearanceDelegate;
@property (nonatomic) UIPrintOptionsTableViewController printOptionsTableViewController;
- (void)setAppearanceDelegate:;
- (id)appearanceDelegate;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:;
- (void)_presentationControllerDidDismiss:;
- (id)initWithPrintOptionsTableViewController:rootViewController:;
- (id)printOptionsTableViewController;
- (void)setPrintOptionsTableViewController:;
+ (BOOL)_preventsAppearanceProxyCustomization;
@end
