@interface AWEIronManLandingPageViewController : UIViewController
@property (nonatomic) Q enterFrom;
@property (nonatomic) NSDictionary bdpExtra;
@property (nonatomic) NSDictionary homepageParamDict;
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIButton searchButton;
@property (nonatomic) UITableView tableView;
@property (nonatomic) UIImageView backgroundImage;
@property (nonatomic) AWENavigationBar naviBar;
@property (nonatomic) AWEIronManLandingPageFooterView footerView;
@property (nonatomic) AWEIronManLandingPageDataEmptyView emptyView;
@property (nonatomic) Q countOfSections;
@property (nonatomic) AWEIronManLandingPageDeepRelationViewModel deepRelationModel;
@property (nonatomic) AWEIronManLandingPageRecentlyUsedViewModel recentlyUsedModel;
@property (nonatomic) AWEIronManLandingPageCollectionViewModel collectionModel;
@property (nonatomic) AWEIronManLandingPageDiscoveryBannerViewModel discoveryModel;
@property (nonatomic) NSString extraMicroAppId;
@property (nonatomic) double enterTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transition_didPopDoneTransitionWithContext:;
- (void)setEnterFrom:;
- (BOOL)configWithRouterParamDict:;
- (unsigned long long)enterFrom;
- (void)addNotifications;
- (id)naviBar;
- (void)setNaviBar:;
- (void)backButtonDidClick:;
- (id)bdpExtra;
- (void)setBdpExtra:;
- (void)trackSearchButtonDidClick;
- (void)searchButtonDidCLick:;
- (void)setExtraMicroAppId:;
- (void)setHomepageParamDict:;
- (id)homepageParamDict;
- (void)setDeepRelationModel:;
- (void)setRecentlyUsedModel:;
- (void)setCollectionModel:;
- (id)deepRelationModel;
- (id)collectionModel;
- (id)recentlyUsedModel;
- (void)trackLandingPageLeave;
- (void)trackLandingPageShow;
- (void)p_fetchSidebarGuidanceAndShow;
- (id)extraMicroAppId;
- (void)configTableViewDataSource;
- (void)p_configTableViewDataSourceForHomePageEntrance;
- (void)p_configTableViewDataSourceForOldVersionEntrance;
- (void)addDeepRelationSection;
- (void)addRecentlyUsedSection;
- (void)addCollectionSection;
- (void)addDiscoveryBannerSection;
- (void)setBaseViewModel:;
- (unsigned long long)countOfSections;
- (void)setCountOfSections:;
- (void)setDiscoveryModel:;
- (id)discoveryModel;
- (id)backButton;
- (id)backgroundImage;
- (id)tableView:cellForRowAtIndexPath:;
- (void)fetchData;
- (long long)tableView:numberOfRowsInSection:;
- (void)setBackgroundImage:;
- (id)searchButton;
- (void)setFooterView:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)footerView;
- (void)setTableView:;
- (void)addObserver;
- (void)viewDidLoad;
- (void)setBackButton:;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (id)tableView;
- (void)removeNotifications;
- (void)scrollViewDidScroll:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)viewDidAppear:;
- (double)tableView:heightForHeaderInSection:;
- (void)setSearchButton:;
- (double)tableView:heightForFooterInSection:;
- (id)emptyView;
- (void)setEmptyView:;
- (void)themeDidChange;
- (double)enterTime;
- (void)setEnterTime:;
- (void)setUpUI;
@end
