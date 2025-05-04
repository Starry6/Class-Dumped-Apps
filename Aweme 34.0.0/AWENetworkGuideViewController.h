@interface AWENetworkGuideViewController : UIViewController
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (id)_createSectionBackground;
- (id)_createTitleLabel:;
- (id)_createTextLabel:;
- (id)_createSubtitleLabel:;
- (id)_createIllustrationWithImage:text:;
- (id)_createLabel:;
- (id)init;
- (void)setScrollView:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)scrollView;
- (void).cxx_destruct;
- (void)backAction;
- (void)_configureViews;
@end
