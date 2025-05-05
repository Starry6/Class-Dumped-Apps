@interface MTPAFPlaylistItem : NSObject
@property (nonatomic) Q start;
@property (nonatomic) Q end;
@property (nonatomic) NSArray metricsData;
- (void)setEnd:;
- (void)setStart:;
- (unsigned long long)end;
- (id)metricsData;
- (unsigned long long)start;
- (void).cxx_destruct;
- (void)setMetricsData:;
- (id)initWithStart:end:metricsData:;
@end
