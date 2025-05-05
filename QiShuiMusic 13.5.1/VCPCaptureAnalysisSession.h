@interface VCPCaptureAnalysisSession : NSObject
@property (nonatomic) NSDictionary aggregatedResults;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)prewarmWithProperties:;
- (BOOL)finalizeAnalysis;
- (id)analyzePixelBuffer:withTimestamp:andDuration:properties:error:;
- (int)analyzePixelBuffer:withTimestamp:andDuration:properties:completion:;
- (id)flipTransform:;
- (id)initWithAnalysisTypes:withPreferredTransform:withFocalLengthInPixels:withAnalysisQueue:withTurbo:;
- (BOOL)updatePreferredTransform:properties:;
- (id)transformForAngle:pixelBuffer:;
- (id)rotateTransform:byAngle:;
- (int)analyzeAudioBuffer:;
- (id)aggregatedResults;
- (int)analyzeFrameWithTimeRange:analysisData:;
- (BOOL)shouldCutAt:stillPTS:withCut:;
+ (id)analyzerForAnalysisTypes:withPreferredTransform:properties:;
+ (id)aggregateAnalysisForTypes:withFramesMeta:properties:;
@end
