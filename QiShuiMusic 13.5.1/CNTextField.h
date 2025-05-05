@interface CNTextField : UITextField
- (id)intrinsicContentSize;
- (double)_baselineOffsetFromBottom;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (double)_firstBaselineOffsetFromTop;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
@end
