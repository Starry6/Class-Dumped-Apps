@interface MTPAFPlaylist : NSObject
@property (nonatomic) NSArray metricsData;
@property (nonatomic) NSMutableArray items;
- (id)metricsData;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)currentItems;
- (void)addItemStartAtSeconds:durationSeconds:metricsData:;
- (void)addItemStartAtMilliseconds:durationMilliseconds:metricsData:;
- (void)addItemStartAtMilliseconds:endAtMilliseconds:metricsData:;
- (void)updateEventData:;
- (void)setMetricsData:;
- (id)initWithSharedMetricsData:;
@end
