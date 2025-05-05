@interface EMFEmojiSearchEngine : NSObject
@property (nonatomic) NSLocale locale;
@property (nonatomic) EMFIndexManager indexManager;
@property (nonatomic) EMFStringStemmer stringStemmer;
@property (nonatomic) <EMFAutocompleteCandidateProvider> autocompleteProvider;
@property (nonatomic) EMFQueryResultOverrideList overrideList;
@property (nonatomic) BOOL enableAutocomplete;
- (id)init;
- (void)dealloc;
- (id)locale;
- (void)preheat;
- (void).cxx_destruct;
- (id)initWithLocale:;
- (id)indexManager;
- (id)stringStemmer;
- (id)overrideList;
- (id)initWithLocale:andAssetBundle:;
- (id)initWithLocale:andIndexManager:andStringStemmer:andAutocompleteProvider:;
- (id)performStringQuery:;
- (id)performQuery:usingIndex:;
- (id)_performStringQueryOverride:usingIndex:;
- (id)_performStringQueryUntokenized:usingIndex:;
- (id)_performStringQuery:usingIndex:shouldAutocomplete:shouldStem:;
- (id)_performAutocompletedQueryForQuery:usingIndex:;
- (id)autocompleteProvider;
- (BOOL)enableAutocomplete;
- (void)setEnableAutocomplete:;
+ (BOOL)isLocaleSupported:;
@end
