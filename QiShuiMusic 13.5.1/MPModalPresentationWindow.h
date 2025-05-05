@interface MPModalPresentationWindow : UIApplicationRotationFollowingWindow
- (BOOL)isInternalWindow;
- (id)init;
- (void)presentViewController:animated:completion:;
- (id)_presentationViewController;
- (void)presentAlertController:animated:completion:;
@end
