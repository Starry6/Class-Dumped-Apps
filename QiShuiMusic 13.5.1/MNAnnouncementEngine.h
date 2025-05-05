@interface MNAnnouncementEngine : NSObject
@property (nonatomic) MNAnnouncementPlan plan;
- (void)setPlan:;
- (id)nextEvent;
- (id)plan;
- (void).cxx_destruct;
- (void)planForEvents:distance:speed:previousEvent:timeSinceLastEvent:durations:;
- (BOOL)_advanceToResolveConflict:;
- (double)_canAdvanceEvent:;
- (BOOL)_delayToResolveConflict:;
- (double)_canDelayEvent:;
- (BOOL)_compressToResolveConflict:;
- (void)_dropToResolveConflict:;
@end
