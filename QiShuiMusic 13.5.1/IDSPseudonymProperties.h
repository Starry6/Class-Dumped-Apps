@interface IDSPseudonymProperties : NSObject
@property (nonatomic) double expiryEpoch;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString featureID;
@property (nonatomic) NSString scopeID;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSArray allowedServices;
- (double)expiryEpoch;
- (id)scopeID;
- (id)initWithFeatureID:scopeID:expiryEpoch:allowedServices:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)withUpdatedExpiryEpoch:;
- (id)allowedServices;
- (id)initWithDictionaryRepresentation:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (id)featureID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)willBeExpiredIn:;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToPseudonymProperties:;
- (BOOL)isEqual:;
- (BOOL)hasBeenExpiredForAtLeast:;
- (id)withUpdatedAllowedServices:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
