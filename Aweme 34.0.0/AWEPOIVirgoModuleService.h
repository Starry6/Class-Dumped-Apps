@interface AWEPOIVirgoModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)strategyResultWithKey:;
+ (void)batchCollectInformation:;
+ (id)characterValueForKey:;
+ (void)triggerTimingWithKey:;
+ (void)registerUnit:withKey:;
+ (BOOL)virgoEnable;
+ (void)addStrategyObserver:forKey:;
+ (void)removeStrategyObserver:forKey:;
+ (void)addFactorWithKey:;
+ (id)buildStrategyObserverForKey:withContainer:;
+ (id)observerForKey:withContainer:;
+ (void)commitRule:taskKey:;
+ (void)removeRuleWithTaskKey:;
+ (void)removeUnitWithKey:;
+ (void)registerUnitManager:;
+ (id)lifePoiPreloadCharacters;
+ (void)setupEngine;
@end
