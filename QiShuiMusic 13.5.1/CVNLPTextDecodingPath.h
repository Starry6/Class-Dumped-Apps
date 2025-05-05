@interface CVNLPTextDecodingPath : NSObject
@property (nonatomic) double modelLogProbability;
@property (nonatomic) double characterLanguageModelLogProbability;
@property (nonatomic) double wordLanguageModelLogProbability;
@property (nonatomic) double lexiconScore;
@property (nonatomic) BOOL hasProblematicMixedScriptWords;
@property (nonatomic) q characterCount;
@property (nonatomic) q pseudoSpaceCount;
@property (nonatomic) q tokenCount;
@property (nonatomic) NSString string;
- (id)string;
- (id)init;
- (long long)characterCount;
- (long long)tokenCount;
- (void).cxx_destruct;
- (long long)pseudoSpaceCount;
- (double)modelLogProbability;
- (double)lexiconScore;
- (BOOL)hasProblematicMixedScriptWords;
- (id)initWithCharacterLanguageModelLogProbability:wordLanguageModelLogProbability:lexiconScore:hasProblematicMixedScriptWords:string:;
- (double)characterLanguageModelLogProbability;
- (double)wordLanguageModelLogProbability;
+ (id)defaultPathScoringFunctionForLanguageResourceBundle:;
+ (id)defaultPathScoringFunctionForLanguageResourceBundle:pruneProblematicMixedScriptWordPaths:;
+ (id)defaultPathScoringFunction;
+ (id)defaultPathScoringFunctionPruneProblematicMixedScriptWordPaths:;
@end
