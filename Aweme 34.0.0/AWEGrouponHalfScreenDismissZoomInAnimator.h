@interface AWEGrouponHalfScreenDismissZoomInAnimator : AWEGrouponHalfScreenDismissAnimator
@property (nonatomic) AWEGrouponHalfScreenZoomInAnimation animation;
@property (nonatomic) AWEGrouponHalfScreenDismissAnimator endingAnimator;
@property (nonatomic) UIView currentAnimationContent;
- (void)setAnchorPoint:forView:;
- (id)initWithAnimation:endingAnimator:;
- (void)dismissWithAttachAnimation:completion:;
- (id)endingAnimator;
- (void)setEndingAnimator:;
- (id)currentAnimationContent;
- (void)setCurrentAnimationContent:;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (id)animation;
- (void)setAnimation:;
- (id)snapshot:;
@end
