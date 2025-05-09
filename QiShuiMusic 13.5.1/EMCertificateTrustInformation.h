@interface EMCertificateTrustInformation : NSObject
@property (nonatomic) ^{__SecTrust=} trust;
@property (nonatomic) Q certificateType;
@property (nonatomic) ECSecureMIMETrustEvaluation trustEvaluation;
@property (nonatomic) NSString sender;
@property (nonatomic) BOOL _forceNetworkAccessAllowed;
@property (nonatomic) <ECEmailAddressConvertible> firstEmailAddress;
@property (nonatomic) NSArray emailAddresses;
@property (nonatomic) NSString commonName;
@property (nonatomic) ^{__SecCertificate=} certificate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emailAddresses;
- (void)dealloc;
- (id)sender;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)certificate;
- (void).cxx_destruct;
- (void)setSender:;
- (BOOL)isEqual:;
- (id)trust;
- (unsigned long long)certificateType;
- (void)setCertificateType:;
- (void)setTrust:;
- (id)initWithTrust:certificateType:sender:;
- (id)firstEmailAddress;
- (id)trustEvaluation;
- (id)commonName;
- (void)evaluateTrustWithOptions:;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (void)setTrustEvaluation:;
- (BOOL)_forceNetworkAccessAllowed;
- (void)set_forceNetworkAccessAllowed:;
+ (id)log;
+ (BOOL)supportsSecureCoding;
@end
