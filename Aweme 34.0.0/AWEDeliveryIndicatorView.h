@interface AWEDeliveryIndicatorView : UIView
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) UIImageView indicatorImageView;
- (id)indicatorImageView;
- (void)setIndicatorImageView:;
- (id)initWithFrame:;
- (void)startAnimation;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (void)stopAnimation;
+ (void)stopAfterSecond:block:;
@end
