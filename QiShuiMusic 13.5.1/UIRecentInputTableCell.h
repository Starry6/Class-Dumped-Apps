@interface UIRecentInputTableCell : UITableViewCell
@property (nonatomic) q blurEffectStyle;
@property (nonatomic) UITextInputTraits textInputTraits;
@property (nonatomic) UILabel floatingLabel;
@property (nonatomic) _UIFloatingContentView floatingContentView;
- (id)textInputTraits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:;
- (void)setHighlighted:animated:;
- (void)setTextInputTraits:;
- (void).cxx_destruct;
- (long long)blurEffectStyle;
- (void)didUpdateFocusInContext:withAnimationCoordinator:;
- (id)floatingContentView;
- (void)setInputText:withBlurStyle:;
- (void)_updateAppearance;
- (BOOL)_tvIsDarkMode;
- (id)floatingLabel;
- (void)setFloatingLabel:;
- (void)setBlurEffectStyle:;
+ (id)unfocusedTextColorForBlurEffectStyle:;
+ (id)focusedTextColorForBlurEffectStyle:;
+ (id)backgroundColorForBlurEffectStyle:;
@end
