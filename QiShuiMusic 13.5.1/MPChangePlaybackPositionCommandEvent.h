@interface MPChangePlaybackPositionCommandEvent : MPRemoteCommandEvent
@property (nonatomic) double positionTime;
- (id)initWithCommand:mediaRemoteType:options:;
- (double)positionTime;
@end
