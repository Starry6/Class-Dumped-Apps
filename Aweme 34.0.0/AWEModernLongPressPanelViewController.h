@interface AWEModernLongPressPanelViewController : UIViewController
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWELongPressPanelConfiguration panelConfiguration;
@property (nonatomic) UITableViewController<AWELongPressPanelTableViewControllerProtocol> panelTableViewController;
@property (nonatomic) @? dismissedHandler;
@property (nonatomic) @? willDismissedHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)sheet:didChangeFrame:withUserInteraction:;
- (id)panelTableViewController;
- (void)panelDidShow;
- (double)getLongPressPanelMaxHeight;
- (id)willDismissedHandler;
- (void)upDatePanelViewHeigth;
- (void)setPanelConfiguration:;
- (void)setPanelTableViewController:;
- (void)setWillDismissedHandler:;
- (id)panelConfiguration;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)dismissedHandler;
- (void)setDismissedHandler:;
- (void)setupUI;
+ (id)LongPressPanelViewControllerWithModel:configuration:;
@end
