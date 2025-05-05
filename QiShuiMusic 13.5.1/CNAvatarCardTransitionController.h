@interface CNAvatarCardTransitionController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
- (id)presentationControllerForPresentedViewController:presentingViewController:sourceViewController:;
+ (id)sharedController;
@end
