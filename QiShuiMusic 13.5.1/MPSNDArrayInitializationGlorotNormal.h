@interface MPSNDArrayInitializationGlorotNormal : MPSNDArrayInitialization
@property (nonatomic) Q FanIn;
@property (nonatomic) Q FanOut;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)initWithDevice:sourceCount:;
- (unsigned long long)kernelDimensionalityForDestinationArray:;
- (void)encodeToCommandBuffer:destinationArray:;
- (id)initWithDevice:seed:;
- (unsigned long long)FanIn;
- (void)setFanIn:;
- (unsigned long long)FanOut;
- (void)setFanOut:;
@end
