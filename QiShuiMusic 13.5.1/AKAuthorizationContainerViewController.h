@interface AKAuthorizationContainerViewController : UIViewController
@property (nonatomic) UIViewController rootViewController;
@property (nonatomic) AKAuthorizationPresentationContext presentationContext;
@property (nonatomic) <AKAuthorizationContainerViewControllerDelegate> delegate;
@property (nonatomic) <AKAuthorizationPaneViewControllerDelegate> paneDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setRootViewController:;
- (id)rootViewController;
- (void)setDelegate:;
- (id)initWithCoder:;
- (id)presentationContext;
- (id)delegate;
- (void)navigationController:willShowViewController:animated:;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:bundle:;
- (id)paneDelegate;
- (void)setPaneDelegate:;
- (id)initWithRootViewController:authorizationContext:;
- (void)_setPaneDelegateForTopViewController;
- (void)_setPaneDelegateForViewController:;
- (void)_clearPaneDelegateForViewController:;
- (void)_setPaneDelegate:forViewController:;
@end
