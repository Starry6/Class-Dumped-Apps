@interface UIRemoteKeyboardWindowHosted : UIRemoteKeyboardWindow
- (double)keyboardWidthForCurrentDevice;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (id)safeAreaInsets;
- (id)keyboardScreenReferenceSize;
- (double)_adjustedWindowLevelFromLevel:;
- (long long)_orientationForSceneTransform;
- (BOOL)_isTextEffectsWindowHosting;
+ (BOOL)_isSecure;
+ (BOOL)_isHostedInAnotherProcess;
@end
