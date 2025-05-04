@interface AWENearbyHalfScreenDismissZoomInFadeAnimator : AWENearbyHalfScreenDismissAnimator
@property (nonatomic) AWENearbyHalfScreenZoomInFadeAnimation animation;
@property (nonatomic) AWENearbyHalfScreenDismissAnimator endingAnimator;
@property (nonatomic) @? completion;
@property (nonatomic) UIView currentAnimationContent;
- (id)initWithAnimation:endingAnimator:;
- (void)dismissWithAttachAnimation:completion:;
- (id)endingAnimator;
- (void)setEndingAnimator:;
- (id)currentAnimationContent;
- (void)setCurrentAnimationContent:;
- (id)init;
- (id)completion;
- (void)setCompletion:;
- (void)dismiss;
- (void).cxx_destruct;
- (id)animation;
- (void)setAnimation:;
- (id)caAnimation;
- (id)snapshot:;
@end
