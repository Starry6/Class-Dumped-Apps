@interface AWEIndividualPlayManager : AWEIndividualBasePlayManager
- (BOOL)tryLoadNewRealWindow:;
- (void)individualHandleRealWindow:;
- (BOOL)shouldRootWindowVisible;
- (void)makeRootWindowUnVisibleIfNeeded;
- (void)makeRootWindowVisible;
@end
