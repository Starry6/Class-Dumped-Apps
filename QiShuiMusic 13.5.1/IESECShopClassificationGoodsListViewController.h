@interface IESECShopClassificationGoodsListViewController : IESECShopGoodsViewController
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIButton searchButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView navBgView;
@property (nonatomic) IESECShopClassificationGoodsEventHandler classificationEventHandler;
@property (nonatomic) IESECShopClassificationGoodsActionHandler classificationActionHandler;
@property (nonatomic) IESECShopClassificationGoodsListSectionController classificationGoodsSectionController;
@property (nonatomic) IESECShopClassificationGoodsListSectionController classificationRecommendGoodsSectionController;
@property (nonatomic) IESECQualityInfoV2 qualityInfo;
@property (nonatomic) NSString materialTitle;
- (void)stateDidAttach:;
- (void)setClassificationActionHandler:;
- (void)setQualityInfo:;
- (id)classificationActionHandler;
- (id)classificationEventHandler;
- (id)classificationGoodsSectionController;
- (id)classificationRecommendGoodsSectionController;
- (void)configBtmTracker;
- (void)configBtmTrackerV2;
- (void)dataControllerDidReset;
- (void)didDataFirstLoad;
- (void)endFirstRender;
- (id)filterSectionController;
- (id)initWithContext:contextV2:container:;
- (id)listAdapter:sectionControllerForObject:;
- (void)loadMoreRecommendFeedData;
- (id)materialTitle;
- (id)navBgView;
- (id)objectsForListAdapter:;
- (id)qualityInfo;
- (void)setClassificationEventHandler:;
- (void)setClassificationGoodsSectionController:;
- (void)setClassificationRecommendGoodsSectionController:;
- (void)setFilterSectionController:;
- (void)setMaterialTitle:;
- (void)setNavBgView:;
- (void)startFirstRender;
- (void)subviewsDidConfigure;
- (BOOL)ttHideNavigationBar;
- (void)willDataFirstLoad;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (void)setTitleLabel:;
- (id)backButton;
- (void)setSearchButton:;
- (void).cxx_destruct;
- (id)searchButton;
- (void)viewDidAppear:;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleLabel;
- (void)setBackButton:;
- (void)viewDidLoad;
- (id)dataController;
- (void)configureSubviews;
@end
