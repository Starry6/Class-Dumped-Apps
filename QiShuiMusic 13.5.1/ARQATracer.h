@interface ARQATracer : NSObject
@property (nonatomic) NSString traceOutputFilePath;
@property (nonatomic) BOOL recordScreen;
@property (nonatomic) @ screenRecorder;
@property (nonatomic) {CGPoint=dd} offset;
@property (nonatomic) BOOL forceQuitApp;
@property (nonatomic) NSMutableDictionary additionalResults;
@property (nonatomic) <ARQATracerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_startScreenRecording;
- (void)_stopScreenRecording;
- (void)setOffset:;
- (id)init;
- (void)start:;
- (void)dealloc;
- (void)setDelegate:;
- (void)stop;
- (id)offset;
- (void)session:didChangeState:;
- (id)delegate;
- (void).cxx_destruct;
- (void)session:didUpdateFrame:;
- (id)additionalResults;
- (void)replaySensorDidFinishReplayingData;
- (void)traceRaycastQuery:;
- (void)traceRaycastResults:;
- (void)trace:forKey:;
- (void)receiveDefaults;
- (void)writeJSONObjectToStream:prefix:;
- (void)writeStringToOutputStream:;
- (void)flushDataBufferToFile;
- (void)update:session:;
- (BOOL)isSemanticSegmentationDataAvailableForSession:;
- (BOOL)_shouldDumpSemanticData;
- (id)_createRecordablePixelBufferFromSegmentationBuffer:;
- (id)_createRecordablePixelBufferFromSemanticsBuffer:;
- (id)traceOutputFilePath;
- (void)setTraceOutputFilePath:;
- (BOOL)recordScreen;
- (void)setRecordScreen:;
- (id)screenRecorder;
- (void)setScreenRecorder:;
- (BOOL)forceQuitApp;
- (void)setForceQuitApp:;
- (void)setAdditionalResults:;
+ (BOOL)isEnabled;
+ (id)traceOutputDirectory;
@end
