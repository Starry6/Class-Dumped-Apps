@interface MPSkipTrackCommandEvent : MPRemoteCommandEvent
@property (nonatomic) BOOL requestingDefermentToPlaybackQueuePosition;
- (id)initWithCommand:mediaRemoteType:options:;
- (BOOL)isRequestingDefermentToPlaybackQueuePosition;
@end
