@interface AWEPaidStreamIAAAwardADConfig : AWEBaseApiModel
@property (nonatomic) NSArray sendAwardConfigList;
@property (nonatomic) AWEPaidStreamIAAUIConfig UIConfig;
@property (nonatomic) NSString adAwardKey;
- (id)adAwardKey;
- (void)setAdAwardKey:;
- (id)UIConfig;
- (void)setUIConfig:;
- (id)sendAwardConfigList;
- (void)setSendAwardConfigList:;
- (void).cxx_destruct;
+ (id)sendAwardConfigListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
