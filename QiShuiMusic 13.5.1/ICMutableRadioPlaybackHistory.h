@interface ICMutableRadioPlaybackHistory : ICRadioPlaybackHistory
@property (nonatomic) ICRadioPlaybackHistoryItem currentTrack;
@property (nonatomic) q numberOfSkips;
@property (nonatomic) NSArray tracks;
- (void)setTracks:;
- (void)addTracks:;
- (void)addTrack:;
- (void)removeExpiredTracks;
- (void)removeTracksAtIndexes:;
- (void)replaceTrackAtIndex:withTrack:;
- (void)setCurrentTrack:;
- (void)setNumberOfSkips:;
- (void)_checkCurrentTrackIsPresent;
- (void)_updateTracksUsingBlock:;
@end
