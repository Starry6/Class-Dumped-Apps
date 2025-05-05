@interface BWVideoOrientationMetadataNode : BWNode
@property (nonatomic) BWVideoOrientationTimeMachine videoOrientationTimeMachine;
- (void)setPhysicalMirroringForMovieRecordingEnabled:;
- (void)setMasterClock:;
- (id)init;
- (BOOL)physicalMirroringForMovieRecordingEnabled;
- (void)dealloc;
- (id)nodeType;
- (void)updateVideoOrientation:;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)setSourcePosition:;
- (id)videoOrientationTimeMachine;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)masterClock;
- (id)nodeSubType;
- (void)updateVideoMirrored:;
- (int)sourcePosition;
@end
