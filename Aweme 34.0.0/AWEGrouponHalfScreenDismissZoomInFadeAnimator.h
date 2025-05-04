@interface AWEGrouponHalfScreenDismissZoomInFadeAnimator : AWEGrouponHalfScreenDismissAnimator
@property (nonatomic) AWEGrouponHalfScreenZoomInFadeAnimation animation;
@property (nonatomic) AWEGrouponHalfScreenDismissAnimator endingAnimator;
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
