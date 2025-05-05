@interface PSITokenizer : NSObject
@property (nonatomic) NSLocale locale;
- (void)setLocale:;
- (void)dealloc;
- (void)_tokenizeString:withContext:;
- (void)tokenizeString:withOptions:tokenOutput:;
- (id)locale;
- (int)registerFTS5TokenizerForDatabase:;
- (id)initWithLocale:useCache:;
- (id)normalizeString:;
- (void).cxx_destruct;
- (id)newTokensFromString:withOptions:outCopyRanges:error:;
+ (id)ftsTokenizerName;
+ (id)fts5StringFromString:useWildcard:;
+ (id)fts5StringFromString:forMatchType:;
@end
