@interface PLClusterTimeInfo : NSObject
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) double endOfSameDayTimestamp;
@property (nonatomic) double maximumNextDayTimestamp;
@property (nonatomic) NSDate latestUTCDate;
- (id)calendar;
- (void)updateWithUTCDate:localDate:;
- (void)_updateTimestampsWithUTCDate:localDate:;
- (id)initWithCalendar:;
- (void).cxx_destruct;
- (void)reset;
- (double)endOfSameDayTimestamp;
- (double)maximumNextDayTimestamp;
- (id)latestUTCDate;
- (BOOL)utcDateBelongsInCluster:;
@end
