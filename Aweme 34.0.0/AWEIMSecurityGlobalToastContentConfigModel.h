@interface AWEIMSecurityGlobalToastContentConfigModel : AWEBaseApiModel
@property (nonatomic) q toastID;
@property (nonatomic) q toastUIType;
@property (nonatomic) AWEIMSecurityGlobalToastContentConfigModel_UIConfig toastUIConfig;
@property (nonatomic) NSArray contentConfigs;
- (long long)toastID;
- (void)setToastID:;
- (id)toastUIConfig;
- (id)contentConfigs;
- (long long)toastUIType;
- (void)setToastUIType:;
- (void)setToastUIConfig:;
- (void)setContentConfigs:;
- (void).cxx_destruct;
+ (id)contentConfigsJSONTransformer;
+ (id)toastUIConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
