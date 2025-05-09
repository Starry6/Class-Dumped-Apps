@interface AWEHPProfileSideBarViewController : UIViewController
@property (nonatomic) UIImageView tabBarImageView;
@property (nonatomic) UIView maskView;
@property (nonatomic) UIView accessibilityView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView bottomContentView;
@property (nonatomic) UIView morePageView;
@property (nonatomic) q morePageSection;
@property (nonatomic) AWEHPProfileSideBarControllerManager contentManager;
@property (nonatomic) AWEHPProfileSideBarControllerManager bottomManager;
@property (nonatomic) AWEHPProfileSideBarControllerManager morePageManager;
@property (nonatomic) AWEHPListKitViewController contentViewController;
@property (nonatomic) AWEHPListKitViewController bottomViewController;
@property (nonatomic) AWEHPListKitViewController morePageViewController;
@property (nonatomic) <AWEHPProfileSideBarViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) @? isShowSliderMenuBlock;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)awe_themeReload;
- (BOOL)btm_notPageHolder;
- (void)dismissSideBarViewController;
- (void)reloadAllListIfNeed;
- (id)initWithContentManager:withBottomManager:;
- (void)enterMoreFunctionPageWithManager:;
- (void)quitMoreFunctionPage;
- (id)isShowSliderMenuBlock;
- (void)setBottomManager:;
- (id)bottomManager;
- (void)setBottomContentView:;
- (id)bottomContentView;
- (void)setBottomViewController:;
- (void)setMorePageView:;
- (id)morePageView;
- (void)dismissAnimation:;
- (void)setAccessibilityView:;
- (id)accessibilityView;
- (id)morePageManager;
- (long long)morePageSection;
- (void)setMorePageSection:;
- (void)setMorePageManager:;
- (id)morePageViewController;
- (void)setMorePageViewController:;
- (id)tabBarImageView;
- (void)setTabBarImageView:;
- (BOOL)isShowSliderMenuView;
- (void)updateTabBarImageView:;
- (void)updateViewsWithOriginX:;
- (void)setIsShowSliderMenuBlock:;
- (void)viewWillDisappear:;
- (id)delegate;
- (id)maskView;
- (void)viewDidLoad;
- (void)dismissWithAnimation:;
- (id)contentView;
- (id)containerView;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (void)setContainerView:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setContentViewController:;
- (void)viewDidAppear:;
- (void)setMaskView:;
- (void)setDelegate:;
- (id)contentViewController;
- (id)bottomViewController;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (id)contentManager;
- (void)setContentManager:;
+ (double)sliderMenuWidth;
@end
