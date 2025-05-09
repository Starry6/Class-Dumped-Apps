@interface TITraceLogCandidate : NSObject
@property (nonatomic) I wordId;
@property (nonatomic) double probability;
@property (nonatomic) double contextProbability;
@property (nonatomic) NSString token;
@property (nonatomic) NSArray wordSources;
@property (nonatomic) NSNumber dynamicUsageCount;
@property (nonatomic) NSNumber penalty;
@property (nonatomic) NSString lexiconLocaleIdentifier;
@property (nonatomic) NSString filterName;
@property (nonatomic) NSString priorContext;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)filterName;
- (id)penalty;
- (double)probability;
- (void)setProbability:;
- (unsigned int)wordId;
- (void)setWordId:;
- (double)contextProbability;
- (void)setContextProbability:;
- (id)wordSources;
- (void)setWordSources:;
- (id)dynamicUsageCount;
- (void)setDynamicUsageCount:;
- (void)setPenalty:;
- (id)lexiconLocaleIdentifier;
- (void)setLexiconLocaleIdentifier:;
- (void)setFilterName:;
- (id)priorContext;
- (void)setPriorContext:;
+ (id)_wordSourcesFromCandidateString:;
+ (id)candidateFromRemovedCandidateString:;
+ (id)candidateFromCandidateString:;
+ (id)candidateFromFinalCandidateString:;
@end
