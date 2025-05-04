@interface AWEStickerPickerPropIconSelectedIndicatorCell : AWEStickerPickerPropSmallCell
- (double)propNameFontSize;
- (void)modifyConstraints;
+ (double)labelHeight;
+ (double)iconBornerRadius;
+ (double)calculateCellHeightWithCellWidth:;
+ (double)spacingBetweenIconAndLabel;
@end
