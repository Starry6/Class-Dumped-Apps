@interface AWESearchSynthesisNovelLoadingView : UIView
@property (nonatomic) AWESearchSynthesisNovelLoadingContentView loadingView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) BOOL darkMode;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)setLoadImage:;
- (void)setDarkLoadImage:;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stopAnimation;
- (BOOL)darkMode;
- (void)setDarkMode:;
@end
