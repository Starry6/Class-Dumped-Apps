@interface BWPendingIrisRecordingRequest : NSObject
@property (nonatomic) FigCaptureMovieFileRecordingSettings settings;
@property (nonatomic) q enqueuedHostTime;
@property (nonatomic) BWIrisMovieInfo irisMovieInfo;
@property (nonatomic) {?=qiIq} momentCaptureMovieRecordingMasterEndTime;
@property (nonatomic) BOOL pairedRequestCreated;
@property (nonatomic) BOOL isEmpty;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)settings;
- (id)description;
- (id)copyWithZone:;
- (id)momentCaptureMovieRecordingMasterEndTime;
- (void)setMomentCaptureMovieRecordingMasterEndTime:;
- (long long)enqueuedHostTime;
- (void)setEnqueuedHostTime:;
- (BOOL)isPairedRequestCreated;
- (void)setPairedRequestCreated:;
- (id)irisMovieInfo;
- (void)setIrisMovieInfo:;
+ (id)irisRecordingRequestWithFigCaptureMovieFileRecordingSettings:;
@end
