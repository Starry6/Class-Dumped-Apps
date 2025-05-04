@interface AWEEcomSearchMallGuidanceView : UIView
@property (nonatomic) UIView tipView;
@property (nonatomic) UILabel tipTextView;
@property (nonatomic) q guideState;
- (id)attributeText;
- (id)tipTextView;
- (void)moveTo:height:;
- (long long)guideState;
- (void)setupLineTip;
- (void)transitionAnimation:;
- (id)makeAttributeText:;
- (void)setGuideState:;
- (void)setTipTextView:;
- (void)setTipView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)lineView;
- (id)tipView;
@end
