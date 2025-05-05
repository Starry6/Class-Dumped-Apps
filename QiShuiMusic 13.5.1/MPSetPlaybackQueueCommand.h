@interface MPSetPlaybackQueueCommand : MPRemoteCommand
@property (nonatomic) q upNextItemCount;
- (void)setUpNextItemCount:;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:;
- (void)unregisterSpecializedQueueIdentifier:;
- (void)unregisterSupportedCustomQueueIdentifier:;
- (long long)upNextItemCount;
- (void).cxx_destruct;
- (void)unregisterSupportedQueueType:;
- (void)setSupportedSharedQueue:;
- (void)registerSupportedQueueType:;
- (void)registerSpecializedQueueIdentifier:localizedName:queueType:queueParameters:;
- (void)registerSupportedCustomQueueIdentifier:;
@end
