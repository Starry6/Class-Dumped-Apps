@interface VCPVideoMetaMotionAnalyzer : NSObject
@property (nonatomic) NSArray results;
- (id)init;
- (id)results;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)finalizeAnalysis;
- (BOOL)decideSegmentPointBasedOn:;
- (int)processFrameMetadata:;
- (void)mergeSimilarSegments;
@end
