@interface UIDebuggingInformationOverlayViewController : UIViewController
@property (nonatomic) {CGPoint=dd} offset;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIDebuggingInformationRootTableViewController rootTableViewController;
@property (nonatomic) BOOL isFullscreen;
- (void)setOffset:;
- (id)containerView;
- (id)offset;
- (void).cxx_destruct;
- (BOOL)isFullscreen;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:bundle:;
- (void)toggleFullscreen;
- (id)rootTableViewController;
- (void)setRootTableViewController:;
- (void)setIsFullscreen:;
- (void)didReceiveGesture:;
@end
