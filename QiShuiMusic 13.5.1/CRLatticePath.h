@interface CRLatticePath : NSObject
@property (nonatomic) NSArray edges;
@property (nonatomic) double lexiconScore;
@property (nonatomic) double cnnScore;
@property (nonatomic) double ngramScore;
@property (nonatomic) double geometryScore;
@property (nonatomic) double patternScore;
@property (nonatomic) double totalScore;
- (void).cxx_destruct;
- (id)edges;
- (double)totalScore;
- (double)geometryScore;
- (double)lexiconScore;
- (id)initWithEdgeIndexes:lex:cnn:ngram:geom:pattern:total:;
- (double)cnnScore;
- (double)ngramScore;
- (double)patternScore;
@end
