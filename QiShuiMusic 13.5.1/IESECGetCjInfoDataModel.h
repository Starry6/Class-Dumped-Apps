@interface IESECGetCjInfoDataModel : IESLiveBridgeModel
@property (nonatomic) NSString bioType;
@property (nonatomic) NSString biometricParams;
@property (nonatomic) NSString cjSdk;
@property (nonatomic) NSString isJailbreak;
@property (nonatomic) NSDictionary financeRisk;
- (id)bioType;
- (void)setIsJailbreak:;
- (id)biometricParams;
- (void)setFinanceRisk:;
- (id)cjSdk;
- (id)financeRisk;
- (id)isJailbreak;
- (void)setBioType:;
- (void)setBiometricParams:;
- (void)setCjSdk:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
