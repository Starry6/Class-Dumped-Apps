@interface AWEPOIVirgoOptiStrategyManager : NSObject
@property (nonatomic) NSMutableDictionary strategyKeyToRulesDict;
@property (nonatomic) NSMutableDictionary characterToStrategyKeysDict;
@property (nonatomic) AWEPOIVirgoOptiStrategyRuleParsers ruleParsers;
@property (nonatomic) AWEPOIVirgoOptiStrategyResults results;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strategyResultWithKey:;
- (void)addOptiStrategyRule:;
- (void)addOptiStrategyRules:;
- (id)strategyKeyToRulesDict;
- (id)opti_Array:addObject:;
- (id)characterToStrategyKeysDict;
- (id)ruleParsers;
- (void)strategyResultDidChange:withStrategyKey:;
- (void)startStrategyManagement;
- (void)addStrategyUpdateObserver:strategyKey:;
- (void)removeStrategyUpdateObserver:strategyKey:;
- (void)setStrategyKeyToRulesDict:;
- (void)setCharacterToStrategyKeysDict:;
- (void)setRuleParsers:;
- (void)setResults:;
- (id)results;
- (void).cxx_destruct;
@end
