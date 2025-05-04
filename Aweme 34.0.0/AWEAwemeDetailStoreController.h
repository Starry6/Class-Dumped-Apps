@interface AWEAwemeDetailStoreController : AWEAwemeNewDetailBaseController
@property (nonatomic) AWEECommerceShopBottomBarView shopBottomBarView;
@property (nonatomic) BOOL hasShowShopBottomBar;
- (void)cellWillDisplay:forRowAtIndexPath:tableView:;
- (BOOL)hasShowShopBottomBar;
- (void)setShopBottomBarView:;
- (id)shopBottomBarView;
- (void)setHasShowShopBottomBar:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
