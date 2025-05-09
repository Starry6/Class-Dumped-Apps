@interface AWESearchLynxHorizontalElement : LynxUI
@property (nonatomic) AWESearchLynxBounceView bounceUI;
@property (nonatomic) UIView bounceView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} activeRect;
@property (nonatomic) Q anchorType;
@property (nonatomic) double anchorMargin;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double itemSpace;
@property (nonatomic) double preferItemWidth;
@property (nonatomic) q initialScrollIndex;
@property (nonatomic) BOOL forceReload;
@property (nonatomic) BOOL didScrollToInitialIndex;
@property (nonatomic) NSNumber parentContainerWidth;
@property (nonatomic) NSNumber waterFallLayoutType;
@property (nonatomic) NSNumber landScapeType;
@property (nonatomic) NSString sessionid;
@property (nonatomic) NSArray dataList;
@property (nonatomic) NSArray beforeDataList;
@property (nonatomic) NSDictionary commonDataDic;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) AWESearchHorizontalLoadmoreDataController loadmoreDataController;
@property (nonatomic) AWESearchHorizontalLoadmoreResponseModel cachedLoadmoreResponse;
@property (nonatomic) BOOL bounce;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) @? playbackTimeBlock;
@property (nonatomic) double playbackTime;
@property (nonatomic) BOOL hasBinded;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) BOOL hasEnded;
@property (nonatomic) double startTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <SearchDynamicElementStatusDelegate> statusDelegate;
@property (nonatomic) q transitionIndex;
@property (nonatomic) BOOL isActive;
@property (nonatomic) AWESearchAutoPlayHandler autoPlayHandler;
- (void)setLogExtra:;
- (id)logExtra;
- (void)setPlaybackTimeBlock:;
- (void)layoutDidFinished;
- (void)logExtra:requestReset:;
- (void)setScrollMonitorTag:requestReset:;
- (void)removeChild:atIndex:;
- (void)setDataList:;
- (id)awemeList;
- (void)setAwemeList:;
- (id)cardContext;
- (void)setHasPlayed:;
- (double)itemSpace;
- (void)updateAwemeList:;
- (void)setItemSpace:;
- (id)autoPlayHandler;
- (void)setAutoPlayHandler:;
- (BOOL)shouldNotActive;
- (unsigned long long)suitableRuleType;
- (void)didStartShowing;
- (BOOL)isMediaSourceCard;
- (void)didEndShowing;
- (void)updateDataContainerWidth:;
- (void)data:requestReset:;
- (void)sessionid:requestReset:;
- (void)viewWillDisAppear;
- (id)bounceView;
- (void)setBounceView:;
- (void)addObserverForPaymentVideoIfNeeded;
- (void)updateWithPaidAwemeModel:;
- (long long)initialScrollIndex;
- (void)setInitialScrollIndex:;
- (void)setInitialScrollIndex:requestReset:;
- (id)sessionid;
- (void)setSessionid:;
- (void)elementDidFinishBind;
- (unsigned long long)anchorTypeWithString:;
- (void)setAnchorMargin:;
- (double)anchorMargin;
- (void)setPreferItemWidth:;
- (double)preferItemWidth;
- (void)horizontalScrollWithOffset:;
- (void)horizontalViewDidChangeBounceView:displayStatus:;
- (void)horizontalViewDidTriggerBounceView:;
- (void)setDidScrollToInitialIndex:;
- (BOOL)didScrollToInitialIndex;
- (void)bounce:requestReset:;
- (void)activearea:requestReset:;
- (void)anchortype:requestReset:;
- (void)anchormargin:requestReset:;
- (void)horizontalstyle:requestReset:;
- (void)scrolltoindex:withResult:;
- (void)becomeactive:withResult:;
- (void)resignactive:withResult:;
- (void)enablePagePanBackGesture:requestReset:;
- (void)panBackGestureLeftEdge:requestReset:;
- (void)registerCallback:forReachingPlaybackTime:;
- (id)playbackTimeBlock;
- (void)refreshAwemeList:;
- (void)horizontalLoadmoreWithParams:completion:;
- (void)updateLoadMoreAwemeList:;
- (void)updateParentContainerWidth:;
- (void)updateWaterFallLayoutType:;
- (void)updateLandScapeType:;
- (void)horizontalViewForceBecomeActive;
- (id)getLynxElementType;
- (long long)currentCollectionIndexForIdIndex:;
- (id)loadmoreDataController;
- (void)trackBindEvent;
- (void)trackPlayEvent;
- (void)trackEndEvent;
- (BOOL)hasBinded;
- (void)setHasBinded:;
- (long long)currentAwemeIndexForCollectionIndex:;
- (id)horizontalContentViewWithModel:;
- (void)horizontalView:displayItemWithIndexPath:;
- (void)horizontalView:didEndDisplayingItemWithIndexPath:;
- (id)itemSizeForHorizontalView:;
- (double)itemSpacingForHorizontalView:;
- (double)leftMarginForHorizontalView:;
- (double)rightMarginForHorizontalView:;
- (id)currentCollectionAwemeList;
- (long long)currentCollectionIndexForFeedOffset:;
- (void)horizontalView:scrollToInitialIndexWithContentSize:;
- (void)updateHorizontalCollectionView;
- (void)bounceViewFrameDidChange;
- (id)filterDuplicatedData:;
- (void)setCommonDataDic:;
- (void)refreshHorizontalViewDraw;
- (void)diffFlushHorizontalView;
- (id)generateViewModelsWithDataList:awemeList:awemeListDic:;
- (id)beforeDataList;
- (void)setBeforeDataList:;
- (void)layoutBounceView;
- (void)trackFinishUpdate;
- (void)generateIndexpathsBetweenBefore:after:completion:;
- (void)trackElementUsed;
- (id)generateViewModelWithItemDic:atIndex:awemeList:awemeListDic:;
- (id)commonDataDic;
- (id)parentContainerWidth;
- (id)waterFallLayoutType;
- (id)landScapeType;
- (void)shouldUseAnniexWithModel:;
- (void)setBounceUI:;
- (id)bounceUI;
- (void)setCachedLoadmoreResponse:;
- (void)horizontalView:didSelectedItemWithIndexPath:;
- (void)setParentContainerWidth:;
- (void)setWaterFallLayoutType:;
- (void)setLandScapeType:;
- (void)setLoadmoreDataController:;
- (id)cachedLoadmoreResponse;
- (void)didBecomeActive;
- (void)setStatusDelegate:;
- (BOOL)hasVideo;
- (double)leftMargin;
- (void)setIsActive:;
- (void)setStartTime:;
- (id)videoView;
- (void)prepareForReuse;
- (BOOL)bounce;
- (void)didResignActive;
- (void)setLeftMargin:;
- (id)transitionContext;
- (void).cxx_destruct;
- (id)statusDelegate;
- (unsigned long long)anchorType;
- (BOOL)forceReload;
- (double)rightMargin;
- (BOOL)isActive;
- (void)viewDidAppear;
- (double)startTime;
- (BOOL)hasEnded;
- (void)setRightMargin:;
- (id)activeView;
- (double)playbackTime;
- (void)setPlaybackTime:;
- (void)setHasEnded:;
- (void)setForceReload:;
- (void)insertChild:atIndex:;
- (id)activeRect;
- (id)createView;
- (void)setActiveRect:;
- (void)setBounce:;
- (void)setAnchorType:;
- (id)transitionContextProvider;
- (long long)transitionIndex;
- (void)setTransitionIndex:;
- (BOOL)hasPlayed;
- (id)dataList;
+ (id)__lynx_prop_config__1190;
+ (id)__lynx_prop_config__3081;
+ (id)__lynx_prop_config__3172;
+ (id)__lynx_prop_config__3263;
+ (id)__lynx_prop_config__3324;
+ (id)__lynx_prop_config__3465;
+ (id)__lynx_prop_config__3526;
+ (id)__lynx_prop_config__3587;
+ (id)__lynx_prop_config__3698;
+ (id)__lynx_prop_config__3759;
+ (id)__lynx_prop_config__38010;
+ (id)__lynx_prop_config__38511;
+ (id)__lynx_ui_method_config__39212;
+ (id)__lynx_ui_method_config__40213;
+ (id)__lynx_ui_method_config__41014;
@end
