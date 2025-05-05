@interface ICLinkLinkAVPlaybackCoordinatorMedium : ICLiveLinkPlaybackCoordinatorMedium
@property (nonatomic) AVPlayerPlaybackCoordinator playbackCoordinator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleNewTransportControlStateDictionary:;
- (void)removeParticipant:;
- (void).cxx_destruct;
- (void)handleNewParticipantStateDictionary:;
- (id)localParticipantUUIDForPlaybackCoordinator:;
- (id)playbackCoordinator;
- (void)playbackCoordinator:broadcastTransportControlStateDictionary:forItemWithIdentifier:;
- (void)playbackCoordinator:broadcastLocalParticipantStateDictionary:;
- (void)playbackCoordinator:reloadTransportControlStateForItemWithIdentifier:completionHandler:;
- (BOOL)isCoordinatorSuspended;
- (void)clearCoordinationMediumDelegate;
- (void)_playbackCoordinatorDidIssueCommandToPlaybackObjectNotification:;
- (id)initWithPlaybackCoordinator:liveLink:;
@end
