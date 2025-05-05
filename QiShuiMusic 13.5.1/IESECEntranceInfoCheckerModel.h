@interface IESECEntranceInfoCheckerModel : MTLModel
@property (nonatomic) NSArray checkKeys;
@property (nonatomic) BOOL enable;
@property (nonatomic) NSDictionary forceRule;
@property (nonatomic) NSArray passFiltered;
@property (nonatomic) NSDictionary ruleList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)checkKeys;
- (id)forceRule;
- (id)passFiltered;
- (void)setCheckKeys:;
- (void)setForceRule:;
- (void)setPassFiltered:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
- (id)ruleList;
- (void)setRuleList:;
+ (id)JSONKeyPathsByPropertyKey;
@end
