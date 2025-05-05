@interface VCPRealTimeAnalysisService : NSObject
- (id)init;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)invalidate;
- (void)requestAnalysis:ofPixelBuffer:withProperties:withCompletionHandler:;
+ (id)analysisService;
+ (id)errorWithStatus:andDescription:;
@end
