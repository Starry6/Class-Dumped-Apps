@interface AWERLComponentHelper2 : NSObject
+ (void)visitAllComponents:visitor:;
+ (void)buildComponent:delegate:params:;
+ (id)buildVirtualView:useDiffAlgorithm:;
+ (void)calculateLayout:maxSize:;
+ (void)mount:container:animation:;
+ (id)containerView:;
+ (void)__verifyNeedsBuildVirtualView:useDiffAlgorithm:;
+ (id)__buildVirtualViewRecursively:;
+ (void)__markVirtualViewNewAdded:exception:;
+ (void)__verifyCacheValidation:;
+ (void)unmountFromView:;
@end
