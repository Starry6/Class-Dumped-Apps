@interface AVDelegatingPlaybackCoordinatorPauseCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand
@property (nonatomic) BOOL shouldBufferInAnticipationOfPlayback;
@property (nonatomic) float anticipatedPlaybackRate;
- (id)init;
- (id)originator;
- (void)dealloc;
- (id)expectedCurrentItemIdentifier;
- (float)anticipatedPlaybackRate;
- (id)initWithCoordinator:originator:expectedCurrentItemIdentifier:commandOrderIndex:shouldBufferInAnticipationOfPlayback:anticipatedPlaybackRate:;
- (BOOL)shouldBufferInAnticipationOfPlayback;
@end
