@interface MLCCustomLayerTensor : NSObject
@property (nonatomic) NSData cpuBuffer;
@property (nonatomic) @ gpuBuffer;
@property (nonatomic) MLCTensorDescriptor descriptor;
@property (nonatomic) MLCTensorData hostData;
@property (nonatomic) <MTLBuffer> metalBuffer;
- (id)descriptor;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithTensorDescriptor:cpuBuffer:gpuBuffer:;
- (id)hostData;
- (id)metalBuffer;
- (id)cpuBuffer;
- (void)setCpuBuffer:;
- (id)gpuBuffer;
- (void)setGpuBuffer:;
+ (id)customLayerTensorWithDescriptor:gpuBuffer:;
+ (id)customLayerTensorWithDescriptor:cpuBuffer:;
@end
