@interface PHMemoryRelevanceHelper : NSObject
+ (double)relevanceScoreForMemory:atDate:;
+ (BOOL)isMemory:relevantAtDate:;
+ (BOOL)isMemory:proactiveWorthyAtDate:;
+ (BOOL)_isMemoryTemporal:;
+ (BOOL)_isMemoryCategoryTemporal:;
+ (BOOL)_isMemorySubcategoryTemporal:;
+ (BOOL)_isDate:inSameDayAndMonthAsDate:;
+ (double)_notificationLevelWeightForMemory:;
+ (double)_categoryWeightForMemory:;
+ (double)_subcategoryWeightForMemory:;
@end
