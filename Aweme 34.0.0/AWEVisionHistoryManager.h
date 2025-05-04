@interface AWEVisionHistoryManager : NSObject
+ (void)cleanVisionHistoryImage;
+ (BOOL)getVisionHistoryCleanEnable;
+ (id)getHistorySorted;
+ (long long)getVisionHistoryCleanMaxCount;
+ (long long)getVisionHistoryCleanMaxDay;
+ (void)deleteHistoryWithIds:;
@end
