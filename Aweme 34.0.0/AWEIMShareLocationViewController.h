@interface AWEIMShareLocationViewController : UIViewController
@property (nonatomic) MKMapView mapView;
@property (nonatomic) AWESearchBar searchBar;
@property (nonatomic) UIView searchBarContainerView;
@property (nonatomic) UIButton sendButton;
@property (nonatomic) UITableView locationTableView;
@property (nonatomic) MKAnnotationView userLocationView;
@property (nonatomic) UIButton setUserLocationCenterButton;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) MKPointAnnotation centerAnnotation;
@property (nonatomic) MKAnnotationView centerAnnotationView;
@property (nonatomic) MKAnnotationView helpCenterAnnotationView;
@property (nonatomic) AWEIMAroundPOIManagerWrapper searchAroundManager;
@property (nonatomic) AWEIMKeywordsPOIManagerWrapper searchKeywordManager;
@property (nonatomic) AWELocationService locationService;
@property (nonatomic) NSArray aroundResultPoisArray;
@property (nonatomic) UIView searchLoadingView;
@property (nonatomic) AWEUITextLoadingView searchLoadingAnimatingView;
@property (nonatomic) UILabel noMoreDataLabel;
@property (nonatomic) BOOL isUserHasSelectedPoi;
@property (nonatomic) BOOL isCenterUserLocation;
@property (nonatomic) BOOL isUserLocation;
@property (nonatomic) BOOL isUserSetCenterToUserLocation;
@property (nonatomic) BOOL hasGotSearchResults;
@property (nonatomic) BOOL hasSearched;
@property (nonatomic) BOOL isNeedSearchWhileMapDidMoved;
@property (nonatomic) BOOL isNeedChangeCurrentPoi;
@property (nonatomic) BOOL hasSent;
@property (nonatomic) {CLLocationCoordinate2D=dd} userCoordinate;
@property (nonatomic) NSString currentCityCode;
@property (nonatomic) AWEIMPoiItem currentPoi;
@property (nonatomic) AWEIMPoiItem lastSelectedSearchResultPoi;
@property (nonatomic) {CLLocationCoordinate2D=dd} lastSearchCoordinate;
@property (nonatomic) UIView snapShotView;
@property (nonatomic) FBKVOController searchKVO;
@property (nonatomic) q searchResultPage;
@property (nonatomic) AWEIMShareLocationSearchViewController searchViewController;
@property (nonatomic) NSArray keywordsResultArray;
@property (nonatomic) BOOL mapChangedFromUserInteraction;
@property (nonatomic) BOOL isNearbySearchTriggeredByKeywordResult;
@property (nonatomic) BOOL firstLoad;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) AWEUITheme globalTheme;
@property (nonatomic) BOOL hasMoved;
@property (nonatomic) BOOL hasSearchedByKeyword;
@property (nonatomic) q selectedIndexOfSearchResult;
@property (nonatomic) q selectedIndexOfMapResult;
@property (nonatomic) BOOL enablePOIOptimize;
@property (nonatomic) double snapApiCostTime;
@property (nonatomic) NSString searchBarText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentCityCode;
- (id)locationService;
- (BOOL)isUserLocation;
- (void)setIsUserLocation:;
- (void)setHasMoved:;
- (void)reachabilityDidChange;
- (void)p_setupData;
- (void)setSearchBarContainerView:;
- (id)searchAroundManager;
- (void)searchPoiManager:dataSourceDidChange:isLoadMore:;
- (void)setSearchAroundManager:;
- (void)setSearchKVO:;
- (id)searchKVO;
- (void)p_setupNavigationBar;
- (id)setUserLocationCenterButton;
- (id)snapShotView;
- (void)setSnapShotView:;
- (void)setGlobalTheme:;
- (id)globalTheme;
- (void)setUserCoordinate:;
- (id)userCoordinate;
- (void)setUserLocationCenterAction;
- (void)setSetUserLocationCenterButton:;
- (id)noMoreDataLabel;
- (void)searchViewController:searchContentDidChange:;
- (void)setNoMoreDataLabel:;
- (void)startSearchAroundPOI:;
- (id)locationTableView;
- (id)searchLoadingView;
- (id)createCenterAnnontationView:annotation:;
- (BOOL)hasSearched;
- (void)showSearchLoadingView;
- (void)sendSelectedPoi;
- (void)setHasSearched:;
- (void)setHasGotSearchResults:;
- (id)centerAnnotation;
- (BOOL)isNearbySearchTriggeredByKeywordResult;
- (id)currentPoi;
- (void)setAroundResultPoisArray:;
- (id)searchKeywordManager;
- (void)sendLocation:error:isTimeOut:;
- (BOOL)hasSent;
- (void)setHasSent:;
- (double)snapApiCostTime;
- (id)aroundResultPoisArray;
- (void)setCurrentPoi:;
- (void)setKeywordsResultArray:;
- (void)showSearchVC;
- (void)setIsUserHasSelectedPoi:;
- (BOOL)isUserSetCenterToUserLocation;
- (void)showHelpCenterAnotation:;
- (void)setIsNeedChangeCurrentPoi:;
- (void)setIsNeedSearchWhileMapDidMoved:;
- (void)setIsUserSetCenterToUserLocation:;
- (void)setHasSearchedByKeyword:;
- (id)centerAnnotationView;
- (id)p_coordinateString:;
- (void)setIsNearbySearchTriggeredByKeywordResult:;
- (BOOL)hasSearchedByKeyword;
- (long long)selectedIndexOfMapResult;
- (long long)selectedIndexOfSearchResult;
- (void)setSnapApiCostTime:;
- (void)sendLocationForTimeOut;
- (id)finalSnapShotImageWithImage:;
- (double)metersBetweenCoordinate:coord2:;
- (id)lastSearchCoordinate;
- (BOOL)hasGotSearchResults;
- (id)searchLoadingAnimatingView;
- (void)setSearchLoadingAnimatingView:;
- (id)helpCenterAnnotationView;
- (id)keywordsResultArray;
- (void)setSelectedPOI:fromKeywordSearch:;
- (void)setSelectedIndexOfMapResult:;
- (id)searchedPoiObjectForRowAtIndexPath:;
- (void)setLastSelectedSearchResultPoi:;
- (void)setSelectedIndexOfSearchResult:;
- (void)setLastSearchCoordinate:;
- (id)lastSelectedSearchResultPoi;
- (id)insertSelectedPOI:reRrder:;
- (BOOL)isNeedChangeCurrentPoi;
- (id)defaultPoi:;
- (id)searchBarText;
- (void)setSearchBarText:;
- (BOOL)mapViewRegionDidChangeFromUserInteraction:;
- (void)setMapChangedFromUserInteraction:;
- (BOOL)mapChangedFromUserInteraction;
- (void)checkIsUserLocationCenter;
- (BOOL)isNeedSearchWhileMapDidMoved;
- (void)setCenterAnnotationView:;
- (void)setCurrentCityCode:;
- (BOOL)isUserHasSelectedPoi;
- (void)startSearchKeywordsPoi:;
- (void)searchBarTapped;
- (long long)searchResultPage;
- (void)p_keywordSearchLoadMore:count:;
- (void)setLocationTableView:;
- (void)setCenterAnnotation:;
- (void)setHelpCenterAnnotationView:;
- (void)setSearchKeywordManager:;
- (void)setLocationService:;
- (void)setSearchLoadingView:;
- (BOOL)isCenterUserLocation;
- (void)setIsCenterUserLocation:;
- (void)setSearchResultPage:;
- (BOOL)enablePOIOptimize;
- (void)setEnablePOIOptimize:;
- (void)viewWillDisappear:;
- (id)tableView:cellForRowAtIndexPath:;
- (id)searchBar;
- (long long)tableView:numberOfRowsInSection:;
- (void)setUserLocationView:;
- (id)searchBarContainerView;
- (void)dealloc;
- (id)searchViewController;
- (id)tableView:willSelectRowAtIndexPath:;
- (void)setSearchViewController:;
- (void)viewWillLayoutSubviews;
- (void)setAvatarView:;
- (void)setSearchBar:;
- (void)setMapView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)viewDidLoad;
- (void)stopLoading;
- (BOOL)gestureRecognizer:shouldReceiveEvent:;
- (id)avatarView;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)dismiss;
- (id)defaultName;
- (long long)preferredStatusBarStyle;
- (id)mapView;
- (id)userLocationView;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)dismissViewController:;
- (BOOL)searchBarShouldBeginEditing:;
- (id)conversation;
- (void)setConversation:;
- (void)mapView:didFailToLocateUserWithError:;
- (void)mapView:didUpdateUserLocation:;
- (void)mapView:regionDidChangeAnimated:;
- (void)mapView:regionWillChangeAnimated:;
- (id)mapView:viewForAnnotation:;
- (void)mapViewDidChangeVisibleRegion:;
- (id)sendButton;
- (void)setSendButton:;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
- (BOOL)firstLoad;
- (void)setFirstLoad:;
- (BOOL)hasMoved;
- (void)sendLocation:;
- (id)dismissBlock;
- (void)setDismissBlock:;
+ (void)presentLocation:shareLocationVCFromPresentingVC:inConversation:dissmissBlock:;
@end
