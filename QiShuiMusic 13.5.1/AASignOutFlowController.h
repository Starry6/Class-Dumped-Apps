@interface AASignOutFlowController : NSObject
@property (nonatomic) <AASignOutFlowControllerDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)signOutAppleAccount:completion:;
- (void)_preflightSignOutOfAccount:completion:;
- (void)_signOutAppleAccount:completion:;
- (void)_disableDeviceLocatorForAccount:completion:;
- (void)_delegate_presentError:withTitle:;
- (void)_delegate_disableFindMyDeviceForAccount:completion:;
- (void)_delegate_signOutAccount:completion:;
@end
