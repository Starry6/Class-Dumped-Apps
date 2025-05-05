@interface MPChangePlaybackPositionCommand : MPRemoteCommand
@property (nonatomic) BOOL canBeControlledByScrubbing;
- (id)_mediaRemoteCommandInfoOptions;
- (BOOL)canBeControlledByScrubbing;
- (id)initWithMediaRemoteCommandType:;
- (void)setCanBeControlledByScrubbing:;
- (id)newCommandEventWithPositionTime:;
@end
