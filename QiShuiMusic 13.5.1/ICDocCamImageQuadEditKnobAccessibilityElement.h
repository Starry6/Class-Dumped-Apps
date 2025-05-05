@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement
@property (nonatomic) CALayer knobLayer;
@property (nonatomic) ICDocCamImageQuadEditOverlay overlayView;
- (id)accessibilityFrame;
- (void)setOverlayView:;
- (id)overlayView;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)accessibilityViewIsModal;
- (id)knobLayer;
- (void)setKnobLayer:;
- (id)initWithKnobLayer:overlayView:;
@end
