@interface SKRemoteDismissingTransition : NSObject
@property (nonatomic) UIViewController<SKRemoteDismissingViewController> viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animateTransition:;
- (double)transitionDuration:;
- (void)setViewController:;
- (id)viewController;
- (void).cxx_destruct;
- (id)initWithViewController:;
- (void)dismissRemoteViewController:;
@end
