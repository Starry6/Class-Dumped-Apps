@interface IDSSigningKeyDiversifier : NSObject
@property (nonatomic) NSString diversifier;
@property (nonatomic) NSData trackingPreventionSecret;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)diversifier;
- (id)trackingPreventionSecret;
- (id)initWithDiversifier:trackingPreventionSecret:;
- (void)setDiversifier:;
- (void)setTrackingPreventionSecret:;
+ (BOOL)supportsSecureCoding;
@end
