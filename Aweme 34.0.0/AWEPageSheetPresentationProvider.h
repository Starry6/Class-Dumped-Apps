@interface AWEPageSheetPresentationProvider : NSObject
@property (nonatomic) UIViewController viewController;
@property (nonatomic) @? configurationBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attachToViewController:;
- (id)presentationControllerForPresentedViewController:presentingViewController:sourceViewController:;
- (void)detach;
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
- (id)interactionControllerForDismissal:;
- (id)viewController;
- (void)setConfigurationBlock:;
- (void).cxx_destruct;
- (id)configurationBlock;
- (void)setViewController:;
+ (void)enablePageSheetPresentationForViewController:configurationBlock:;
+ (void)enablePageSheetPresentationForViewController:;
@end
