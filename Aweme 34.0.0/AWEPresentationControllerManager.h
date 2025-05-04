@interface AWEPresentationControllerManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)presentationControllerForPresentedViewController:presentingViewController:sourceViewController:;
- (id)animationControllerForDismissedController:;
+ (id)sharedInstance;
@end
