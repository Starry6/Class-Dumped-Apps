@interface UISelectionGrabberDot : UIImageView
@property (nonatomic) UISelectionGrabber grabber;
- (int)textEffectsVisibilityLevel;
- (void)setFrame:;
- (BOOL)pointInside:withEvent:;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (id)initWithFrame:container:;
- (id)_rasterizedDotImageForScale:;
- (id)_extendedHitTestingRectWithEvent:includingCalloutBarAdjustments:;
- (void)redrawRasterizedImageForScale:;
- (id)grabber;
- (void)setGrabber:;
@end
