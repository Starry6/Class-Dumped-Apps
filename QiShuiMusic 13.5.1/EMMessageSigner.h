@interface EMMessageSigner : NSObject
@property (nonatomic) EMCertificateTrustInformation signingCertificateTrustInfo;
@property (nonatomic) EMCertificateTrustInformation encryptionCertificateTrustInfo;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL hasSeparateSigningAndEncryptionCertificates;
- (void)setError:;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSigningTrust:encryptionTrust:;
- (id)signingCertificateTrustInfo;
- (id)encryptionCertificateTrustInfo;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (BOOL)hasSeparateSigningAndEncryptionCertificates;
- (void)evaluateTrustsWithOptions:;
- (void)setSigningCertificateTrustInfo:;
- (void)setEncryptionCertificateTrustInfo:;
+ (BOOL)supportsSecureCoding;
@end
