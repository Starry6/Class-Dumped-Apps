@interface AWECoCreatorBaseViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString fromPage;
@property (nonatomic) UIViewController containerVC;
- (id)referString;
- (void)setReferString:;
- (void)setFromPage:;
- (void)setContainerVC:;
- (id)containerVC;
- (void)setTableView:;
- (id)tableView;
- (void).cxx_destruct;
- (void)dismissSheet;
- (id)fromPage;
@end
