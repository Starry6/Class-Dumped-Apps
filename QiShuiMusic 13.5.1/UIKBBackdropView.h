@interface UIKBBackdropView : UIVisualEffectView
@property (nonatomic) UIImage imageForCorners;
- (int)textEffectsVisibilityLevel;
- (void)setImageForCorners:;
- (void)transitionToStyle:;
- (id)imageForCorners;
- (void)updateFrame:withCorners:;
- (id)initWithFrame:style:;
- (void)_setRenderConfig:;
- (void)updateCorners:;
- (BOOL)_applyCornerMaskToSelf;
- (void).cxx_destruct;
- (id)_generateCornerContentsImage:;
@end
