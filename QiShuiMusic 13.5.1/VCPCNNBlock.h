@interface VCPCNNBlock : NSObject
@property (nonatomic) NSMutableArray inputSize;
@property (nonatomic) NSMutableArray outputSize;
@property (nonatomic) VCPCNNData input;
@property (nonatomic) VCPCNNData output;
@property (nonatomic) VCPCNNMetalContext context;
@property (nonatomic) BOOL generateOutput;
- (id)output;
- (id)input;
- (id)context;
- (void)setInput:;
- (void)setOutput:;
- (int)forward;
- (id)outputSize;
- (id)inputSize;
- (void).cxx_destruct;
- (void)setInputSize:;
- (void)setOutputSize:;
- (BOOL)useGPU;
- (BOOL)supportGPU;
- (int)readFromDisk:quantFactor:;
- (int)constructBlock:context:;
- (BOOL)generateOutput;
- (void)setGenerateOutput:;
@end
