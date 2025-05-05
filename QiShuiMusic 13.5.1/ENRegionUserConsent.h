@interface ENRegionUserConsent : NSObject
@property (nonatomic) double consentTimestamp;
@property (nonatomic) double differentialPrivacyConsentTimestamp;
@property (nonatomic) q consent;
@property (nonatomic) NSString consentText;
@property (nonatomic) NSString consentVersion;
@property (nonatomic) q differentialPrivacyConsent;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)consentVersion;
- (long long)consent;
- (void)setDifferentialPrivacyConsent:;
- (long long)differentialPrivacyConsent;
- (id)updatedConsent:;
- (id)initWithConsentVersion:;
- (void)setConsent:;
- (id)consentText;
- (void)setConsentText:;
- (double)consentTimestamp;
- (void)setConsentTimestamp:;
- (void)setConsentVersion:;
- (double)differentialPrivacyConsentTimestamp;
- (void)setDifferentialPrivacyConsentTimestamp:;
+ (BOOL)supportsSecureCoding;
@end
