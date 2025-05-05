@interface SKStoreReviewPresentationWindow : UIApplicationRotationFollowingWindow
- (BOOL)isInternalWindow;
- (id)init;
- (void)presentViewController:animated:completion:;
- (id)_presentationViewController;
@end
