@interface IDSCertifiedDeliveryReplayKey : NSObject
@property (nonatomic) NSData payloadHash;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithHash:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPayload:legacyIdentity:;
- (BOOL)isEqualToReplayKey:;
- (id)payloadHash;
- (void)setPayloadHash:;
+ (BOOL)supportsSecureCoding;
@end
