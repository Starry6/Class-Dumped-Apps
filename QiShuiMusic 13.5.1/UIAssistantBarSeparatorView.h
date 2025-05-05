@interface UIAssistantBarSeparatorView : UIView
@property (nonatomic) UIView innerSeparatorView;
- (void)layoutSubviews;
- (void)setInnerSeparatorView:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_updateVisualStyle;
- (id)innerSeparatorView;
- (BOOL)_usesLightStyle;
+ (double)preferredWidth;
@end
