@interface CSQueryResultMatchingHint : NSObject
@property (nonatomic) NSString attribute;
@property (nonatomic) NSArray tokens;
- (id)attribute;
- (void).cxx_destruct;
- (id)description;
- (id)tokens;
- (id)initWithAttribute:tokens:;
- (BOOL)isValidAttributeForSnippetHint:;
- (id)initWithBackingHint:;
- (id)flattenedHints;
+ (id)randomTokensFromText:maxTokens:maxTextLength:;
+ (id)_snippetHintAttributeSet;
@end
