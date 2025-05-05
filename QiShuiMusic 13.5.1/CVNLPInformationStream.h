@interface CVNLPInformationStream : NSObject
@property (nonatomic) NSNumber decodingWeight;
@property (nonatomic) NSNumber lowerBoundLogProbability;
- (void).cxx_destruct;
- (id)initWithDecodingWeight:;
- (id)initWithDecodingWeight:lowerBoundLogProbability:;
- (double)decodingWeightValue;
- (double)lowerBoundLogProbabilityValue;
- (id)decodingWeight;
- (id)lowerBoundLogProbability;
+ (id)defaultDecodingWeight;
+ (id)defaultLowerBoundLogProbability;
@end
