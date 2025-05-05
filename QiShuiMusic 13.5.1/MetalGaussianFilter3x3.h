@interface MetalGaussianFilter3x3 : MetalFilter
- (int)execFilterInput:Output:Block:;
- (id)init:;
+ (id)create:;
@end
