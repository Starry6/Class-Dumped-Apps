@interface AVDelegatingPlaybackCoordinatorBufferingCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand
@property (nonatomic) float anticipatedPlaybackRate;
@property (nonatomic) NSDate completionDueDate;
- (id)init;
- (id)originator;
- (void)dealloc;
- (id)expectedCurrentItemIdentifier;
- (id)initWithCoordinator:originator:expectedCurrentItemIdentifier:commandOrderIndex:anticipatedPlaybackRate:completionDueDate:;
- (float)anticipatedPlaybackRate;
- (id)completionDueDate;
@end
