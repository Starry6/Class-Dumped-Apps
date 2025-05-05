@interface PLLibraryScopeRule : NSObject
@property (nonatomic) PLLibraryScopeConditionDateRange dateRangeCondition;
@property (nonatomic) PLLibraryScopeConditionPerson personCondition;
@property (nonatomic) NSMutableArray unknownConditions;
- (void)addCondition:;
- (id)initWithQuery:;
- (id)query;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)removeConditionOfType:;
- (id)dateRangeCondition;
- (id)personCondition;
- (id)unknownConditions;
- (id)allConditions;
- (id)backingPredicateInPhotoLibrary:;
+ (id)dataForLibraryScopeRules:;
+ (id)queryForLibraryScopeRules:;
+ (id)libraryScopeRulesForLibraryScopeRulesData:;
+ (id)_knownConditionClasses;
+ (id)_dictionaryOfArrayOfSingleQueriesToCriteriaFromRuleQuery:parentQuery:;
+ (id)_rulesFromQuery:;
@end
