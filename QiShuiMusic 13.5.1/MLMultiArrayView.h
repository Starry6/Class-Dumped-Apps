@interface MLMultiArrayView : MLMultiArray
@property (nonatomic) MLMultiArray parent;
- (id)initSqueezingMultiArray:dimensions:error:;
- (void).cxx_destruct;
- (id)initExpandingDimensionsOfMultiArray:axis:;
- (id)parent;
- (id)initSlicingMultiArray:origin:shape:squeeze:error:;
+ (BOOL)isSqueezableShape:;
+ (BOOL)isSqueezableShape:dimensions:;
+ (void)squeezeShape:strides:resultingShape:resultingStrides:;
@end
