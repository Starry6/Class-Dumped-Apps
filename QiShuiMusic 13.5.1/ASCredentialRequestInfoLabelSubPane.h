@interface ASCredentialRequestInfoLabelSubPane : ASCredentialRequestSubPane
@property (nonatomic) double marginInset;
@property (nonatomic) NSString text;
- (void)setText:;
- (void).cxx_destruct;
- (id)text;
- (double)marginInset;
- (void)setMarginInset:;
- (void)addToStackView:withCustomSpacingAfter:context:;
- (id)initWithString:labelStyle:;
- (id)initWithString:labelType:;
+ (id)_bodyFont;
+ (id)_boldTitleFont;
+ (id)_bodyTextColor;
+ (id)_infoLabelWithString:labelStyle:;
+ (id)_fontForLabelStyle:;
+ (id)_textColorForLabelStyle:;
+ (double)_infoLabelMarginInset;
+ (id)_boldTitleTextColor;
@end
