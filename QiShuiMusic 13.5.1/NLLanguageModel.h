@interface NLLanguageModel : NSObject
@property (nonatomic) NSString localization;
@property (nonatomic) NLLexicon lexicon;
- (id)localization;
- (void)dealloc;
- (id)language;
- (id)languages;
- (id)locale;
- (id)lexicon;
- (void).cxx_destruct;
- (id)description;
- (long long)granularity;
- (id)initWithLocalization:;
- (BOOL)generatesPredictions;
- (id)sessionWithOptions:;
- (id)tokenIDConverter;
- (BOOL)getConditionalProbabilityForTokenID:context:length:probability:;
- (double)conditionalProbabilityForEntry:context:;
- (double)conditionalProbabilityForWord:context:;
- (void)enumeratePredictionsForContext:maxEntriesPerPrediction:usingBlock:;
- (void)enumeratePredictionsForContext:maxWordsPerPrediction:usingBlock:;
- (unsigned int)tokenIDForString:;
- (id)stringForTokenID:;
+ (id)languageModelWithOptions:error:;
@end
