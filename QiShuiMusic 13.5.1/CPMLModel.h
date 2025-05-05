@interface CPMLModel : NSObject
@property (nonatomic) CPMLModelEvaluate cpModelEvaluate;
- (void)setDispatchQueue:;
- (void).cxx_destruct;
- (BOOL)reset;
- (id)initWithModelPath:withPropertyListPath:;
- (id)initWithModelPath:withConfiguration:;
- (void)initializeModel:withConfiguration:;
- (id)getPropertyList;
- (id)evalString:;
- (id)evalNSObjectV:;
- (id)evalArray:;
- (id)evalDict:;
- (void)boundResult:;
- (BOOL)updateModelWithDB:;
- (BOOL)updateModelWithCPDB:;
- (void)setCPMLAlgorithm:;
- (void)setCPMLAlgorithmEngine:;
- (id)cpModelEvaluate;
- (void)setCpModelEvaluate:;
+ (id)initCPModelPath:withConfiguration:;
@end
