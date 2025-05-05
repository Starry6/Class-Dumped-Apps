@interface AVDelegatingPlaybackCoordinatorSeekCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand
@property (nonatomic) {?=qiIq} itemTime;
@property (nonatomic) BOOL shouldBufferInAnticipationOfPlayback;
@property (nonatomic) float anticipatedPlaybackRate;
@property (nonatomic) NSDate completionDueDate;
- (id)init;
- (id)originator;
- (void)dealloc;
- (id)expectedCurrentItemIdentifier;
- (id)itemTime;
- (float)anticipatedPlaybackRate;
- (id)completionDueDate;
- (BOOL)shouldBufferInAnticipationOfPlayback;
- (id)initWithCoordinator:originator:expectedCurrentItemIdentifier:commandOrderIndex:itemTime:shouldPause:shouldBufferInAnticipationOfPlayback:anticipatedPlaybackRate:completionDueDate:;
@end
