@interface CNUIEditAuthorizationController : NSObject
@property (nonatomic) <CNUIEditAuthorizationControllerDelegate> delegate;
@property (nonatomic) @ sender;
@property (nonatomic) BOOL animated;
@property (nonatomic) UIViewController guardedViewController;
- (void)setAnimated:;
- (BOOL)animated;
- (void)dealloc;
- (id)sender;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setSender:;
- (void)lockoutRestrictionsPINControllerDidFinish:;
- (void)presentAuthorizationUI;
- (void)userDidEnterPasswordCorrectly:;
- (void)didAutorize;
- (void)didNotAuthorize;
- (id)guardedViewController;
- (void)setGuardedViewController:;
@end
