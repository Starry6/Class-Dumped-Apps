@interface AWEProfileMixVideoListViewController : UIViewController
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) AWEButton shareBtn;
@property (nonatomic) UITableView tableView;
@property (nonatomic) UILabel emptyLabel;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) AWEProfileMixDataManager manager;
@property (nonatomic) AWELoadMoreFooter footer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (void)setEnterMethod:;
- (BOOL)configWithRouterParamDict:;
- (void)setReferString:;
- (id)enterMethod;
- (void)loadMore;
- (BOOL)isAppear;
- (void)setIsAppear:;
- (id)shareBtn;
- (void)setShareBtn:;
- (void)hideNavigationBar;
- (void)backBtnClicked:;
- (void)onShareBtnClicked:;
- (id)initWithDataManager:;
- (void)p_mixLiveCellTrackerWithUser:isClick:;
- (void)removePlayletDataSourceIfNeeded:;
- (BOOL)prefersStatusBarHidden;
- (id)footer;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setManager:;
- (long long)tableView:numberOfRowsInSection:;
- (id)init;
- (void)dealloc;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (id)manager;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setFooter:;
- (void)refreshData;
- (id)emptyLabel;
- (void)setEmptyLabel:;
@end
