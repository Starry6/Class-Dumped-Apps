@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand
@property (nonatomic) NSArray supportedInsertionPositions;
- (id)_mediaRemoteCommandInfoOptions;
- (id)supportedInsertionPositions;
- (id)initWithMediaRemoteCommandType:;
- (void)setSupportedInsertionPositions:;
- (void)unregisterSupportedCustomQueueIdentifier:;
- (void).cxx_destruct;
- (void)unregisterSupportedQueueType:;
- (void)setSupportedSharedQueue:;
- (void)registerSupportedQueueType:;
- (void)registerSupportedCustomQueueIdentifier:;
@end
