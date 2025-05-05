@interface UIDictationATVLinearView : UIDictationView
- (void)removeFromSuperview;
- (BOOL)isShowing;
- (void)layoutSubviews;
- (void)setState:;
- (void)setRenderConfig:;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (BOOL)drawsOwnBackground;
@end
