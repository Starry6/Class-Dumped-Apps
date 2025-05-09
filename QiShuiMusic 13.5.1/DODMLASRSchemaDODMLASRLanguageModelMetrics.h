@interface DODMLASRSchemaDODMLASRLanguageModelMetrics : SISchemaInstrumentationMessage
@property (nonatomic) float linearInterpolationWeight;
@property (nonatomic) BOOL hasLinearInterpolationWeight;
@property (nonatomic) Q totalDurationInMs;
@property (nonatomic) BOOL hasTotalDurationInMs;
@property (nonatomic) I numUtterances;
@property (nonatomic) BOOL hasNumUtterances;
@property (nonatomic) I numWords;
@property (nonatomic) BOOL hasNumWords;
@property (nonatomic) I numOutOfVocabularyWords;
@property (nonatomic) BOOL hasNumOutOfVocabularyWords;
@property (nonatomic) I numInvalidTokens;
@property (nonatomic) BOOL hasNumInvalidTokens;
@property (nonatomic) I numInvalidUtterances;
@property (nonatomic) BOOL hasNumInvalidUtterances;
@property (nonatomic) float perplexity;
@property (nonatomic) BOOL hasPerplexity;
@property (nonatomic) float perplexityOne;
@property (nonatomic) BOOL hasPerplexityOne;
@property (nonatomic) NSArray ngramHits;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setTotalDurationInMs:;
- (BOOL)hasTotalDurationInMs;
- (void)setHasTotalDurationInMs:;
- (void)deleteTotalDurationInMs;
- (unsigned long long)totalDurationInMs;
- (void)setLinearInterpolationWeight:;
- (BOOL)hasLinearInterpolationWeight;
- (void)setHasLinearInterpolationWeight:;
- (void)deleteLinearInterpolationWeight;
- (void)setNumUtterances:;
- (BOOL)hasNumUtterances;
- (void)setHasNumUtterances:;
- (void)deleteNumUtterances;
- (void)setNumWords:;
- (BOOL)hasNumWords;
- (void)setHasNumWords:;
- (void)deleteNumWords;
- (void)setNumOutOfVocabularyWords:;
- (BOOL)hasNumOutOfVocabularyWords;
- (void)setHasNumOutOfVocabularyWords:;
- (void)deleteNumOutOfVocabularyWords;
- (void)setNumInvalidTokens:;
- (BOOL)hasNumInvalidTokens;
- (void)setHasNumInvalidTokens:;
- (void)deleteNumInvalidTokens;
- (void)setNumInvalidUtterances:;
- (BOOL)hasNumInvalidUtterances;
- (void)setHasNumInvalidUtterances:;
- (void)deleteNumInvalidUtterances;
- (void)setPerplexity:;
- (BOOL)hasPerplexity;
- (void)setHasPerplexity:;
- (void)deletePerplexity;
- (void)setPerplexityOne:;
- (BOOL)hasPerplexityOne;
- (void)setHasPerplexityOne:;
- (void)deletePerplexityOne;
- (void)clearNgramHits;
- (void)deleteNgramHits;
- (void)addNgramHits:;
- (unsigned long long)ngramHitsCount;
- (id)ngramHitsAtIndex:;
- (float)linearInterpolationWeight;
- (unsigned int)numUtterances;
- (unsigned int)numWords;
- (unsigned int)numOutOfVocabularyWords;
- (unsigned int)numInvalidTokens;
- (unsigned int)numInvalidUtterances;
- (float)perplexity;
- (float)perplexityOne;
- (id)ngramHits;
- (void)setNgramHits:;
@end
