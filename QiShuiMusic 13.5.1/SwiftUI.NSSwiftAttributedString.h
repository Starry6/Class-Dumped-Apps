@interface SwiftUI.NSSwiftAttributedString : NSAttributedString
@property (nonatomic) NSString string;
- (id)string;
- (id)init;
- (id)attribute:atIndex:longestEffectiveRange:inRange:;
- (id)initWithString:attributes:;
- (id)attributesAtIndex:effectiveRange:;
- (id)initWithString:;
- (id)attributesAtIndex:longestEffectiveRange:inRange:;
- (id)initWithAttributedString:;
- (BOOL)isEqualToAttributedString:;
- (id)initWithCoder:;
- (id)attribute:atIndex:effectiveRange:;
- (void).cxx_destruct;
- (void)enumerateAttribute:inRange:options:usingBlock:;
- (id)attributedSubstringFromRange:;
- (id)initWithData:options:documentAttributes:error:;
- (id)initWithContentsOfMarkdownFileAtURL:options:baseURL:error:;
- (id)initWithMarkdown:options:baseURL:error:;
- (id)initWithMarkdownString:options:baseURL:error:;
- (void)enumerateAttributesInRange:options:usingBlock:;
- (id)initWithURL:options:documentAttributes:error:;
- (id)initWithItemProviderData:typeIdentifier:error:;
- (id)initWithHTML:options:documentAttributes:;
- (id)initWithFileURL:options:documentAttributes:error:;
@end
