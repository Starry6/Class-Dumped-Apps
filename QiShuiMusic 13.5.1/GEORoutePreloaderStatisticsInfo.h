@interface GEORoutePreloaderStatisticsInfo : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)incrementTileLoadStatistic:amount:;
- (id)initWithTransportType:;
- (void)loadedTileKey:source:sizeInBytes:;
- (void)missedTileKey:loadedSuccessfully:sizeInBytes:;
- (void)finishAndReportIfNecessaryForDistance:;
@end
