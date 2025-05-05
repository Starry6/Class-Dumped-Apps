@interface VNEntityIdentificationModelPrediction : NSObject
@property (nonatomic) VNObservation<VNEntityIdentificationModelObservation> observation;
@property (nonatomic) <NSObject><NSCopying><NSSecureCoding> entityUniqueIdentifier;
@property (nonatomic) float confidence;
- (float)confidence;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)observation;
- (id)initWithObservation:entityUniqueIdentifier:confidence:;
- (id)entityUniqueIdentifier;
+ (BOOL)supportsSecureCoding;
@end
