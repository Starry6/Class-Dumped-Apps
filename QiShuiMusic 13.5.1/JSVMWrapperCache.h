@interface JSVMWrapperCache : NSObject
+ (void)addWrapper:forJSContextGroupRef:;
+ (id)wrapperForJSContextGroupRef:;
@end
