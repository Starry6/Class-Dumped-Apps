@interface TLKTitleContainerView : TLKStackView
@property (nonatomic) TLKRichTextField titleField;
@property (nonatomic) TLKLabel secondaryLabel;
@property (nonatomic) NUIContainerBoxView secondaryImageViewBoxView;
@property (nonatomic) TLKImageView secondaryImageView;
- (id)titleFont;
- (id)init;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (id)secondaryLabel;
- (id)titleLabel;
- (void)setSecondaryLabel:;
- (id)titleLabelString;
- (id)secondaryTitleLabelString;
- (void)updateResultWithTitle:secondaryTitle:image:detached:useCompactMode:truncateMiddle:;
- (id)titleField;
- (void)setTitleField:;
- (id)secondaryImageViewBoxView;
- (void)setSecondaryImageViewBoxView:;
- (id)secondaryImageView;
- (void)setSecondaryImageView:;
+ (BOOL)hasNonBoldFormattingInRichText:;
@end
