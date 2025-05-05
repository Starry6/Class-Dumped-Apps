@interface FigSubtitleBackdropCALayer : FigBaseCALayer
- (id)actionForLayer:forKey:;
- (id)init;
- (void)dealloc;
- (void)addAnimation:forKey:;
- (void)setDelegate:;
- (void)_addPositionAnimationToLayer:usingAnimation:forKey:;
- (void)setNeedsDisplay;
- (void)_addBoundsAnimationToLayer:usingAnimation:forKey:;
- (void)setContents:;
- (void)setNeedsLayout;
- (void)setBounds:;
- (void)setCornerRadius:;
- (BOOL)shouldEnableBackdropLayer;
- (void)updateBackdropLayer;
- (void)updateWindowOpacity:;
- (void)updateHDRContentState:;
@end
