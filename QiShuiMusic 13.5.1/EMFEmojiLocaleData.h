@interface EMFEmojiLocaleData : NSObject
@property (nonatomic) EMFEmojiSearchEngine searchEngine;
@property (nonatomic) NSString localeIdentifier;
@property (nonatomic) r^{__EmojiLocaleDataWrapper=} emojiLocaleDataRef;
@property (nonatomic) NSArray emojiTokens;
- (void)dealloc;
- (id)initWithLocaleIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (id)localeIdentifier;
- (id)emojiTokensForText:phoneticReading:options:searchType:includePrefixMatches:;
- (id)initWithCEMEmojiLocaleData:;
- (id)emojiTokens;
- (unsigned long long)cfCompareFlagsFromNSOptions:;
- (void)enumerateSearchResultsInText:range:options:searchType:usingBlock:;
- (id)emojiTokensForOptions:presentationStyle:;
- (id)searchEngine;
- (void)preheatSearchEngine;
- (id)_rawSearchEngineReference;
- (id)emojiLocaleDataRef;
+ (id)emojiLocaleDataWithLocaleIdentifier:;
+ (id)emojiLocaleDataWithCEMEmojiLocaleData:;
@end
