@interface UISoftwareDimmingWindow : UIWindow
@property (nonatomic) float overlayLevel;
- (id)initWithFrame:;
- (id)_roleHint;
- (BOOL)_ignoresHitTest;
- (void)updateOverlayColor;
- (void)setOverlayLevel:;
- (float)overlayLevel;
@end
