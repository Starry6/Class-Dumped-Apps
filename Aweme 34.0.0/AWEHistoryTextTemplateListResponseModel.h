@interface AWEHistoryTextTemplateListResponseModel : AWEBaseApiModel
@property (nonatomic) NSDictionary userSettingDic;
@property (nonatomic) IESEffectPlatformNewResponseModel responseModel;
@property (nonatomic) NSDictionary userSetting;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userSetting;
- (void)setUserSetting:;
- (id)userSettingDic;
- (void)setUserSettingDic:;
- (void).cxx_destruct;
- (id)responseModel;
- (void)setResponseModel:;
+ (id)responseModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
