@interface MPSetPriorityForPlaybackSessionCommand : MPRemoteCommand
@property (nonatomic) NSArray preloadedSessions;
- (id)_mediaRemoteCommandInfoOptions;
- (id)preloadedSessions;
- (void).cxx_destruct;
- (void)setPreloadedSessions:;
@end
