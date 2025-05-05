@interface MPSNDArrayInitializationRandomUniform : MPSNDArrayInitialization
@property (nonatomic) float minimum;
@property (nonatomic) float maximum;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (float)minimum;
- (float)maximum;
- (id)initWithDevice:sourceCount:;
- (unsigned long long)kernelDimensionalityForDestinationArray:;
- (id)initWithDevice:minimum:maximum:seed:;
@end
