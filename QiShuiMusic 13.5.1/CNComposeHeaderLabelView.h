@interface CNComposeHeaderLabelView : UILabel
- (void)tintColorDidChange;
- (id)initWithFrame:;
- (id)baselinePoint;
- (void)_updateTextColor;
- (id)effectiveTextColor;
@end
