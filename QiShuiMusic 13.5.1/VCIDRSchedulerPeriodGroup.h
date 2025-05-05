@interface VCIDRSchedulerPeriodGroup : NSObject
@property (nonatomic) I basePeriodCount;
- (void)dealloc;
- (id)description;
- (void)addStream:;
- (void)computeStreamsIDRPosition;
- (id)initWithPeriodCount:framesPerBasePeriod:;
- (id)computeScheduleItemList;
- (unsigned int)basePeriodCount;
@end
