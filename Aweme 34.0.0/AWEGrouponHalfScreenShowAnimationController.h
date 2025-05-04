@interface AWEGrouponHalfScreenShowAnimationController : NSObject
@property (nonatomic) AWEGrouponHalfScreenShowAnimator showAnimator;
@property (nonatomic) <AWEGrouponHalfScreenShowAnimationProvider> delegate;
@property (nonatomic) AWEGrouponHalfScreenAnimation currentAnimation;
- (void)animationHalfScreenWithAnimation:completion:;
- (void)animationFullScreenWithAnimation:completion:;
- (void)show:withAttachAnimation:completion:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)show:;
- (id)currentAnimation;
- (void)setShowAnimator:;
- (id)showAnimator;
@end
