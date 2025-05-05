@interface UIStatusBar_Placeholder : UIStatusBar_Base
- (long long)currentStyle;
- (void)setStyleRequest:animationParameters:;
- (id)hitTest:withEvent:;
- (double)defaultDoubleHeight;
- (id)_initWithFrame:showForegroundView:wantsServer:inProcessStateProvider:;
- (void)setForegroundColor:animationParameters:;
- (void)setLegibilityStyle:animationParameters:;
- (void)_setHidden:animationParameters:;
- (void)_requestStyle:partStyles:legibilityStyle:foregroundColor:animationParameters:forced:;
+ (double)_heightForStyle:orientation:forStatusBarFrame:inWindow:isAzulBLinked:;
@end
