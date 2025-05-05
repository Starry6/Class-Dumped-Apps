@interface NLLexicon : NSObject
@property (nonatomic) NSString localization;
- (id)localization;
- (void)dealloc;
- (id)language;
- (id)languages;
- (id)lexicon;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalization:error:;
- (id)initWithLocalization:;
- (void)_enumerateEntriesForString:usingBlock:;
- (id)entryForTokenID:;
- (id)entryForString:;
- (BOOL)getProbabilityForString:probability:;
- (BOOL)getProbabilityForTokenID:probability:;
- (void)enumerateCompletionsForPrefix:usingBlock:;
- (long long)lexiconType;
+ (id)lexiconWithOptions:error:;
@end
