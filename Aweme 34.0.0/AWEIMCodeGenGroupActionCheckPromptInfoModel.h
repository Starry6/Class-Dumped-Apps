@interface AWEIMCodeGenGroupActionCheckPromptInfoModel : AWEBaseDataModel
@property (nonatomic) q promptType;
@property (nonatomic) q causeType;
@property (nonatomic) AWEIMCodeGenGroupActionCheckToastInfoModel toastInfoModel;
@property (nonatomic) AWEIMCodeGenGroupActionCheckNormalPopupModel normalPopupModel;
@property (nonatomic) AWEIMCodeGenGroupActionCheckFilterPopupModel filterPopupModel;
@property (nonatomic) AWEIMCodeGenGroupActionCheckTextInfoModel textInfoModel;
@property (nonatomic) AWEIMCodeGenGroupActionCheckCreateRulePopUpModel createRulePopupModel;
@property (nonatomic) AWEIMCodeGenGroupActionCheckMultiButtonPopUpModel multiButtonPopupModel;
- (id)multiButtonPopupModel;
- (id)toastInfoModel;
- (void)setToastInfoModel:;
- (long long)causeType;
- (void)setCauseType:;
- (id)normalPopupModel;
- (void)setNormalPopupModel:;
- (id)filterPopupModel;
- (void)setFilterPopupModel:;
- (id)textInfoModel;
- (void)setTextInfoModel:;
- (id)createRulePopupModel;
- (void)setCreateRulePopupModel:;
- (void)setMultiButtonPopupModel:;
- (void).cxx_destruct;
- (long long)promptType;
- (void)setPromptType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
