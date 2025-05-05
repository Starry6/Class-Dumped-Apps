@interface MPSMatrixCopyDescriptor : NSObject
- (void)dealloc;
- (id)initWithDevice:count:;
- (void)setCopyOperationAtIndex:sourceMatrix:destinationMatrix:offsets:;
- (id)sourceMatrices;
- (id)destinationMatrices;
- (id)cpuOffsetsVector;
- (id)gpuOffsetsVector;
- (unsigned long long)gpuBufferOffset;
- (unsigned long long)allocCount;
- (unsigned long long)filledCount;
- (id)initWithSourceMatrices:destinationMatrices:offsetVector:offset:;
+ (id)descriptorWithSourceMatrix:destinationMatrix:offsets:;
@end
