@interface InternalCustomTileLike : NSObject
@property (nonatomic) Q inputRank;
@property (nonatomic) {vector<unsigned long multiples;
@property (nonatomic) {vector<unsigned long inputShape;
@property (nonatomic) {vector<unsigned long outputShape;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)inputShape;
- (id)initWithParameterDictionary:error:;
- (BOOL)setWeightData:error:;
- (id)outputShapesForInputShapes:error:;
- (BOOL)evaluateOnCPUWithInputs:outputs:error:;
- (unsigned long long)inputRank;
- (id)multiples;
- (id)outputShape;
@end
