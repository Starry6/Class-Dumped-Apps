@interface AWEMemoriesPlayerTopBarComponent : AWEMemoriesPlayerBaseComponent
@property (nonatomic) AWEMemoriesPlayerTopBarViewModel viewModel;
@property (nonatomic) AWEMemoriesPlayerTopBarView topBarView;
@property (nonatomic) <AWEMemoriesPlayerCoreService> playerCoreService;
@property (nonatomic) AWEMemoriesPlayerDataController dataController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataController:;
- (void)componentDidLoad;
- (void)bindObserver;
- (id)serviceBinding;
- (void)setupWithMemoriesDataController:;
- (id)playerCoreService;
- (void)setPlayerCoreService:;
- (void)closeMemoriesPlayer;
- (void)topBar:didClickedWithActionType:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)dataController;
- (void)setTopBarView:;
- (id)topBarView;
@end
