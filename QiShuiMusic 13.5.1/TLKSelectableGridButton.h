@interface TLKSelectableGridButton : UIButton
@property (nonatomic) TLKLabel topLabel;
@property (nonatomic) TLKLabel bottomLabel;
@property (nonatomic) TLKStackView stackView;
@property (nonatomic) BOOL customHighlight;
- (id)intrinsicContentSize;
- (void)setStackView:;
- (void)tlk_updateForAppearance:;
- (void)layoutSubviews;
- (id)systemLayoutSizeFittingSize:;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)stackView;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)topLabel;
- (void)setTopLabel:;
- (void)setTitle:subtitle:;
- (id)bottomLabel;
- (void)setBottomLabel:;
- (void)setCustomHighlight:;
- (BOOL)customHighlight;
+ (id)selectableGridButton;
@end
