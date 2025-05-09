@interface AWELikeLandingPageViewController : UIViewController
@property (nonatomic) AWELikeWorkViewController likeVC;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString tabName;
@property (nonatomic) NSString preTabName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (BOOL)configWithRouterParamDict:;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)enterFrom;
- (void)userProfileTabVC:didScroll:;
- (id)contentOffsetOfCurrentVC;
- (double)maxBannerHeight;
- (id)userForTabVC;
- (double)userProfileTabHeight;
- (void)trackClientShowHomepageWithModel:tabType:extraParams:;
- (void)trackClickHomepageVideoCoverWithModel:tabType:extraParams:;
- (void)searchButtonClicked:;
- (void)backBtnClicked:;
- (id)likeVC;
- (void)setLikeVC:;
- (void)trackSearchButtonClicked;
- (void)setPreTabName:;
- (id)preTabName;
- (double)headerHeight;
- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)tabName;
- (void)setTabName:;
@end
