@interface EMFInvertedIndex : NSObject
@property (nonatomic) NSDictionary termIndex;
@property (nonatomic) NSDictionary documentIndex;
@property (nonatomic) NSURL termIndexURL;
@property (nonatomic) NSURL documentIndexURL;
@property (nonatomic) NSBundle assetBundle;
@property (nonatomic) <EMFIndexStrategy> strategy;
- (id)strategy;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)assetBundle;
- (void)setAssetBundle:;
- (id)postingsForTerm:;
- (id)termsForDocument:;
- (id)termWeightForTerm:inDocument:;
- (id)commonDocumentsForTerms:;
- (id)calculateDocumentWeightsForQueryTokenCounts:;
- (id)initWithTermIndex:andDocumentIndex:;
- (id)termIndex;
- (void)setTermIndex:;
- (id)documentIndex;
- (void)setDocumentIndex:;
- (id)termIndexURL;
- (void)setTermIndexURL:;
- (id)documentIndexURL;
- (void)setDocumentIndexURL:;
@end
