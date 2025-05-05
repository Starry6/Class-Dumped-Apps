@interface MPChangeRepeatModeCommand : MPRemoteCommand
@property (nonatomic) q currentRepeatType;
- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;
- (void)setCurrentRepeatType:;
- (void)setSupportedRepeatTypes:;
- (id)newCommandEventWithType:;
- (id)newCommandEventWithType:preservesRepeatMode:;
- (long long)currentRepeatType;
@end
