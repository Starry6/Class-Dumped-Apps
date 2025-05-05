@interface ASDUpdateMetricsStore : NSObject
@property (nonatomic) double averagePollTime;
@property (nonatomic) NSArray metrics;
@property (nonatomic) NSDate lastAutoPollDate;
- (id)init;
- (id)metrics;
- (void)synchronize;
- (void).cxx_destruct;
- (void)addPoll:;
- (double)averagePollTime;
- (id)lastAutoPollDate;
@end
