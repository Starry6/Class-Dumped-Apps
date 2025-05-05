@interface MLCGPUHelper : NSObject
+ (void)synchronizeResource:commandBuffer:;
+ (unsigned long long)mtlStorageMode;
+ (unsigned long long)mtlResourceOptions;
+ (void)didModifyRange:buffer:;
+ (void)concatChannelsForwardWithParams:sourceImageBatch:resultImageBatch:commandBuffer:device:deviceIndex:;
+ (void)copyMTLBufferToMPSImageBatch:commandBuffer:sourceMTLBuffer:destinationImageBatch:MLCDataType:;
+ (void)copyMPSImageBatchToMTLBuffer:commandBuffer:sourceImageBatch:destinationMTLBuffer:MLCDataType:;
+ (id)allocateTemporaryMPSImageBatchForTensor:commandBuffer:kernel:batchSize:;
+ (id)allocateMPSImageBatchForTensor:commandBuffer:kernel:batchSize:heapAllocator:imageBatchIsTemporary:;
+ (id)allocateAndCopyToTemporaryMPSImageBatchForTensor:commandBuffer:batchSize:copyingKernel:sourceMTLBuffer:MLCDataType:heapAllocator:;
@end
