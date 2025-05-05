@interface MFMessageSigner : NSObject
@property (nonatomic) MFCertificateTrustInfo signingCertificateTrustInfo;
@property (nonatomic) MFCertificateTrustInfo encryptionCertificateTrustInfo;
@property (nonatomic) NSString sender;
@property (nonatomic) MFError error;
- (id)sender;
- (id)error;
- (void).cxx_destruct;
- (id)initWithSender:signingTrust:encryptionTrust:verification:;
- (id)signingCertificateTrustInfo;
- (id)encryptionCertificateTrustInfo;
@end
