@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline
@property (nonatomic) BOOL momentCaptureMovieRecordingEnabled;
@property (nonatomic) BOOL recording;
@property (nonatomic) BOOL recordedWhileMultitasking;
@property (nonatomic) NSMutableArray pendingIrisRecordings;
- (void)dealloc;
- (void)setRecordedWhileMultitasking:;
- (void)setPendingIrisRecordings:;
- (BOOL)recording;
- (id)pendingIrisRecordings;
- (BOOL)momentCaptureMovieRecordingEnabled;
- (void)setRecording:;
- (BOOL)recordedWhileMultitasking;
- (void)setMomentCaptureMovieRecordingEnabled:;
@end
