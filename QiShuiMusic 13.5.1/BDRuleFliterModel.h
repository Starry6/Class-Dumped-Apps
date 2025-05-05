@interface BDRuleFliterModel : NSObject
@property (nonatomic) NSString strategyKey;
@property (nonatomic) NSDictionary strategyFilters;
- (id)strategyFilters;
- (BOOL)checkRuleCludeWithRuleKey:params:;
- (id)strategyKey;
- (void).cxx_destruct;
- (id)initWithDictionary:key:;
@end
