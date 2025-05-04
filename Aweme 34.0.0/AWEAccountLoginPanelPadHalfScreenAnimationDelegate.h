@interface AWEAccountLoginPanelPadHalfScreenAnimationDelegate : NSObject
@property (nonatomic) AWEAccountLoginPanelPadPresentAnimation presentAnimation;
@property (nonatomic) AWEAccountLoginPanelPadDismissAnimation dismissAnimation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dismissAnimation;
- (id)presentAnimation;
- (void)setPresentAnimation:;
- (void)setDismissAnimation:;
- (id)init;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
- (void).cxx_destruct;
@end
