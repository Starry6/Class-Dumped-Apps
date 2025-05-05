@interface PDFPageAnalyzer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
- (id)init;
- (void)setCallbackQueue:;
- (id)callbackQueue;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)processPage:withCompletion:;
- (void)_addTextFromAnalysis:ofImage:toPDFPage:;
- (void)_drawTextFromAnalysis:ofImage:intoContext:withBounds:;
- (id)_testPixelsFromPoint:toPoint:compare:;
- (id)_computeEdgeInsetsForQuad:inImage:background:glyphCount:;
+ (id)sharedInstance;
@end
