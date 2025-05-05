@interface NLPredictionInfo : NSObject
@property (nonatomic) NSString prediction;
@property (nonatomic) NLProbabilityInfo probabilityInfo;
@property (nonatomic) Q contextLength;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)prediction;
- (id)probabilityInfo;
- (id)initWithPrediction:tokenIDArray:contextLength:probabilityInfo:;
- (id)initWithPrediction:contextLength:probabilityInfo:;
- (id)initWithPrediction:probabilityInfo:;
- (id)initWithPrediction:tokenIDs:length:contextLength:probabilityInfo:;
- (id)tokenIDArray;
- (id)tokenIDs;
- (unsigned long long)tokenIDLength;
- (unsigned long long)contextLength;
+ (BOOL)supportsSecureCoding;
@end
