@interface AWEModernFeedAdLabelFeedbackView : UIView
@property (nonatomic) q themeStyle;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel adLabelView;
@property (nonatomic) UIImageView arrowDownView;
@property (nonatomic) AWEModernFeedActionButton feedbackBtn;
@property (nonatomic) @? trackFeedbackBtnTappedEventBlock;
@property (nonatomic) NSString feedbackUrl;
@property (nonatomic) AWEAwemeModel aweme;
- (id)aweme;
- (void)setAweme:;
- (void)setThemeStyle:;
- (void)themeDidChange:;
- (void)configUI;
- (void)setFeedbackUrl:;
- (id)feedbackUrl;
- (id)feedbackBtn;
- (void)setFeedbackBtn:;
- (void)setTrackFeedbackBtnTappedEventBlock:;
- (id)adLabelView;
- (id)arrowDownView;
- (id)trackFeedbackBtnTappedEventBlock;
- (void)setAdLabelView:;
- (void)setArrowDownView:;
- (void)dealloc;
- (void)addObserver;
- (void)setBackgroundView:;
- (id)initWithFrame:;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)layoutSubviews;
- (long long)themeStyle;
@end
