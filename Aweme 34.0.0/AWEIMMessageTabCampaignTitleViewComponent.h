@interface AWEIMMessageTabCampaignTitleViewComponent : AWEIMComponentBase
@property (nonatomic) UIView<AWEUGActivityNoticeTitleViewProtocol> campaignTitleView;
@property (nonatomic) BOOL canShow;
@property (nonatomic) <AWEIMMessageTabCampaignInterface> campaignService;
@property (nonatomic) <AWEIMMessageTabNaviBarInterface> naviBarService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)setCanShow:;
- (void)setNaviBarService:;
- (id)naviBarService;
- (void)handleEnterMessageTabEvent;
- (id)campaignTitleView;
- (void)onTabBarDidChangeNotification:;
- (void)setCampaignService:;
- (id)campaignService;
- (void)configCampaignCustomNavigation;
- (void)setCampaignTitleView:;
- (BOOL)canShowCurrentTitleView;
- (id)currentNavigationTitleView;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
