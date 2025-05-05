@interface EMFDefaultAutocompleteCandidateProvider : NSObject
@property (nonatomic) NSArray tokens;
- (void).cxx_destruct;
- (id)initWithBundle:;
- (id)tokens;
- (id)initWithTokens:;
- (void)enumerateCandidatesMatchingPrefix:withEnumerationType:maxCandidates:usingBlock:;
- (id)firstCandidateMatchingPrefix:;
- (BOOL)isValidToken:;
- (id)matchesForPrefix:usingAlgorithm:;
- (id)firstMatchForPrefix:;
+ (id)providerFromInvertedIndex:;
@end
