@interface AWEProfileHeaderRemindBannerBGView : UIView
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) double maskHeight;
@property (nonatomic) UIView colorView;
@property (nonatomic) AWEProfileHeaderRemindBannerView bannerView;
- (double)maskHeight;
- (void)configWithContext:;
- (void)refreshAlphaForHeaderView:;
- (void)p_addMaskWithHeight:;
- (void)setMaskHeight:;
- (id)initWithFrame:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)context;
- (void)setupUI;
- (void)updateUI;
- (id)bannerView;
- (id)colorView;
- (void)setBannerView:;
- (void)setColorView:;
@end
