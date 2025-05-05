@interface VNPersonsModelPrediction : NSObject
@property (nonatomic) VNFaceObservation faceObservation;
@property (nonatomic) <NSObject><NSCopying><NSSecureCoding> predictedPersonUniqueIdentifier;
@property (nonatomic) float confidence;
- (float)confidence;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithFaceObservation:predictedPersonUniqueIdentifier:confidence:;
- (id)faceObservation;
- (id)predictedPersonUniqueIdentifier;
+ (BOOL)supportsSecureCoding;
@end
