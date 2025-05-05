@interface PRLexicon : NSObject
@property (nonatomic) NSString name;
- (void)dealloc;
- (id)lexicon;
- (id)description;
- (id)name;
- (BOOL)getProbabilityForString:probability:;
- (BOOL)getProbabilityForTokenID:probability:;
- (unsigned int)tokenIDForString:;
- (id)stringForTokenID:;
- (id)initWithLexicon:;
- (void)enumerateCompletionsForPrefix:maxCompletions:withBlock:;
- (void)enumerateCompletionEntriesForPrefix:maxCompletions:withBlock:;
- (id)initWithLocalization:unigramsPath:;
- (id)initWithName:words:;
- (id)createCursor;
- (void)enumerateEntriesForString:usingBlock:;
- (void)enumerateCorrectionEntriesForWord:maxCorrections:withBlock:;
+ (id)lexiconWithLocalization:unigramsPath:;
+ (id)lexiconWithLexicon:;
+ (id)lexiconWithName:words:;
@end
