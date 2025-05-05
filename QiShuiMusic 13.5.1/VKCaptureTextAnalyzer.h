@interface VKCaptureTextAnalyzer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> _processingQueue;
@property (nonatomic) VKCaptureTextAnalysisRequest _pendingRequest;
@property (nonatomic) VKCaptureTextAnalysisRequest _processingRequest;
@property (nonatomic) BOOL _processing;
@property (nonatomic) BOOL shouldCreateFeedbackProviders;
- (void)cancelAllRequests;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_pendingRequest;
- (id)_processingQueue;
- (id)_processingRequest;
- (void)processRequest:;
- (BOOL)_isCanceledRequest:;
- (void)_enqueueProcessingForRequest:;
- (void)_didProcessRequest:withDetectionResult:analysis:error:;
- (id)_blocksIntersectingQuad:inDocument:;
- (id)_imageAnalysisForDocument:imageSize:;
- (id)_documentDetectionRequest;
- (id)_documentRecognitionRequestWithInputBlock:;
- (id)_documentRecognitionRequestWithInputBlocks:;
- (BOOL)shouldCreateFeedbackProviders;
- (void)setShouldCreateFeedbackProviders:;
- (void)_setPendingRequest:;
- (void)_setProcessingRequest:;
- (BOOL)_isProcessing;
- (void)_setProcessing:;
@end
