@interface UITextEffectsWindowHosted : UITextEffectsWindow
- (id)actualSceneBounds;
- (id)actualSceneBoundsForLandscape:;
- (long long)_orientationForRootTransform;
- (void)_sceneBoundsDidChange;
- (long long)_orientationForViewTransform;
- (BOOL)_isFullscreen;
- (BOOL)_usesWindowServerHitTesting;
- (id)safeAreaInsets;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (long long)_orientationForSceneTransform;
- (BOOL)_isTextEffectsWindowHosting;
- (void)adjustTextEffectsWindowSizeIfNecessary;
@end
