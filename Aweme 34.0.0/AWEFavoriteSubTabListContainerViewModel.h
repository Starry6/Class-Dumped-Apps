@interface AWEFavoriteSubTabListContainerViewModel : AWEBaseTabListViewModel
@property (nonatomic) AWEFavoriteTabItemModel superTabItemModel;
@property (nonatomic) AWEFavoriteTabItemModel currentSelectedTabItemModel;
@property (nonatomic) q tabStatus;
@property (nonatomic) UIViewController<AWETabListItemViewControllerProtocol> currentTabViewController;
@property (nonatomic) UIViewController<AWETabListItemViewControllerProtocol> lastSelectedViewController;
@property (nonatomic) {CGPoint=dd} lastContentOffset;
@property (nonatomic) {CGPoint=dd} currentContentOffsetChange;
@property (nonatomic) AWEFavoriteTabListDataContext dataContext;
@property (nonatomic) AWEFavoriteSubTabListTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupViewModel;
- (void)containerViewDidAppear;
- (void)containerViewDidDisappear;
- (id)dataContext;
- (void)containerViewWillDisappear;
- (void)setDataContext:;
- (id)currentTabViewController;
- (long long)tabStatus;
- (void)setTabStatus:;
- (void)updateWithSuperTabItemModel:;
- (void)containerViewWillAppear;
- (long long)tabIndexWithTabType:;
- (id)currentSelectedTabItemModel;
- (id)getTabItemModelAtIndex:;
- (void)didSelectTabModelAtIndex:selectedType:vc:;
- (void)visibleItemsWithIndexs:;
- (void)exposeItemWithIndex:exposeType:;
- (void)hasLayoutAllItems;
- (void)reloadTabItemModel;
- (id)lastSelectedViewController;
- (void)changeContentOffsetIfNeed:lastContentOffset:;
- (BOOL)valideTabContentVC:;
- (void)setLastSelectedViewController:;
- (void)setSuperTabItemModel:;
- (id)subTabModels;
- (id)getTabItemModelWithType:;
- (id)superTabItemModel;
- (void)setCurrentSelectedTabItemModel:;
- (void)refreshCurrentViewControllerIfNeed:;
- (void)setCurrentTabViewController:;
- (void)setCurrentContentOffsetChange:;
- (id)currentContentOffsetChange;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
- (void)containerViewDidLayoutSubviews;
- (id)lastContentOffset;
- (void)setLastContentOffset:;
- (void)containerViewDidLoad;
@end
