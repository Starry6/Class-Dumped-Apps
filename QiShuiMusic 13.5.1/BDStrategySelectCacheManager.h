@interface BDStrategySelectCacheManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)loadStrategySelectCache;
+ (void)loadStrategySelectCacheWithMD5Map:signature:;
+ (id)ruleSetNamesForCacheKey:inSet:;
+ (id)ruleSetNamesForInput:withFilterKeys:inSet:;
+ (void)setRuleSetNames:forCacheKey:inSet:;
+ (void)setRuleSetNames:forInput:withFilterKeys:inSet:;
+ (id)uniqueIDWithSetName:;
+ (id)signature;
@end
