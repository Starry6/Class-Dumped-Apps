@interface UIKBFocusGuide : UIFocusGuide
@property (nonatomic) Q focusHeading;
@property (nonatomic) <UIKBFocusGuideDelegate> keyboardDelegate;
- (BOOL)_isUnclippable;
- (BOOL)_ignoresSpeedBumpEdges;
- (void)_didUpdateFocusToPreferredFocusedView;
- (void)setFocusHeading:;
- (id)focusGuideRegion:preferredFocusEnvironmentsForMovementRequest:;
- (float)_focusPriority;
- (unsigned long long)focusHeading;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_isUnoccludable;
- (id)keyboardDelegate;
- (void)setKeyboardDelegate:;
@end
