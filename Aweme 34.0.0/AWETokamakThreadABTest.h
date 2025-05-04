@interface AWETokamakThreadABTest : NSObject
+ (void)createGCDThread:;
+ (void)createPThread:;
+ (void)createPThread:withMemorySize:;
+ (void)execute;
@end
