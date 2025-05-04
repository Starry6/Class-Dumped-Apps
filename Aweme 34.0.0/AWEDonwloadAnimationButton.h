@interface AWEDonwloadAnimationButton : UIButton
@property (nonatomic) UIImage normalImage;
@property (nonatomic) UIImage rotationImage;
- (id)normalImage;
- (void)setNormalImage:;
- (void)rotateAnimation;
- (id)initWithNormalImage:rotationImage:;
- (void)setRotationImage:;
- (id)rotationImage;
- (id)init;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)setSelected:;
- (void)stopAnimation;
@end
