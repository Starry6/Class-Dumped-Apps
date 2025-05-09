@interface AWEPOINearbyHotViewController : UIViewController
@property (nonatomic) AWEPOINearbyHotCollectionController collectionController;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIView collectionEmptyView;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) AWEPOINearbyHotSectionController awemeSectionController;
@property (nonatomic) NSString poiName;
@property (nonatomic) BOOL isMoreThanTwoVideo;
@property (nonatomic) NSString referStr;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageEdgeInsets;
- (id)zoomTransitionStartViewForOffset:;
- (id)aweui_emptyPageContainerView;
- (id)poiName;
- (void)setPoiName:;
- (void)p_loadMore;
- (id)awemeSectionController;
- (id)collectionController;
- (unsigned long long)numberOfSectionsInCollectionController:;
- (id)collectionController:sectionControllerOfSection:;
- (void)setAwemeSectionController:;
- (void)setCollectionController:;
- (double)backgroundViewHeight;
- (id)referStr;
- (void)setReferStr:;
- (id)initWithPoiID:poiName:longitude:latitude:isMoreThanTwoVideo:prefetcher:;
- (BOOL)isMoreThanTwoVideo;
- (void)p_addLoadMoreFooter;
- (void)p_initialFetchWithCompletionHandler:;
- (void)setCollectionEmptyView:;
- (id)collectionEmptyView;
- (void)p_refreshDataWithIsInitialFetch:completion:;
- (void)autoLoadMoreWhenLessThanOnePage;
- (void)setIsMoreThanTwoVideo:;
- (id)store;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (void)setBackgroundView:;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (id)loadingView;
- (id)backgroundView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
@end
