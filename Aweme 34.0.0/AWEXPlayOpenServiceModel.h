@interface AWEXPlayOpenServiceModel : NSObject
@property (nonatomic) NSString clientKey;
@property (nonatomic) NSString realNameAgreementText;
@property (nonatomic) NSString realNameAgreementUrl;
@property (nonatomic) Q source;
- (id)realNameAgreementText;
- (void)setRealNameAgreementText:;
- (id)realNameAgreementUrl;
- (void)setRealNameAgreementUrl:;
- (BOOL)checkModelParams;
- (id)clientKey;
- (void)setClientKey:;
- (void).cxx_destruct;
- (unsigned long long)source;
- (void)setSource:;
- (id)copyWithZone:;
@end
