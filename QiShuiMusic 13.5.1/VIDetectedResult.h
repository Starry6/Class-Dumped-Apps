@interface VIDetectedResult : NSObject
@property (nonatomic) VIOntologyNode ontologyNode;
@property (nonatomic) q position;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) float score;
- (long long)position;
- (id)boundingBox;
- (float)score;
- (void).cxx_destruct;
- (id)ontologyNode;
- (id)initWithOntologyNode:position:boundingBox:score:;
@end
