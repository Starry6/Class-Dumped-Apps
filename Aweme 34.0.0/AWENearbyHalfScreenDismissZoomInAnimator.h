@interface AWENearbyHalfScreenDismissZoomInAnimator : AWENearbyHalfScreenDismissAnimator
@property (nonatomic) AWENearbyHalfScreenZoomInAnimation animation;
@property (nonatomic) AWENearbyHalfScreenDismissAnimator endingAnimator;
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
