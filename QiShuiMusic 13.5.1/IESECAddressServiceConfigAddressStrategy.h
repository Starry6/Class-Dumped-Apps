@interface IESECAddressServiceConfigAddressStrategy : MTLModel
@property (nonatomic) NSArray mainBTMList;
@property (nonatomic) NSArray ruleList;
@property (nonatomic) IESECAddressServiceAddressBTMTraceConfig btmTraceConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMainBTMList:;
- (id)btmTraceConfig;
- (id)mainBTMList;
- (void)setBtmTraceConfig:;
- (void).cxx_destruct;
- (id)ruleList;
- (void)setRuleList:;
+ (id)mainBTMListJSONTransformer;
+ (id)ruleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
