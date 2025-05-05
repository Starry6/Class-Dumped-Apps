@interface IESECShopHybridSecurityConfig : MTLModel
@property (nonatomic) NSString configName;
@property (nonatomic) q verifyMode;
@property (nonatomic) NSString version;
@property (nonatomic) NSDictionary jsbAllowList;
@property (nonatomic) NSDictionary paramLimitSetting;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jsbAllowList;
- (id)paramLimitSetting;
- (void)setJsbAllowList:;
- (void)setParamLimitSetting:;
- (void)setVerifyMode:;
- (long long)verifyMode;
- (void)setVersion:;
- (id)version;
- (void).cxx_destruct;
- (id)configName;
- (void)setConfigName:;
+ (id)configDictJSONTransformerForClass:;
+ (id)jsbAllowListJSONTransformer;
+ (id)paramLimitSettingJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
