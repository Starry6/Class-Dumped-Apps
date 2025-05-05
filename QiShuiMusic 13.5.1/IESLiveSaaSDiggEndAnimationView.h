@interface IESLiveSaaSDiggEndAnimationView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UILabel textLable;
@property (nonatomic) BOOL isAnchor;
- (void)doEndAnimationWithFromBound:;
- (void)doStartAnimationToBound:;
- (id)initWithIsAnchor:;
- (void)setIsAnchor:;
- (void)setTextLable:;
- (id)textLable;
- (void)layoutSubviews;
- (id)gradientLayer;
- (BOOL)isAnchor;
- (void).cxx_destruct;
- (void)setGradientLayer:;
@end
