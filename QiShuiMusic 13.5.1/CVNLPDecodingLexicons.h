@interface CVNLPDecodingLexicons : CVNLPInformationStream
@property (nonatomic) ^? inputNormalizationFunction;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)packagedLexiconRootCursors;
- (id)initWithLexicons:;
- (id)initWithLexicons:decodingWeight:;
- (id)initWithLexicons:decodingWeight:lowerBoundLogProbability:;
- (id)initWithLexicons:decodingWeight:lowerBoundLogProbability:inputNormalizationFunction:;
- (void)enumerateLexiconsSortedByPriorityWithBlock:;
- (id)lexiconsForPriority:;
- (id)packagedLexiconCursorsUsingTextDecodingContext:;
- (id)inputNormalizationFunction;
@end
