@interface CJPayABSettingsModel : JSONModel
@property (nonatomic) BOOL isHiddenDouyinLogo;
@property (nonatomic) BOOL showAccountInsuracne;
@property (nonatomic) NSString darkAccountInsuranceUrl;
@property (nonatomic) NSString lightAccountInsuranceUrl;
@property (nonatomic) NSString keyboardDenoiseIconUrl;
@property (nonatomic) NSString amountKeyboardInsuranceUrl;
@property (nonatomic) NSString amountKeyboardDarkInsuranceUrl;
@property (nonatomic) CJPayBrandPromoteModel brandPromoteModel;
- (id)amountKeyboardDarkInsuranceUrl;
- (id)amountKeyboardInsuranceUrl;
- (id)brandPromoteModel;
- (id)darkAccountInsuranceUrl;
- (BOOL)isHiddenDouyinLogo;
- (id)keyboardDenoiseIconUrl;
- (id)lightAccountInsuranceUrl;
- (void)setAmountKeyboardDarkInsuranceUrl:;
- (void)setAmountKeyboardInsuranceUrl:;
- (void)setBrandPromoteModel:;
- (void)setDarkAccountInsuranceUrl:;
- (void)setIsHiddenDouyinLogo:;
- (void)setKeyboardDenoiseIconUrl:;
- (void)setLightAccountInsuranceUrl:;
- (void)setShowAccountInsuracne:;
- (BOOL)showAccountInsuracne;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
