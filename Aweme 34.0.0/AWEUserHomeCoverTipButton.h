@interface AWEUserHomeCoverTipButton : UIButton
@property (nonatomic) double interTitleImageSpacing;
@property (nonatomic) double animationDuration;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) LOTAnimationView tipAnimationView;
- (void)tipAnimationPlay;
- (id)tipAnimationView;
- (void)p_resizeSubviews;
- (void)p_layoutSubViewsForImagePositionRight;
- (double)interTitleImageSpacing;
- (void)setInterTitleImageSpacing:;
- (void)setTipAnimationView:;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setAnimationDuration:;
- (double)animationDuration;
- (void)layoutSubviews;
- (void)setIconImageView:;
@end
