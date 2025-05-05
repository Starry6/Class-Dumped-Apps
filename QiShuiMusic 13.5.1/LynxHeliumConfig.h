@interface LynxHeliumConfig : NSObject
+ (void)setForceEnableAutoDestroyHelium;
+ (void)addWeakErrorHandler:;
+ (void)removeWeakErrorHandler:;
+ (void)setForceEnableCanvas;
+ (void)setOnErrorCallback:;
+ (void)setSmashUrlFallback:autoCheckSettings:;
@end
