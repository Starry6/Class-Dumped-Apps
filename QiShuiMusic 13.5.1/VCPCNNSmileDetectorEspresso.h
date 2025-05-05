@interface VCPCNNSmileDetectorEspresso : VCPCNNSmileDetector
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)getInputBuffer;
- (int)computeSmileScore:;
+ (id)sharedModel:;
@end
