@interface VCPCNNPetsDetectorEspresso : VCPCNNPetsDetector
- (void)dealloc;
- (void).cxx_destruct;
- (int)createModel:srcWidth:;
- (id)getInputBuffer:srcWidth:cnnInputHeight:cnnInputWidth:;
- (int)generatePetsBoxes:faceBoxes:cancel:;
- (id)initWithMaxNumRegions:;
+ (id)sharedModel:;
@end
