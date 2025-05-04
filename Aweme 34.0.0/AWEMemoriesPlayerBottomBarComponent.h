@interface AWEMemoriesPlayerBottomBarComponent : AWEMemoriesPlayerBaseComponent
@property (nonatomic) AWEMemoriesPlayerBottomBarViewModel viewModel;
@property (nonatomic) AWEMemoriesPlayerBottomBarView bottomBarView;
@property (nonatomic) <AWEMemoriesPlayerCoreService> playerCoreService;
@property (nonatomic) AWEMemoriesPlayerDataController dataController;
@property (nonatomic) UIViewController<AWEMemoriesPlayerGridViewControllerProtocol> gridViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataController:;
- (void)componentDidLoad;
- (void)componentWillAppear;
- (void)setBottomBarView:;
- (id)serviceBinding;
- (void)setupWithMemoriesDataController:;
- (id)playerListViewController;
- (id)playerCoreService;
- (void)setPlayerCoreService:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)dataController;
- (id)gridViewController;
- (void)setGridViewController:;
- (id)bottomBarView;
@end
