@interface MecabraCandidate : NSObject
@property (nonatomic) ^v rawCandidate;
- (id)string;
- (id)surface;
- (void)dealloc;
- (id)attributes;
- (id)description;
- (BOOL)isEqual:;
- (id)category;
- (id)copyWithZone:;
- (id)words;
- (id)initWithCandidate:;
- (id)wordIDs;
- (id)analysisString;
- (id)rawCandidate;
- (id)convertedAnalysisString;
- (id)dictionaryReading;
- (id)convertedAnalysisStringForFirstSyllable;
- (id)syllabifiedAnalysisString;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedDictionaryReading;
- (id)syllablesInString:syllableLengths:;
- (id)syllablesInAnalysisString;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInDictionaryReading;
- (id)wordReadings;
+ (id)syntheticCandidateFromWords:withLexicon:language:;
@end
