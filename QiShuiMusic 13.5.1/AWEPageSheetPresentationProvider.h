@interface AWEPageSheetPresentationProvider : NSObject
@property (nonatomic) UIViewController viewController;
@property (nonatomic) @? configurationBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attachToViewController:;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (void)detach;
- (void)setViewController:;
- (id)animationControllerForDismissedController:;
- (id)interactionControllerForDismissal:;
- (id)presentationControllerForPresentedViewController:presentingViewController:sourceViewController:;
- (id)viewController;
- (void).cxx_destruct;
- (void)setConfigurationBlock:;
- (id)configurationBlock;
+ (void)enablePageSheetPresentationForViewController:;
+ (void)enablePageSheetPresentationForViewController:configurationBlock:;
@end
