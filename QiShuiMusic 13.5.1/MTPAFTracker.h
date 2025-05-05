@interface MTPAFTracker : NSObject
@property (nonatomic) NSArray videoTrackers;
@property (nonatomic) NSArray playlistBindings;
@property (nonatomic) MTPAFActivity currentActivity;
- (id)currentActivity;
- (void).cxx_destruct;
- (void)setCurrentActivity:;
- (void)updateEventData:;
- (void)synchronizeAtMilliseconds:;
- (void)trackPlaylist:using:;
- (void)playStartedWithPlaybackRate:atSeconds:type:reason:eventData:;
- (void)playStartedWithPlaybackRate:atMilliseconds:type:reason:eventData:;
- (void)playStartedAtSeconds:type:reason:eventData:;
- (void)playStartedAtMilliseconds:type:reason:eventData:;
- (void)playStoppedAtSeconds:type:reason:eventData:;
- (void)playStoppedAtMilliseconds:type:reason:eventData:;
- (void)seekStartedAtSeconds:type:reason:eventData:;
- (void)seekStartedAtMilliseconds:type:reason:eventData:;
- (void)seekStoppedAtSeconds:type:reason:eventData:;
- (void)seekStoppedAtMilliseconds:type:reason:eventData:;
- (void)synchronizeAtSeconds:;
- (void)forEachVideoTracker:;
- (void)startActivity:playbackRate:atMilliseconds:triggerType:reason:eventData:;
- (void)stopActivity:atMilliseconds:triggerType:reason:eventData:;
- (id)videoTrackers;
- (void)setVideoTrackers:;
- (id)playlistBindings;
- (void)setPlaylistBindings:;
@end
