@interface AXMSemanticTextFactory : NSObject
@property (nonatomic) NLTagger tagger;
@property (nonatomic) NSMutableDictionary cachedLexicons;
@property (nonatomic) NSNumberFormatter numberFormatter;
@property (nonatomic) NSMutableDictionary compiledPatterns;
@property (nonatomic) NSDataDetector dataDetector;
- (id)numberFormatter;
- (void)setNumberFormatter:;
- (void).cxx_destruct;
- (id)dataDetector;
- (id)tagger;
- (id)cachedLexicons;
- (id)compiledPatterns;
- (id)semanticTextForText:withLocale:;
- (id)_preprocessedText:;
- (BOOL)_string:containsOnlyCharactersFrom:;
- (void)_applyNaturalLanguageTokens:;
- (void)_applyDataDetectors:;
- (void)_applyCustomPatterns:;
- (void)_performSemanticAnalysis:;
- (BOOL)_lexiconExistsForLocale:;
- (BOOL)_textExistsInLexicon:withLocale:;
- (id)_lexiconForLocale:;
- (void)setDataDetector:;
- (void)setTagger:;
- (void)setCachedLexicons:;
- (void)setCompiledPatterns:;
@end
