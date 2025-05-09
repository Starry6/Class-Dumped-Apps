@interface AVCaptureFileOutput : AVCaptureOutput
@property (nonatomic) BOOL virtualCaptureCardSupported;
@property (nonatomic) BOOL usesVirtualCaptureCard;
@property (nonatomic) <AVCaptureFileOutputDelegate> delegate;
@property (nonatomic) NSURL outputFileURL;
@property (nonatomic) BOOL recording;
@property (nonatomic) BOOL recordingPaused;
@property (nonatomic) {?=qiIq} recordedDuration;
@property (nonatomic) q recordedFileSize;
@property (nonatomic) {?=qiIq} maxRecordedDuration;
@property (nonatomic) q maxRecordedFileSize;
@property (nonatomic) q minFreeDiskSpaceLimit;
- (void)dealloc;
- (void)setDelegate:;
- (void)setUsesVirtualCaptureCard:;
- (id)delegate;
- (BOOL)usesVirtualCaptureCard;
- (void)resumeRecording;
- (void)pauseRecording;
- (BOOL)isRecording;
- (void)stopRecording;
- (void)startRecordingToOutputFileURL:recordingDelegate:;
- (id)outputFileURL;
- (BOOL)isVirtualCaptureCardSupported;
- (id)maxRecordedDuration;
- (long long)maxRecordedFileSize;
- (long long)minFreeDiskSpaceLimit;
- (BOOL)pausesRecordingOnInterruption;
- (id)initSubclass;
- (BOOL)isRecordingPaused;
- (void)setPausesRecordingOnInterruption:;
- (id)recordedDuration;
- (long long)recordedFileSize;
- (void)setMaxRecordedDuration:;
- (void)setMaxRecordedFileSize:;
- (void)setMinFreeDiskSpaceLimit:;
@end
