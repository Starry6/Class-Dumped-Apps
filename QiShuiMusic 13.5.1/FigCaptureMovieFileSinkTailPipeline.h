@interface FigCaptureMovieFileSinkTailPipeline : FigCapturePipeline
@property (nonatomic) <BWMRCSceneObserver> mrcSceneObserver;
@property (nonatomic) BWQuickTimeMovieFileSinkNode movieFileSinkNode;
@property (nonatomic) BWVideoCompressorNode videoCompressorNode;
@property (nonatomic) BWVideoCompressorNode sdofCompressorNode;
@property (nonatomic) FigCaptureVISPipeline visPipeline;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} irisVISCleanOutputRectForCLAP;
@property (nonatomic) {?=ii} offlineVISDimensions;
@property (nonatomic) BOOL recording;
@property (nonatomic) BOOL sceneClassifierSuspended;
- (id)offlineVISDimensions;
- (void)dealloc;
- (void)setMRCSceneObserver:;
- (id)visPipeline;
- (id)sdofCompressorNode;
- (id)initWithConfiguration:tailIndex:numTailPipelines:graph:parentPipeline:captureDevice:inferenceScheduler:recordingStatusDelegate:workgroup:;
- (BOOL)recording;
- (id)irisVISCleanOutputRectForCLAP;
- (BOOL)sceneClassifierSuspended;
- (id)videoCompressorNode;
- (void)setRecording:;
- (id)mrcSceneObserver;
- (void)setSceneClassifierSuspended:;
- (id)movieFileSinkNode;
@end
