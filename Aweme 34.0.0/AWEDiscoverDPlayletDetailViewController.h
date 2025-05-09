@interface AWEDiscoverDPlayletDetailViewController : UIViewController
@property (nonatomic) NSString playletID;
@property (nonatomic) AWEPlayletInfoModel playletModel;
@property (nonatomic) AWEDiscoverDPlayletDetailListView detailView;
@property (nonatomic) UIView navBackView;
@property (nonatomic) AWEButton shareBtn;
@property (nonatomic) UIImageView loadingImageView;
@property (nonatomic) NSString previousPage;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString enterSource;
@property (nonatomic) NSString fromGroupID;
@property (nonatomic) NSDictionary logParams;
@property (nonatomic) q isAd;
@property (nonatomic) q adId;
@property (nonatomic) AWEAwemeModel lastPlayedModel;
@property (nonatomic) q itemOffset;
@property (nonatomic) BOOL itemHasScrolled;
@property (nonatomic) BOOL enterFromSearchHElementSchema;
@property (nonatomic) BOOL blockInnerDataCallback;
@property (nonatomic) BOOL returnFirstBatchResponsePreload;
@property (nonatomic) <AWEFeedPreloadManagerProtocol> preloadManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (BOOL)configWithRouterParamDict:;
- (id)enterMethod;
- (id)enterFrom;
- (id)enterSource;
- (void)setEnterSource:;
- (long long)isAd;
- (void)setIsAd:;
- (id)playletID;
- (id)fromGroupID;
- (void)configureUI;
- (id)modernTransitionContext;
- (id)preloadManager;
- (void)setPreloadManager:;
- (void)modernTransitionUpdateOffset:isScrolled:;
- (long long)modernUpdateOffsetDiffWithItem:initialIndex:originOffset:;
- (id)shareBtn;
- (void)setShareBtn:;
- (void)setPlayletID:;
- (long long)modernTransitionItemOffset;
- (id)logParams;
- (void)setLogParams:;
- (BOOL)modernTransitionItemHasScrolled;
- (BOOL)disableSyncModelIndex;
- (long long)modernInitialIndex;
- (id)modernCurrentDisplayingItem;
- (long long)modernUseOrigin;
- (void)setFromGroupID:;
- (void)onShareBtnClicked:;
- (id)addTapGestureForView:selector:;
- (void)setBlockInnerDataCallback:;
- (BOOL)blockInnerDataCallback;
- (id)monetizeScene;
- (id)monetizeContentReferString;
- (id)monetizeDataSource;
- (BOOL)needReceiveRefreshMonetizeContent;
- (id)monetizeSceneContainer;
- (void)refresh:willRefreshMonetizeContentForContext:;
- (void)scrollViewDidShowNav:;
- (void)handleRefreshDataNotification:;
- (void)refreshDataWithCompletion:;
- (void)configPreloadManager;
- (id)playletModel;
- (void)setPlayletModel:;
- (void)dismissHintBubble;
- (void)requestPlayletVideoListWithNoData:;
- (void)setEnterFromSearchHElementSchema:;
- (id)navBackView;
- (void)scrollDetailViewToTop;
- (id)aAWEPlayletDetailCommonAdapter;
- (void)refreshDataWithShouldUpdateList:completion:;
- (void)handlePaymentRefreshResultWithPlayletInfo:error:;
- (BOOL)returnFirstBatchResponsePreload;
- (void)setReturnFirstBatchResponsePreload:;
- (long long)itemOffset;
- (BOOL)itemHasScrolled;
- (id)lastPlayedModel;
- (void)setLastPlayedModel:;
- (BOOL)enterFromSearchHElementSchema;
- (void)setItemOffset:;
- (void)setItemHasScrolled:;
- (void)setNavBackView:;
- (void)viewWillDisappear:;
- (id)init;
- (void)dealloc;
- (void)addObserver;
- (void)viewDidLoad;
- (void)appWillResignActive:;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (void)scrollViewDidEndDecelerating:;
- (void)viewWillAppear:;
- (void)appDidBecomeActive:;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
- (id)detailView;
- (void)setDetailView:;
- (void)refreshData;
- (id)loadingImageView;
- (void)setLoadingImageView:;
- (long long)adId;
- (void)setAdId:;
+ (Class)aAWEPlayletDetailCommonAdapterClass;
@end
