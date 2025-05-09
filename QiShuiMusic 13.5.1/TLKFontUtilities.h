@interface TLKFontUtilities : NSObject
+ (id)preferredMonospacedFontForTextStyle:;
+ (id)attributedStringForRichText:appearance:prominence:alignment:font:isButton:scale:isDark:;
+ (id)cachedFontForTextStyle:isShort:fontWeight:;
+ (id)updateAttributedStringUnderlineStyle:isUnderlineVisible:;
+ (id)preferredFontForTextStyle:maximumContentSizeCategory:;
+ (id)thinFontOfSize:grade:;
+ (id)shortTitle2Font;
+ (id)cachedFontForKey:creatorBlock:;
+ (id)subheadBoldFont;
+ (id)preferredFontWithTextStyle:isShort:isBold:;
+ (id)subheadFont;
+ (id)boldBodyFont;
+ (id)preferredFontDescriptorWithTextStyle:addingSymbolicTraits:;
+ (id)cachedFontForTextStyle:isShort:isBold:;
+ (id)textAttachmentForImage:size:cornerRoundingStyle:appearance:;
+ (id)clearTextAttachmentForTextAttachment:;
+ (id)shortFootnoteFont;
+ (id)captionFont;
+ (id)preferredFontForTextStyle:;
+ (BOOL)formattedTextItemIsColoredImage:;
+ (id)attributedStringForFormattedText:appearance:prominence:alignment:font:isButton:scale:isDark:;
+ (id)shortTitle1Font;
+ (id)calloutFont;
+ (id)footnoteFont;
+ (id)shortBodyFont;
+ (id)shortSubheadFont;
+ (id)preferredFontWithTextStyle:isShort:isBold:useCustomWeight:customFontWeight:isMonoSpaced:;
+ (id)attributedStringForRichText:appearance:prominence:alignment:coloredRanges:nonColoredRanges:rangesForNonTemplateImageAttachments:rangesForTemplateImageAttachments:font:isButton:scale:isDark:;
+ (id)shortSubheadBoldFont;
+ (id)cachedFontForTextStyle:isShort:isBold:useCustomWeight:customFontWeight:;
+ (id)cachedFontForTextStyle:;
@end
