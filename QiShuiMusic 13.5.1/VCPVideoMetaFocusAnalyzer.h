@interface VCPVideoMetaFocusAnalyzer : NSObject
@property (nonatomic) NSArray results;
- (id)init;
- (id)results;
- (void).cxx_destruct;
- (int)finalizeAnalysis;
- (int)processFrameMetadata:;
- (void)addSegmentToResults;
@end
