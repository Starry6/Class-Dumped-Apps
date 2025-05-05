@interface MetalResizeFilter : MetalFilter
- (int)execFilterInput:Output:Block:;
- (id)init:;
+ (id)create:;
@end
