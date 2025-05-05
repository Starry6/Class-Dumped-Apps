@interface VSPrivacyConsentVoucher : NSObject
@property (nonatomic) NSString appAdamID;
@property (nonatomic) NSString providerID;
- (id)providerID;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)appAdamID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAppAdamID:providerID:;
+ (BOOL)supportsSecureCoding;
@end
