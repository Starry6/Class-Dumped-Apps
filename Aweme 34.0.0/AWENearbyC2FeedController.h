@interface AWENearbyC2FeedController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isFirstFetched;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isLiveWindowsWillShow;
@property (nonatomic) BOOL isLifeWindowsShowing;
@property (nonatomic) q normalRefreshCount;
@property (nonatomic) q schemaAutoPlayRefreshCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary previousPageContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary p_previousPageContext;
@property (nonatomic) NSMutableArray notFirstScreenLynxCellsInFirstLoad;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) AWENearbyC2FeedViewModel vm;
@property (nonatomic) BOOL isFirstFetched;
@property (nonatomic) AWENearbyPageContext pageContext;
@property (nonatomic) BOOL needInvalidateLayout;
@property (nonatomic) BOOL isHalfScreenShowing;
@property (nonatomic) BOOL isHalfScreenShowingStayPlay;
@property (nonatomic) q numberOfRefreshByManual;
@property (nonatomic) q refreshThresholdForFeedTopping;
@property (nonatomic) BOOL needToppingFeedAfterReload;
@property (nonatomic) Q refreshType;
@property (nonatomic) BOOL hasEnteredInnerPage;
@property (nonatomic) NSMutableSet p1aidPoiIds;
@property (nonatomic) NSMutableSet p1aidProductIds;
@property (nonatomic) NSString currentRecAfterClickAwemeID;
@property (nonatomic) NSMutableDictionary cellHeightCache;
@property (nonatomic) BOOL refreshFeedTopping;
@property (nonatomic) UICollectionViewCell<AWENearbyC2ContainerFeedCellProtocol> playingCell;
@property (nonatomic) <AWENearbyC2FeedDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isInitFetchFinish;
@property (nonatomic) BOOL willLoadTransformerCache;
- (id)referString;
- (void)loadMoreWithCompletion:;
- (void)configCell:index:model:;
- (void)playerDidReadyForDisplay:;
- (void)initFetchWithCompletion:;
- (id)modelForPlayer:;
- (BOOL)isHalfScreenShowing;
- (void)audienceEnterLiveRoom;
- (BOOL)enableAutoPlay;
- (long long)autoPlayAffectTime;
- (void)setupBinding;
- (void)audienceQuitAllRoomWithSlideVC:player:context:;
- (void)setDidAppear:;
- (void)deleteEndedLivedRoom:;
- (BOOL)lifeTabHasSmallLiveWindowWithPageType:;
- (void)setIsHalfScreenShowing:;
- (id)nearbyIdentifier;
- (id)initWithPageContext:;
- (id)playingCell;
- (id)playingCell;
- (void)playEnd:;
- (void)willExitInnerPage:;
- (void)willEnterInnerPage:;
- (void)cellHeightChangeWithAweme:height:;
- (BOOL)isFirstFetched;
- (void)setIsFirstFetched:;
- (void)cellUpdatePlayTime:totalTime:awemeModel:;
- (void)cellUpdateLivePlayTime:awemeModel:;
- (void)cellLynxResetActionType;
- (id)collectionView:layout:sectionLayoutConfigInSection:;
- (double)collectionView:layout:columnCountInSection:;
- (id)collectionView:layout:cellWidth:sizeForItemAtIndexPath:;
- (void)setIsInitFetchFinish:;
- (BOOL)isInitFetchFinish;
- (void)nearbyContainerWillAppear;
- (void)nearbyContainerDidAppearWithPageType:;
- (void)nearbyContainerDidDisappear;
- (void)nearbyContainerEnterBackground;
- (void)nearbyContainerEnterForeground;
- (void)containerscrollViewDidEndScroll:;
- (void)initFetchV2WithCompletion:;
- (void)refreshGrouponV2WithRefreshConfig:completion:;
- (void)updateGrouponCacheWithListResponse:;
- (id)topFeedIndex;
- (void)loadGrouponV2CacheWithCacheConfig:completion:;
- (void)deleteCards:;
- (void)deleteCardWithMode:idList:;
- (void)containerDidLoad;
- (id)previousPageContext;
- (void)cellWillLeaveWithLeaveMethod:;
- (void)nearbyHalfScreenContainerWillShowWithModel:;
- (void)nearbyHalfScreenContainerWillDismissWithModel:;
- (void)deleteAwemes:;
- (void)insertAwemeModel:index:insertType:;
- (id)findItemIndexByItemID:;
- (void)willRefreshByManualWithType:;
- (BOOL)isRequestAir;
- (void)passiveRefreshGrouponWithParams:completion:;
- (long long)itemsCountInSectionFormDataSource;
- (BOOL)currentFeedCanScroll;
- (void)didReloadFeed;
- (void)autoScrollFeedWithIndex:;
- (void)preInitFetch;
- (id)listResponse;
- (void)setPreviousPageContext:;
- (id)feedItemIndexPathAt:;
- (BOOL)feedItemIsFullVisibleAt:;
- (id)feedCellAt:;
- (id)grouponIdentifier;
- (BOOL)shouldStopAutoPlay;
- (void)shouldShowSmallScreenWithRoomID:customSchema:scene:showComplete:;
- (void)shouldShowSmallScreenWithRoomID:customSchema:scene:smallLiveWindowTopPercent:showComplete:;
- (void)startAutoPlayType:source:;
- (void)restartAutoPlay;
- (void)pauseAutoPlay;
- (id)lastVisibleCanInsertItemPath;
- (void)insertAwemeModel:index:allowApendMax:insertType:;
- (void)onItemDeletedWithAweme:;
- (void)onItemDeletedWithAweme:;
- (id)findLynxCellWithChannel:bundle:;
- (id)vm;
- (void)autoPlayNextCellFromSource:;
- (void)setVm:;
- (BOOL)needToppingFeedAfterReload;
- (void)setNeedToppingFeedAfterReload:;
- (BOOL)refreshFeedTopping;
- (void)setNumberOfRefreshByManual:;
- (long long)numberOfRefreshByManual;
- (long long)refreshThresholdForFeedTopping;
- (BOOL)willLoadTransformerCache;
- (void)setWillLoadTransformerCache:;
- (id)feedSectionLayout;
- (void)refreshWithParam:completion:;
- (void)updateFirstFetch;
- (id)visibleLynxCells;
- (id)visibleLynxCellIndexPaths;
- (void)addEventTrackerHooker;
- (void)setPlayingCell:;
- (void)setPlayingCell:;
- (void)requestRecommendDataIfNeed:;
- (void)setHasEnteredInnerPage:;
- (void)setNeedInvalidateLayout:;
- (BOOL)isLiveWindowsWillShow;
- (id)isSchemaInsertLiveUnderTake;
- (void)showLiveSmallWindow:scene:withRoomID:showComplete:;
- (void)setTapActionOnLiveSmallWindow:scene:schema:;
- (void)setHiddenCompletionOnLiveSmallWindow:;
- (void)setIsLiveWindowsWillShow:;
- (void)setIsLifeWindowsShowing:;
- (void)trackLiveSmallWindowShow;
- (void)trackLiveSmallWindowClick;
- (BOOL)isLifeWindowsShowing;
- (void)setIsHalfScreenShowingStayPlay:;
- (BOOL)isHalfScreenShowingStayPlay;
- (void)setLastAutoPlayType:;
- (void)_autoPlayType:source:;
- (long long)lastAutoPlayType;
- (void)playNextCell:source:;
- (BOOL)inSchemaAutoPlayUnderTake;
- (BOOL)hasEnteredInnerPage;
- (id)p1aidPoiIds;
- (id)p1aidProductIds;
- (BOOL)needInvalidateLayout;
- (void)setCurrentRecAfterClickAwemeID:;
- (void)requestRecommendDataForMode:inCell:;
- (id)currentRecAfterClickAwemeID;
- (void)resumeAutoPlay;
- (void)setCellHeightCache:;
- (long long)normalRefreshCount;
- (void)setNormalRefreshCount:;
- (void)setP1aidPoiIds:;
- (void)setP1aidProductIds:;
- (void)setP_previousPageContext:;
- (id)p_previousPageContext;
- (long long)schemaAutoPlayRefreshCount;
- (id)nextPlayCell;
- (id)nextPlayCellList;
- (void)setSchemaAutoPlayRefreshCount:;
- (void)trackVideoRenderTime:;
- (void)incrementFreshCount;
- (void)setRefreshFeedTopping:;
- (void)registerCardDetailPreloadListenerIfNeed;
- (id)checkAreAllVisibleLynxCellsFirstScreen;
- (void)setNotFirstScreenLynxCellsInFirstLoad:;
- (void)visibleLynxCellShowOrHideEventSendWithIsShow:;
- (void)sendVisibleLynxCellFirstSceneIfNeeded;
- (id)notFirstScreenLynxCellsInFirstLoad;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)addObserver;
- (BOOL)didAppear;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (BOOL)cancelCurrentRequest;
- (void)setRefreshType:;
- (unsigned long long)refreshType;
- (void)setPageContext:;
- (id)pageContext;
- (id)autoPlayConfig;
- (id)cellHeightCache;
- (id)dataList;
@end
