@interface ICDocCamNavigationController : UINavigationController
- (BOOL)shouldAutorotate;
- (long long)_preferredModalPresentationStyle;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)prepareForDismissal;
- (id)initWithImageCache:docCamDelegate:remoteDocCamDelegate:;
@end
