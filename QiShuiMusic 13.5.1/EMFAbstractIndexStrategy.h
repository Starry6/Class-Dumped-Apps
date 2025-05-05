@interface EMFAbstractIndexStrategy : NSObject
@property (nonatomic) NSDictionary termIndex;
@property (nonatomic) NSDictionary documentIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)postingsForTerm:;
- (id)termsForDocument:;
- (id)termWeightForTerm:inDocument:;
- (id)commonDocumentsForTerms:;
- (id)calculateDocumentWeightsForQueryTokenCounts:;
- (id)initWithTermIndex:andDocumentIndex:;
- (void)assertMethodNeedsConcreteImplementation:;
- (id)termIndex;
- (void)setTermIndex:;
- (id)documentIndex;
- (void)setDocumentIndex:;
@end
