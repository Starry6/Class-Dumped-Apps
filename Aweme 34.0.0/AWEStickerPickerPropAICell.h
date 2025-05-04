@interface AWEStickerPickerPropAICell : AWEStickerPickerPropSmallCell
@property (nonatomic) UIView bgView;
- (void)setStickerSelected:animated:;
- (void)tapAnimation;
- (id)placeholderImageName;
- (void)willStartUpdateIcon;
- (void)didEndUpdateIcon;
- (double)propNameFontSize;
- (void)modifyConstraints;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:;
+ (double)labelHeight;
+ (double)indicatorWidth;
+ (double)iconBornerRadius;
+ (double)spacingBetweenIconAndLabel;
@end
