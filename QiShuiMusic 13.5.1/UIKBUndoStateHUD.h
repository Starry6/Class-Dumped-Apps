@interface UIKBUndoStateHUD : UIView
@property (nonatomic) UIVisualEffectView shadowView;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel labelView;
@property (nonatomic) UIKBUndoStyling style;
@property (nonatomic) q controlType;
@property (nonatomic) NSLayoutConstraint undoStateHUDWidthConstraint;
@property (nonatomic) NSLayoutConstraint undoStateHUDHeightConstraint;
- (id)labelView;
- (id)containerView;
- (void)setContainerView:;
- (void)setStyle:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)setControlType:;
- (void)setShadowView:;
- (id)style;
- (id)shadowView;
- (long long)controlType;
- (id)initWithKeyboardAppearance:;
- (void)updateUndoStateHUDControlType:available:;
- (id)undoStateHUDWidthConstraint;
- (void)setUndoStateHUDWidthConstraint:;
- (id)undoStateHUDHeightConstraint;
- (void)setUndoStateHUDHeightConstraint:;
- (void)setLabelView:;
@end
