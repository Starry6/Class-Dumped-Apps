@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer
- (void).cxx_destruct;
- (id)initWithTransform:;
- (int)finalizeAnalysis;
- (id)flipTransform:;
- (int)processMetadataGroup:flags:;
- (id)publicResults;
@end
