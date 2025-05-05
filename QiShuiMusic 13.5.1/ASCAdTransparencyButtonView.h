@interface ASCAdTransparencyButtonView : UIButton
- (void)setLoading:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)encodeWithCoder:;
- (void)updateFont;
- (void)updateInsets;
+ (id)titleColor;
+ (id)selectedTitleColor;
+ (id)adTransparencyButtonImage;
+ (id)adButtonTitleLocalized;
+ (id)buttonFontCompatibleWithTraitColletion:;
@end
