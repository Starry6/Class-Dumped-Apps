@interface AWESearchDynamicTraceManager : NSObject
+ (void)instantWithName:;
+ (void)beginSectionWithName:;
+ (void)beginSectionWithName:debugInfo:;
+ (void)endSectionWithName:;
+ (void)endSectionWithName:debugInfo:;
+ (void)instantWithLogData:;
+ (void)endSection;
@end
