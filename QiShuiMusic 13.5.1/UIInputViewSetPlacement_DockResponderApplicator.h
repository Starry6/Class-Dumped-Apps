@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator
@property (nonatomic) UIKeyboardPopoverContainer popover;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} popoverRectPlaceholder;
- (void)applyChanges:;
- (BOOL)isGesture:inDraggableView:;
- (id)contentInsets;
- (id)draggableView;
- (BOOL)preBeginGesture:shouldBegin:;
- (id)popoverFrame;
- (id)twoFingerDraggableView;
- (id)startingPropertiesFromPlacementProperties:;
- (void)setPopover:;
- (void)invalidatePopover;
- (id)popoverRectPlaceholder;
- (void)prepare;
- (void)setPopoverRectPlaceholder:;
- (id)scaledPopoverTransform;
- (void).cxx_destruct;
- (id)popover;
- (void)invalidate;
- (BOOL)isEqual:;
- (BOOL)isPopoverRequired;
@end
