@interface MPSNDArrayInitializationIdentity : MPSNDArrayInitialization
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)initWithDevice:;
- (id)initWithDevice:sourceCount:;
- (unsigned long long)kernelDimensionalityForSourceArrays:;
@end
