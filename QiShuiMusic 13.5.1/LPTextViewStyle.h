@interface LPTextViewStyle : NSObject
@property (nonatomic) UIColor color;
@property (nonatomic) UIFont font;
@property (nonatomic) NSString compositingFilter;
@property (nonatomic) float hyphenationFactor;
@property (nonatomic) I maximumLines;
@property (nonatomic) I maximumCharacters;
@property (nonatomic) q textAlignment;
@property (nonatomic) LPPointUnit firstLineLeading;
@property (nonatomic) LPPointUnit lastLineDescent;
@property (nonatomic) LPGlyphStyle leadingGlyph;
@property (nonatomic) LPGlyphStyle trailingGlyph;
@property (nonatomic) LPPadding padding;
@property (nonatomic) LPPointUnit paragraphSpacing;
@property (nonatomic) BOOL shouldScaleMaximumLinesWithDynamicType;
@property (nonatomic) double fontScalingFactor;
- (void)setHyphenationFactor:;
- (float)hyphenationFactor;
- (void)setColor:;
- (id)compositingFilter;
- (void)setFont:;
- (id)color;
- (void)setCompositingFilter:;
- (void).cxx_destruct;
- (id)font;
- (long long)textAlignment;
- (void)setTextAlignment:;
- (id)padding;
- (id)copyWithZone:;
- (id)paragraphSpacing;
- (void)setParagraphSpacing:;
- (id)firstLineLeading;
- (id)lastLineDescent;
- (id)initWithPlatform:fontScalingFactor:;
- (unsigned int)maximumLines;
- (void)_adjustForString:;
- (id)adjustedForString:;
- (void)setMaximumLines:;
- (unsigned int)maximumCharacters;
- (void)setMaximumCharacters:;
- (void)setFirstLineLeading:;
- (void)setLastLineDescent:;
- (id)leadingGlyph;
- (void)setLeadingGlyph:;
- (id)trailingGlyph;
- (void)setTrailingGlyph:;
- (BOOL)shouldScaleMaximumLinesWithDynamicType;
- (void)setShouldScaleMaximumLinesWithDynamicType:;
- (double)fontScalingFactor;
- (void)setFontScalingFactor:;
@end
