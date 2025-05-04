@interface AWEAwemeDetailPlayletInnerAdCountDownView : UIView
@property (nonatomic) UILabel blockAdTitle;
@property (nonatomic) UILabel stayEnoughAdTitle;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) LOTAnimationView adSlideAnimationView;
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEAwemeModel currentModel;
- (id)initWithAwemeModel:;
- (void)updateCountDownLabel:;
- (id)blockAdTitle;
- (id)stayEnoughAdTitle;
- (id)adSlideAnimationView;
- (void)updateLineViewHidden:;
- (void)updateAdBlockLabelWithAnimation;
- (void)updateAdBlockLabel;
- (void)setBlockAdTitle:;
- (void)setStayEnoughAdTitle:;
- (void)setAdSlideAnimationView:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)lineView;
- (void)setIconImageView:;
- (void)setLineView:;
- (id)currentModel;
- (void)setCurrentModel:;
- (void)setUpUI;
@end
