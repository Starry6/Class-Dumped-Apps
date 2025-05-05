@interface AVPlaybackCoordinator : NSObject
@property (nonatomic) NSArray otherParticipants;
@property (nonatomic) NSArray suspensionReasons;
- (id)initInternal;
- (id)init;
- (long long)participantLimitForWaitingOutSuspensionsWithReason:;
- (id)expectedItemTimeAtHostTime:;
- (id)suspensionReasons;
- (void)_endSuspension:proposingNewTime:;
- (id)beginSuspensionForReason:;
- (void)setParticipantLimit:forWaitingOutSuspensionsWithReason:;
- (BOOL)pauseSnapsToMediaTimeOfOriginator;
- (id)suspensionReasonsThatTriggerWaiting;
- (void)setSuspensionReasonsThatTriggerWaiting:;
- (void)setPauseSnapsToMediaTimeOfOriginator:;
- (id)_currentWaitingPoliciesArray;
- (id)otherParticipants;
- (void)_endSuspension:;
@end
