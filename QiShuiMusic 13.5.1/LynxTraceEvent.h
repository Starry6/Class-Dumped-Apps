@interface LynxTraceEvent : NSObject
+ (void)instant:withName:withTimestamp:;
+ (void)beginSection:withName:;
+ (void)beginSection:withName:debugInfo:;
+ (BOOL)categoryEnabled:;
+ (void)counter:withName:withCounterValue:;
+ (void)endSection:;
+ (void)endSection:withName:;
+ (void)endSection:withName:debugInfo:;
+ (id)getRandomColor;
+ (void)instant:withName:;
+ (void)instant:withName:debugInfo:;
+ (void)instant:withName:withColor:;
+ (void)instant:withName:withTimestamp:debugInfo:;
+ (void)instant:withName:withTimestamp:withColor:;
+ (BOOL)registerTraceBackend:;
@end
