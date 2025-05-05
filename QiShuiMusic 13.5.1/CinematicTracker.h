@interface CinematicTracker : NSObject
@property (nonatomic) <CinematicTrackerDelegate> delegate;
@property (nonatomic) CinematicFramingSessionOptions options;
@property (nonatomic) NSArray tracks;
- (id)tracks;
- (void)setOptions:;
- (id)init;
- (void)setDelegate:;
- (id)options;
- (id)delegate;
- (void).cxx_destruct;
- (void)removeTrackOfType:atIndex:atTime:;
- (void)processInput:inView:;
- (void)resetTracksFramingProperties;
- (void)processDetections:ofType:atTime:;
- (void)updateBodyFacePairsAtTime:;
@end
