@interface LNSiriVocabulary : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSArray corpora;
@property (nonatomic) <LNVocabularyDonator> donatorClient;
@property (nonatomic) <LNVocabularyPicker> vocabularyPicker;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) LNDebouncer debouncer;
@property (nonatomic) NSMutableArray completions;
- (id)bundleIdentifier;
- (id)debouncer;
- (void)setCompletions:;
- (id)completions;
- (void).cxx_destruct;
- (id)queue;
- (id)initWithBundleIdentifier:donatorClient:picker:;
- (void)setCorporaByPriority:completionHandler:;
- (void)donateWithCompletionHandler:;
- (void)corpusContentsChanged:completionHandler:;
- (id)corpora;
- (void)setCorpora:;
- (id)donatorClient;
- (id)vocabularyPicker;
+ (id)vocabularyForBundleIdentifier:;
@end
