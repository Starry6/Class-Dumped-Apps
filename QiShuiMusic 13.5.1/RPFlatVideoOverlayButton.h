@interface RPFlatVideoOverlayButton : UIButton
@property (nonatomic) @ target;
@property (nonatomic) : action;
- (void)_handleTap:;
- (SEL)action;
- (void)setAction:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (long long)style;
- (id)initWithStyle:;
- (void)setTarget:action:;
- (id)_normalButtonImage;
- (id)_highlightedButtonImage;
- (id)_createOverlayImageWithBackgroundWhite:backgroundAlpha:glyphAlpha:;
@end
