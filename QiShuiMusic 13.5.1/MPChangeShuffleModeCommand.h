@interface MPChangeShuffleModeCommand : MPRemoteCommand
@property (nonatomic) q currentShuffleType;
- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;
- (id)newCommandEventWithType:;
- (void)setCurrentShuffleType:;
- (void)setSupportedShuffleTypes:;
- (id)newCommandEventWithType:preservesShuffleMode:;
- (long long)currentShuffleType;
@end
