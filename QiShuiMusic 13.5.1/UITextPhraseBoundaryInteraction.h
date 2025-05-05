@interface UITextPhraseBoundaryInteraction : UITextInteraction
- (void)_createGestureTuningIfNecessary;
- (id)initWithTextInput:;
- (id)touchAlignedPointForPoint:translation:;
- (void)didMoveToView:;
- (id)pointIfPlacedCarefully:;
- (void)updateVisibilityOffsetForGesture:;
- (void).cxx_destruct;
- (void)_phraseBoundaryGesture:;
- (id)_phraseBoundaryGestureRecognizer;
@end
