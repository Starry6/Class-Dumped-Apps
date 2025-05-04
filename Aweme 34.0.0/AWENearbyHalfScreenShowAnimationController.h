@interface AWENearbyHalfScreenShowAnimationController : NSObject
@property (nonatomic) AWENearbyHalfScreenShowAnimator showAnimator;
@property (nonatomic) <AWENearbyHalfScreenShowAnimationProvider> delegate;
@property (nonatomic) AWENearbyHalfScreenAnimation currentAnimation;
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
