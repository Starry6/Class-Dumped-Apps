@interface WBSPermissionDialogThrottler : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)didCompletePermissionDialog:;
- (void)willPerformUserInitiatedNavigation;
- (void)requestPermissionDialogPresentation:;
- (void)_callNextPresentationHandlerIfNeeded;
- (BOOL)_canShowPermissionDialog;
@end
