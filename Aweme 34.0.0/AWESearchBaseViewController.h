@interface AWESearchBaseViewController : UIViewController
@property (nonatomic) NSString correctName;
@property (nonatomic) AWESearchHarmfulCategoryManager harmfulCategoryManager;
@property (nonatomic) AWESearchResultViewController searchResultViewController;
@property (nonatomic) <AWESearchChildViewControllerResultFilterProtocol> delegate;
@property (nonatomic) <AWESearchActionListenerProtocol> listener;
@property (nonatomic) AWESearchTabConfig tabConfig;
@property (nonatomic) AWESearchUtility searchUtility;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEPadSideView backgroundViewLeft;
@property (nonatomic) AWEPadSideView backgroundViewRight;
@property (nonatomic) AWESearchCorrectView suggestView;
@property (nonatomic) BOOL fromHotSearch;
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) NSMutableArray displayIDs;
@property (nonatomic) BOOL fromGeneralSearchMoreClick;
@property (nonatomic) NSString refer;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString currentPage;
@property (nonatomic) MJRefreshHeader refreshHeader;
@property (nonatomic) NSString tokenType;
@property (nonatomic) NSString clickMoreMethod;
@property (nonatomic) q searchQueryInputTime;
@property (nonatomic) q searchButtonPressDuration;
@property (nonatomic) q searchButtonClickPositionX;
@property (nonatomic) q searchButtonClickPositionY;
@property (nonatomic) NSObject<AWESearchFeelGoodManagerProtocol> surveyManager;
@property (nonatomic) AWETrackerContext trackerContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWESearchSchemaModel routerModel;
@property (nonatomic) @? searchTabsUpdateBlock;
@property (nonatomic) BOOL isFilterSearch;
@property (nonatomic) Q publishTime;
@property (nonatomic) Q sortType;
@property (nonatomic) Q refreshType;
@property (nonatomic) BOOL dismissTabBottomLine;
@property (nonatomic) AWESearchFloatingBackgroundView floatingBackgroundView;
@property (nonatomic) AWESearchEasterEggView easterEggView;
@property (nonatomic) q searchTabFeedType;
@property (nonatomic) NSString personalSearchChannel;
@property (nonatomic) NSString personalTrackTabType;
@property (nonatomic) NSString userID;
@property (nonatomic) @? isShowingMiddlePageBlock;
@property (nonatomic) @? sugSessionIDBlock;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageEdgeInsets;
- (void)setAweui_viewControllerState:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (BOOL)aweui_sf_enableErrorButtonLimit;
- (void)setRefer:;
- (id)tabConfig;
- (void)setTabConfig:;
- (id)refer;
- (void)setTrackerContext:;
- (void)setRefreshHeader:;
- (id)correctName;
- (void)setCorrectName:;
- (id)searchEnterMethod;
- (void)handleJSBroadcast:;
- (id)refreshHeader;
- (id)trackerContext;
- (id)suggestView;
- (id)harmfulCategoryManager;
- (void)saveSearchWord:wordType:;
- (id)routerModel;
- (void)setRouterModel:;
- (void)saveSearchWord:wordType:extraParams:;
- (void)fetchDataWithKeyWord:enterFrom:extraLogParams:isSearchByUserClick:animated:completion:;
- (void)fetchDataCompletion;
- (id)getCurrentLogId;
- (id)clickMoreMethod;
- (long long)searchQueryInputTime;
- (void)setSearchQueryInputTime:;
- (id)surveyManager;
- (void)setSurveyManager:;
- (void)setHarmfulCategoryManager:;
- (id)searchUtility;
- (void)setSearchUtility:;
- (void)suggestWordComplementDidTapped:;
- (void)refreshAfterLoginIfNeeded;
- (BOOL)checkHitLimit:;
- (void)checkHarmfulCategory:;
- (void)showBlankView;
- (void)setSuggestView:;
- (id)suggestViewWithCorrectionModel:;
- (void)changeSearchBarText:;
- (void)attributesForTrackSearchEventWithKeyWord:enterFrom:extraLogParams:;
- (BOOL)fromHotSearch;
- (void)setFromHotSearch:;
- (void)hideBlankView;
- (void)trackFreqControlShow:;
- (void)trackDisplayEvent;
- (id)backgroundViewLeft;
- (id)backgroundViewRight;
- (void)setBackgroundViewLeft:;
- (void)setBackgroundViewRight:;
- (void)historyWordDidTapped:;
- (void)suggestWordDidTapped:;
- (void)showBlankViewWithHotSearch:;
- (void)setDisplayIDs:;
- (void)p_configureUI;
- (void)trackDisplayEventForHotSearchOnEmptyView:order:isClicked:;
- (void)suggestWordDidTapped:extraLogParams:;
- (void)middleViewAppear;
- (void)setClickMoreMethod:;
- (long long)searchButtonPressDuration;
- (void)setSearchButtonPressDuration:;
- (long long)searchButtonClickPositionX;
- (void)setSearchButtonClickPositionX:;
- (long long)searchButtonClickPositionY;
- (void)setSearchButtonClickPositionY:;
- (void)hotSearchWordDidTapped:displayWord:;
- (void)irregularWordTapped:indexPath:;
- (void)irregularWordWillDisplay:indexPath:;
- (id)getCollectionEdgeInsets;
- (void)handleRNBroadcast:;
- (BOOL)fromGeneralSearchMoreClick;
- (void)setFromGeneralSearchMoreClick:;
- (void)setListener:;
- (void)becomeActive;
- (void)setTokenType:;
- (void)viewWillDisappear:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)fetchData;
- (long long)tableView:numberOfRowsInSection:;
- (void)dealloc;
- (id)delegate;
- (id)attributes;
- (void)viewDidLayoutSubviews;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)listener;
- (id)tableView;
- (id)searchResultViewController;
- (id)currentPage;
- (void)handleNotification:;
- (void)viewDidDisappear:;
- (void)setAttributes:;
- (void)setSearchResultViewController:;
- (void)setCurrentPage:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)reset;
- (void)setDelegate:;
- (id)tokenType;
- (id)displayIDs;
@end
