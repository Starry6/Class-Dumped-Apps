@interface VCPCNNModel : NSObject
@property (nonatomic) VCPCNNData output;
- (id)output;
- (int)add:;
- (id)init;
- (void).cxx_destruct;
- (int)size;
- (id)initWithParameters:useGPU:;
- (id)getGPUContext;
- (int)prepareNetworkFromURL:withInputSize:;
- (int)forward:;
- (int)dynamicForward:paramFileUrl:cancel:;
@end
