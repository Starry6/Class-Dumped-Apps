@interface UIWKTextSelectionInteraction : UITextSelectionInteraction
- (void)willUpdateSelectionWithGesture:;
- (void)didUpdateSelectionWithGesture:;
- (void)twoFingerRangedSelectGesture:;
@end
