@interface AWEInTodayPreAggregate : NSObject
+ (void)reportPermission;
+ (void)clearCachedExistDateList;
+ (id)cachedExistDateList;
+ (void)reportCancelDate;
+ (id)albumKeyPrefix;
+ (id)encodePastMemoryDayAlbumByAlbumKey:;
+ (void)recordReportedDateList:;
+ (id)cachedWillReportKey;
+ (id)encodeDateWith:;
+ (id)cachedExistKey;
+ (void)reportAggregateAlbums:error:;
+ (void)updatePreAggreatedWithAlbumKeys:;
+ (BOOL)hasPreAggreatedWithAlbumKey:;
@end
