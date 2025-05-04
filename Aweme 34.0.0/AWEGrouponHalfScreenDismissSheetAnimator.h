@interface AWEGrouponHalfScreenDismissSheetAnimator : AWEGrouponHalfScreenDismissAnimator
@property (nonatomic) AWEGrouponHalfScreenSheetAnimation animation;
@property (nonatomic) AWEGrouponHalfScreenDismissAnimator endingAnimator;
- (id)initWithAnimation:endingAnimator:;
- (void)dismissWithAttachAnimation:completion:;
- (id)endingAnimator;
- (void)setEndingAnimator:;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (id)animation;
- (void)setAnimation:;
@end
