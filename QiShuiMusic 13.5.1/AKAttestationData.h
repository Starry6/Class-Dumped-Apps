@interface AKAttestationData : NSObject
@property (nonatomic) NSDictionary attestationHeaders;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)attestationHeaders;
- (void)setAttestationHeaders:;
+ (BOOL)supportsSecureCoding;
@end
