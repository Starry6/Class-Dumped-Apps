@interface RPModalPresentationWindow : UIApplicationRotationFollowingWindow
- (BOOL)isInternalWindow;
- (id)init;
- (void)dealloc;
- (void)presentViewController:animated:completion:;
- (id)_presentationViewController;
- (void)presentAlertController:animated:completion:;
- (id)mainWindow;
@end
