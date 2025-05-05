@interface BKSProcess : NSObject
@property (nonatomic) BOOL nowPlayingWithAudio;
@property (nonatomic) BOOL recordingAudio;
@property (nonatomic) q terminationReason;
@property (nonatomic) BSProcessHandle handle;
@property (nonatomic) double backgroundTimeRemaining;
@property (nonatomic) BKSProcessExitContext lastExitContext;
- (long long)terminationReason;
- (id)init;
- (id)lastExitContext;
- (id)handle;
- (id)initWithBundleIdentifier:;
- (void)setRecordingAudio:;
- (void)setNowPlayingWithAudio:;
- (void).cxx_destruct;
- (void)setTerminationReason:;
- (id)description;
- (id)initWithProcessIdentity:;
- (void)invalidate;
- (double)backgroundTimeRemaining;
- (BOOL)recordingAudio;
- (BOOL)nowPlayingWithAudio;
- (void)bootstrapCurrentProcess;
- (BOOL)bootstrapWithProcessHandle:error:;
- (BOOL)_bootstrapWithError:;
+ (id)currentProcess;
+ (double)backgroundTimeRemaining;
+ (id)busyExtensionInstances:;
@end
