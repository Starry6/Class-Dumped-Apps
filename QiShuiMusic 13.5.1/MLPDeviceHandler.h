@interface MLPDeviceHandler : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) <MTLCommandQueue> commandQueue;
@property (nonatomic) Q dataLayout;
- (id)commandQueue;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)device;
- (unsigned long long)dataLayout;
- (id)initWithDataLayout:;
- (id)deduceDevice;
- (id)weightMatrixFixedRowBytesWithRows:columns:;
- (id)weightMatrixWithRows:columns:stdDev:initialValues:columnMajor:;
- (id)biasVectorWithLength:stdDev:values:;
- (void)sendDataToGPU:;
- (void)importDataFromGPU:cmdBuf:;
- (id)imageFromData:width:height:featureChannels:;
- (id)imageFromMatrix:m2iKernel:cmdBuf:width:height:featureChannels:;
- (id)imageBatchFromMatrix:m2iKernel:cmdBuf:width:height:channels:;
- (id)tempMatrixWithRows:columns:cmdBuf:;
- (id)matrixWithRows:columns:cmdBuf:;
- (id)tempMatrixFromImages:i2mKernel:cmdBuf:;
- (id)matrixFromImages:i2mKernel:cmdBuf:;
- (id)vectorWithLength:cmdBuf:;
- (id)matrixToVector:;
- (float)uniformRandWithParamA:paramB:;
@end
