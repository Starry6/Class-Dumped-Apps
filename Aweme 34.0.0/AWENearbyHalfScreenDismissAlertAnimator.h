@interface AWENearbyHalfScreenDismissAlertAnimator : AWENearbyHalfScreenDismissAnimator
@property (nonatomic) AWENearbyHalfScreenAlertAnimation animation;
@property (nonatomic) AWENearbyHalfScreenDismissAnimator endingAnimator;
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
