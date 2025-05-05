@interface TLKSplitTitleContainer : UIView
@property (nonatomic) TLKLabel titleLabel;
@property (nonatomic) TLKLabel centerLeadingTitleLabel;
@property (nonatomic) TLKLabel centerTrailingTitleLabel;
@property (nonatomic) TLKStackView titleStackView;
@property (nonatomic) BOOL useLargeTitle;
- (id)titleFont;
- (id)init;
- (void)setTitleLabel:;
- (void)setFrame:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)titleStackView;
- (void)setTitleStackView:;
- (BOOL)titleLabelsFitInWidth:pointSize:;
- (id)centerLeadingTitleLabel;
- (void)setCenterLeadingTitleLabel:;
- (id)centerTrailingTitleLabel;
- (void)setCenterTrailingTitleLabel:;
- (BOOL)useLargeTitle;
- (void)setUseLargeTitle:;
+ (double)widthForString:font:;
@end
