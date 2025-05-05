@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl
- (void)pressesCancelled:withEvent:;
- (void)layoutSubviews;
- (void)setSelected:;
- (void)traitCollectionDidChange:;
- (void)pressesEnded:withEvent:;
- (void)pressesBegan:withEvent:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)didUpdateFocusInContext:withAnimationCoordinator:;
- (BOOL)wantsMaskingWhileAnimatingDisabled;
- (void)_ensureFocusedFloatingContentView;
- (id)_currentImage;
- (BOOL)wantsImageShadow;
- (void)_updateFloatingViewForCurrentTraits;
- (BOOL)_shouldHandlePressEvent:;
@end
