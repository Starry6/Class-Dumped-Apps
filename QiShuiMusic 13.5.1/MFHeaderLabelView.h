@interface MFHeaderLabelView : UILabel
- (void)tintColorDidChange;
- (id)initWithFrame:;
- (id)baselinePoint;
- (void)_updateTextColor;
- (id)effectiveTextColor;
+ (id)_defaultColor;
@end
