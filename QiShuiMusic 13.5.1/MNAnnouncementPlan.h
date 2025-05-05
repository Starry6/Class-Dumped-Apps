@interface MNAnnouncementPlan : NSObject
@property (nonatomic) NSArray events;
@property (nonatomic) NSMutableArray plannedEvents;
@property (nonatomic) double distance;
@property (nonatomic) double speed;
- (double)distance;
- (void)setSpeed:;
- (void)setDistance:;
- (double)speed;
- (void)setEvents:;
- (void).cxx_destruct;
- (id)events;
- (id)description;
- (id)initWithEvents:distance:speed:durations:;
- (id)nextConflict;
- (void)sortEvents;
- (id)plannedEvents;
- (void)setPlannedEvents:;
+ (double)desiredTimeGapBetweenEvent:andEvent:;
@end
