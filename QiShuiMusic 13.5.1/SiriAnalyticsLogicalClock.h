@interface SiriAnalyticsLogicalClock : NSObject
@property (nonatomic) NSUUID clockIdentifier;
@property (nonatomic) q timestampOffset;
@property (nonatomic) SiriAnalyticsLogicalClockStatistics clockStatistics;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)stopClock;
- (id)initWithClockIdentifier:timestampOffset:startedOn:;
- (BOOL)containsTimestamp:;
- (id)clockIdentifier;
- (id)logicalTimestampForMachAbsoluteTime:;
- (long long)timestampOffset;
- (id)clockStatistics;
@end
