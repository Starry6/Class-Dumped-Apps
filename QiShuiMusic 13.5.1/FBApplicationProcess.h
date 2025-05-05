@interface FBApplicationProcess : FBProcess
@property (nonatomic) BOOL recordingAudio;
@property (nonatomic) BOOL nowPlayingWithAudio;
@property (nonatomic) BOOL connectedToExternalAccessory;
@property (nonatomic) double elapsedCPUTime;
- (id)_queue_createLegacyAssertionForReason:withName:;
- (double)elapsedCPUTime;
- (BOOL)isNowPlayingWithAudio;
- (void)killForReason:andReport:withDescription:completion:;
- (void)setRecordingAudio:;
- (void)setNowPlayingWithAudio:;
- (BOOL)isConnectedToExternalAccessory;
- (BOOL)isRecordingAudio;
- (BOOL)isApplicationProcess;
- (void).cxx_destruct;
- (void)setConnectedToExternalAccessory:;
- (void)_bootstrapDidComplete;
- (void)_noteProcessDidExit:;
- (void)_finishInit;
- (id)_createBootstrapContext;
- (void)killForReason:andReport:withDescription:;
+ (id)_internalDebugEnvironmentVariables;
@end
