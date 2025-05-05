@interface MPChangePlaybackRateCommandEvent : MPRemoteCommandEvent
@property (nonatomic) float playbackRate;
- (float)playbackRate;
- (id)initWithCommand:mediaRemoteType:options:;
@end
