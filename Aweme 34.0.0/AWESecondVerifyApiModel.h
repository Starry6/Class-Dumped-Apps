@interface AWESecondVerifyApiModel : AWEBaseApiModel
@property (nonatomic) NSString secondVerifyType;
@property (nonatomic) AWECodeGenFunctionBanPopupModel popupConfig;
- (id)popupConfig;
- (void)setPopupConfig:;
- (id)secondVerifyType;
- (void)setSecondVerifyType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
