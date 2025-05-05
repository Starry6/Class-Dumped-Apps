@interface UIStatusBarWindow : UIWindow
- (void)setStatusBar:;
- (id)safeAreaInsets;
- (BOOL)_canActAsKeyWindowForScreen:;
- (id)statusBarWindowFrame;
- (BOOL)_shouldForceTraitPropagationThroughHierarchy;
- (long long)orientation;
- (id)hitTest:withEvent:;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (id)initWithFrame:;
- (BOOL)_isStatusBarWindow;
- (void)_rotate;
- (void)_didMoveFromScene:toScene:;
- (void)setOrientation:animationParameters:;
- (void).cxx_destruct;
- (id)_defaultStatusBarSceneBoundsForOrientation:;
- (id)_statusBarFrameForOrientation:;
+ (id)_defaultStatusBarSceneReferenceBounds;
+ (id)statusBarWindowFrame;
+ (BOOL)_isSystemWindow;
+ (id)_convertRect:fromSceneReferenceSpaceToSceneSpaceWithOrientation:;
+ (id)_defaultStatusBarSceneReferenceBoundsForOrientation:;
@end
