@interface AWEPadWatchTogetherFloatButton : UIView
@property (nonatomic) UIButton watchTogetherButton;
@property (nonatomic) UIViewController<AWERTVInviteViewController> feedShareView;
@property (nonatomic) AWEPadWatchTogetherDefaultIcon defaultIcon;
- (void)setDefaultIcon:;
- (id)feedShareView;
- (void)setFeedShareView:;
- (id)watchTogetherButton;
- (void)getRTVListSelectInviteFriend:;
- (void)dismissContentSheet;
- (void)setWatchTogetherButton:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)defaultIcon;
@end
