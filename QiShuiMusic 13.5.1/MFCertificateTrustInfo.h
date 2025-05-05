@interface MFCertificateTrustInfo : NSObject
@property (nonatomic) Q certificateType;
@property (nonatomic) NSString sender;
@property (nonatomic) ECSecureMIMETrustEvaluation trustEvaluation;
@property (nonatomic) ^{__SecTrust=} trust;
- (void)dealloc;
- (id)sender;
- (void).cxx_destruct;
- (id)trust;
- (unsigned long long)certificateType;
- (id)initWithCertificateType:trust:sender:;
- (id)trustEvaluation;
@end
