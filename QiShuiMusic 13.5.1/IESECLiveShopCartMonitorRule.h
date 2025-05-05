@interface IESECLiveShopCartMonitorRule : MTLModel
@property (nonatomic) NSString onRule;
@property (nonatomic) NSString require;
@property (nonatomic) BOOL logToolbar;
@property (nonatomic) NSString onRuleKey;
@property (nonatomic) NSArray onRuleNumbers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)require;
- (BOOL)logToolbar;
- (id)onRule;
- (id)onRuleKey;
- (id)onRuleNumbers;
- (id)rangeOfRuleNumbers;
- (void)setLogToolbar:;
- (void)setOnRule:;
- (void)setOnRuleKey:;
- (void)setOnRuleNumbers:;
- (void)setRequire:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
