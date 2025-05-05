@interface VCPPriorityAnalysis : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)addKeypointsToNSArray:keypointConfidence:handBox:keypointsArray:;
- (int)fastSignLanguageDetection:ofPixelBuffer:withMetadata:;
- (int)calculatePriorityScore:ofPixelBuffer:withMetadata:;
+ (id)priorityAnalysis;
@end
