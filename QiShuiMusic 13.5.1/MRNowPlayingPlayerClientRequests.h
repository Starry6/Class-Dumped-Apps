@interface MRNowPlayingPlayerClientRequests : NSObject
@property (nonatomic) MRPlayerPath playerPath;
@property (nonatomic) MRPlaybackQueueSubscriptionController subscriptionController;
@property (nonatomic) I playbackState;
@property (nonatomic) MRPlaybackQueue playbackQueue;
@property (nonatomic) NSArray supportedCommands;
@property (nonatomic) MRPlayer playerProperties;
- (void)restoreNowPlayingClientState;
- (void)handlePlayerPropertiesRequestWithCompletion:;
- (void)updateContentItems:;
- (void)dealloc;
- (unsigned int)playbackState;
- (void)setPlaybackState:;
- (void)setPlaybackQueue:;
- (void)handleSupportedCommandsRequestWithCompletion:;
- (id)initWithPlayerPath:;
- (id)playbackQueue;
- (void)setSupportedCommands:;
- (void)handlePlaybackStateRequestWithCompletion:;
- (id)supportedCommands;
- (id)debugDescription;
- (id)playerProperties;
- (void)setPlayerProperties:;
- (void).cxx_destruct;
- (void)updateContentItemArtwork:;
- (void)enqueuePlaybackQueueRequest:completion:;
- (id)playerPath;
- (id)subscriptionController;
@end
