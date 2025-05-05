@interface RAWKernels : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)kernelWithName:group:;
- (id)kernelSourceForGroup:;
- (id)loadKernelsForGroup:;
+ (id)allocWithZone:;
+ (id)sharedKernels;
+ (id)kernelWithName:;
+ (id)kernelWithName:group:;
@end
