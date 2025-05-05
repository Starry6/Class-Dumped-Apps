@interface DESGaussianAlgorithmParameters : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) double sigma;
@property (nonatomic) double clippingBound;
@property (nonatomic) NSDictionary parameters;
- (id)key;
- (id)parameters;
- (double)sigma;
- (void).cxx_destruct;
- (double)clippingBound;
- (void)addPerChunkParametersWith:numChunks:;
- (BOOL)calculateAndVerifyPerChunkClippingBoundsIn:withOverallClippingBound:;
- (id)initWith:recipe:;
- (id)initWith:epsilon:delta:clippingBound:;
- (id)initWith:epsilon:delta:clippingBound:momentsAccountantParameters:;
@end
