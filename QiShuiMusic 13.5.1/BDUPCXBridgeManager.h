@interface BDUPCXBridgeManager : NSObject
+ (id)interceptedMethods;
+ (id)methodsTarget;
+ (void)registerBridge;
+ (void)setInterceptedMethods:;
@end
