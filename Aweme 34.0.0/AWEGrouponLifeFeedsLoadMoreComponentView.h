@interface AWEGrouponLifeFeedsLoadMoreComponentView : AWEGrouponLifeFeedsBaseComponentView
@property (nonatomic) AWEGrouponLifeFeedsLoadMoreComponentVM loadMoreViewModel;
@property (nonatomic) DUXLoadingParticleView loadingView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) AWEGrouponAttributedLabel attrLabel;
- (void)bindViewModel:;
- (id)attrLabel;
- (void)setAttrLabel:;
- (void)trackFooterEventWithName:;
- (void)landingTabWithTabID:;
- (id)loadMoreViewModel;
- (id)textLabel;
- (void)updateState;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTextLabel:;
- (void)setupUI;
@end
