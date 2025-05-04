@interface AWERLVirtualNodeHelper : NSObject
+ (id)containerView:;
+ (void)unmountFromView:;
+ (id)buildLayoutNodeTree:;
+ (void)computeLayout:maxSize:;
+ (void)mount:container:animator:;
+ (id)mountedView:;
+ (void)attachMountedView:view:;
+ (void)applyLayout:;
@end
