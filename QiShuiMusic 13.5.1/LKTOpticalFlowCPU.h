@interface LKTOpticalFlowCPU : LKTOpticalFlow
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWidth:height:numScales:;
- (BOOL)setOutputUV:error:;
- (BOOL)estimateFlowFromReference:target:error:;
- (BOOL)estimateFlowStream:error:;
@end
