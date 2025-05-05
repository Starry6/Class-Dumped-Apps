@interface ICLiveLinkPlaybackCoordinatorMedium : NSObject
@property (nonatomic) NSUUID localParticipantUUID;
@property (nonatomic) {os_unfair_lock_s=I} fetchServerStateLock;
@property (nonatomic) q fetchServerStateInProgressCount;
@property (nonatomic) NSMutableArray fetchServerStateCompletions;
@property (nonatomic) ICLiveLink liveLink;
- (void)handleNewTransportControlStateDictionary:;
- (void)removeParticipant:;
- (void).cxx_destruct;
- (void)handleNewParticipantStateDictionary:;
- (id)initWithLiveLink:;
- (BOOL)isCoordinatorSuspended;
- (void)handlePlaybackSyncPayload:;
- (void)synchronizePlaybackStateForReason:;
- (void)clearCoordinationMediumDelegate;
- (void)_broadcastLocalParticipantStateDictionary:;
- (void)_broadcastTransportControlStateDictionary:forItemWithIdentifier:;
- (void)_reloadTransportControlStateForItemWithIdentifier:completionHandler:;
- (id)liveLink;
- (id)localParticipantUUID;
- (id)fetchServerStateLock;
- (long long)fetchServerStateInProgressCount;
- (id)fetchServerStateCompletions;
@end
