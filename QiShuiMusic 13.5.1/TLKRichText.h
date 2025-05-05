@interface TLKRichText : TLKMultilineText
@property (nonatomic) NSArray formattedTextItems;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL hasOnlyImage;
- (id)formattedTextItems;
- (BOOL)hasOnlyImage;
- (BOOL)hasContent;
- (unsigned long long)maxLines;
- (id)filterItemsByType:;
- (id)inlineRoundedText;
- (id)stars;
- (void).cxx_destruct;
- (void)setFormattedTextItems:;
- (id)description;
- (id)icons;
- (id)text;
@end
