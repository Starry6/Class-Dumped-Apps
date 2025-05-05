@interface BDCertUnit : NSObject
@property (nonatomic) <BDPrivacyCertProtocol> cert;
@property (nonatomic) BDPrivacyCertValidateContext context;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (id)cert;
- (void)setCert:;
@end
