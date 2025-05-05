@interface CVNLPDecodingLexicon : NSObject
@property (nonatomic) ^{_LXCursor=} _rootCursor;
@property (nonatomic) r^{_LXLexicon=} lexicon;
@property (nonatomic) Q priority;
- (void)dealloc;
- (id)lexicon;
- (unsigned long long)priority;
- (id)initWithLexicon:priority:;
- (id)initWithLexicon:;
- (id)_rootCursor;
+ (id)_createLexiconForLocale:;
+ (id)decodingLexiconForLocale:;
+ (id)decodingLexiconForLocale:priority:;
@end
