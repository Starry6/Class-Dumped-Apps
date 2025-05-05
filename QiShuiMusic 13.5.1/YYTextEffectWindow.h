@interface YYTextEffectWindow : UIWindow
- (id)_correctedCaptureCenter:;
- (id)_correctedCenter:forMagnifier:rotation:;
- (unsigned long long)_keyboardDirection;
- (double)_updateMagnifier:;
- (void)_updateSelectionGrabberDot:selection:;
- (void)hideMagnifier:;
- (void)hideSelectionDot:;
- (void)moveMagnifier:;
- (void)showMagnifier:;
- (void)showSelectionDot:;
- (void)becomeKeyWindow;
- (id)rootViewController;
- (void)_updateWindowLevel;
+ (id)sharedWindow;
@end
