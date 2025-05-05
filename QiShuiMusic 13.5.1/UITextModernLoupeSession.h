@interface UITextModernLoupeSession : NSObject
@property (nonatomic) UIView interactionView;
@property (nonatomic) UITextModernLoupeView loupeView;
@property (nonatomic) UITextGestureTuning gestureTuning;
- (void)setInteractionView:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)gestureTuning;
- (id)interactionView;
- (id)_locationInContainerCoordinateSpace:;
- (void)didMoveToPoint:withCaretRect:tracksCaret:;
- (void)setGestureTuning:;
- (id)loupeView;
- (void)setLoupeView:;
+ (id)beginLoupeSessionAtPoint:withCaretRect:fromView:;
@end
