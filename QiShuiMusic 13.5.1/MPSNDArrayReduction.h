@interface MPSNDArrayReduction : MPSNDArrayUnaryKernel
@property (nonatomic) NSInteger operation;
@property (nonatomic) Q axis;
@property (nonatomic) NSArray axes;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (int)operation;
- (void)dealloc;
- (void)setAxis:;
- (void)encodeWithCoder:;
- (unsigned long long)axis;
- (id)initWithDevice:axis:operation:;
- (void)setAxes:;
- (id)destinationArrayDescriptorForSourceArrays:sourceState:;
- (id)axes;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)dimensionsNotToBeBroadcast;
- (id)dimensionsToBeRetained;
- (id)workloadStatisticsForSourceArrays:destArrays:kernel:kernelDAGObject:sourceState:;
+ (id)libraryInfo:;
@end
