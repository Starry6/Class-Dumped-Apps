@interface AWESearchSlidingTabbarView : AWESlidingTabbarView
@property (nonatomic) double extraWidth;
@property (nonatomic) UIButton aiSearchLogoBtn;
@property (nonatomic) <AWESearchSlidingTabbarViewDelegate> tabbarViewDelegate;
- (void)configureButtonTextFont:selectedFont:;
- (void)resetDataArray:selectedDataArray:;
- (void)onButtonAccessibilityFocus:;
- (double)totalButtonWidth;
- (void)setupSystem;
- (void)setupAiSearchButton;
- (BOOL)isShowAiSearchBtn;
- (double)aiSearchBtnScale;
- (id)aiSearchLogoBtn;
- (void)setupAiSearchImage:;
- (id)tabbarViewDelegate;
- (void)aiSearchBtnClick;
- (void)updateThemeStyle:;
- (void)addFilterViewAccesibilityElement:;
- (void)removeFilterViewAccesibilityElement;
- (void)setAiSearchLogoBtn:;
- (void)setExtraWidthForFilterView:animated:;
- (void)setTabbarViewDelegate:;
- (double)extraWidth;
- (void)setExtraWidth:;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)setupSubviews;
@end
