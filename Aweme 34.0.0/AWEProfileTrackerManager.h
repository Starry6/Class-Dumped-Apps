@interface AWEProfileTrackerManager : NSObject
+ (void)trackEvent:originalParams:profileContext:logExtraDict:enableMXBTracker:;
+ (void)addDictionaryTo:fromDictionary:conflictModels:;
+ (void)reportConflictParamsIfNeed:aspectParams:transmissionParams:;
+ (void)checkParamsConflictWithKey:value:toDic:conflictModels:;
+ (void)trackEvent:originalParams:profileContext:logExtraDict:;
@end
