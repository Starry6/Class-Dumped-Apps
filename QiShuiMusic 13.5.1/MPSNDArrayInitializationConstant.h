@interface MPSNDArrayInitializationConstant : MPSNDArrayInitialization
@property (nonatomic) float constantValue;
- (id)initWithCoder:device:;
- (float)constantValue;
- (id)copyWithZone:device:;
- (id)initWithDevice:sourceCount:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
- (id)initWithDevice:constantValue:;
@end
