@interface TLKTextView : UITextView
@property (nonatomic) Q prominence;
@property (nonatomic) TLKMultilineText multilineText;
@property (nonatomic) BOOL automaticUrlification;
- (id)init;
- (void)setProminence:;
- (unsigned long long)prominence;
- (id)intrinsicContentSize;
- (void)tlk_updateForAppearance:;
- (void)setText:;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)multilineText;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setMultilineText:;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (void)urlify;
- (void)updateAttributedString;
- (BOOL)_usesNonVibrantAppearance;
- (BOOL)automaticUrlification;
- (void)setAutomaticUrlification:;
@end
