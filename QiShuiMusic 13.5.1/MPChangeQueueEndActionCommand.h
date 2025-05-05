@interface MPChangeQueueEndActionCommand : MPRemoteCommand
@property (nonatomic) q currentQueueEndAction;
@property (nonatomic) NSArray supportedQueueEndActions;
- (long long)currentQueueEndAction;
- (void)setSupportedQueueEndActions:;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setCurrentQueueEndAction:;
- (id)supportedQueueEndActions;
- (void).cxx_destruct;
@end
