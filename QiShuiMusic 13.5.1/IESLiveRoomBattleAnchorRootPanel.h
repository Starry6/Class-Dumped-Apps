@interface IESLiveRoomBattleAnchorRootPanel : IESLiveInteractionPopupViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) IESLiveRoomBattleRootViewModel viewModel;
@property (nonatomic) <IESLiveRoomBattleProvider> roomBattleProvider;
@property (nonatomic) IESLiveTableViewSectionAdapter adapter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRequestPage:DIContext:;
- (void)onSetupNavBar:;
- (void)reloadSection:loadingIndexSet:;
- (id)roomBattleProvider;
- (id)sectionControllerForAdapter:;
- (void)setRoomBattleProvider:;
- (void)showSettingPanel;
- (id)viewModel;
- (id)adapter;
- (void).cxx_destruct;
- (void)setTableView:;
- (void)setViewModel:;
- (id)tableView;
- (void)viewDidLoad;
- (void)binding;
- (void)setupUI;
- (void)setAdapter:;
@end
