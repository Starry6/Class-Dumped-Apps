@interface NLSearchParserManager : NSObject
- (void)dealloc;
- (id)initWithOptions:;
- (id)tokenizeAndEnumerateAttributedParsesForQuery:options:withBlock:;
- (id)initWithLocale:context:options:;
- (void)enumerateDateRangeAttributedParseForOptions:withBlock:;
- (void)enumerateAttributedParsesForQuery:options:withBlock:;
- (void)enumerateSearchSuggestions:options:withBlock:;
+ (id)defaultManager;
+ (id)availableLanguages;
@end
