@interface AWEProfileHeaderContainerView : UIView
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) UIView bgCornerView;
@property (nonatomic) AWEProfileHeaderRemindBannerBGView remindBannerBGView;
- (void)configWithContext:;
- (void)refreshAlphaForHeaderView:;
- (id)bgCornerView;
- (void)setBgCornerView:;
- (BOOL)enableBgCornerView;
- (id)remindBannerBGView;
- (void)p_trackRemindBannerShow;
- (void)refreshHeaderFrame:bgCornerFrame:;
- (void)updateRemindBannerAlpha:;
- (void)updateRemindBannerHidden:;
- (void)setRemindBannerBGView:;
- (id)initWithFrame:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)context;
@end
