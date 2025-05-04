@interface AWETaskBonusProgressView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) CALayer bgLayer;
@property (nonatomic) double progress;
- (id)bgLayer;
- (void)setBgLayer:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (double)progress;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setProgress:;
- (void)setGradientLayer:;
@end
