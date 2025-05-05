@interface SFSSLClientTrustPolicy : SFTrustPolicy
@property (nonatomic) NSString clientName;
- (id)clientName;
- (void)setClientName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithClientName:;
+ (BOOL)supportsSecureCoding;
@end
