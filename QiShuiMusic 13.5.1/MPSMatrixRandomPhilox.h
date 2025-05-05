@interface MPSMatrixRandomPhilox : MPSMatrixRandom
- (id)initWithCoder:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)initWithDevice:destinationDataType:seed:distributionDescriptor:;
- (id)initWithDevice:destinationDataType:seed:;
- (void)encodeToCommandBuffer:destinationVector:;
- (void)encodeToCommandBuffer:destinationMatrix:;
@end
