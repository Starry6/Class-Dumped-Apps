@interface BDUGLocationThread : NSObject
+ (void)destory;
+ (void)dispatchToLocationThread:;
+ (id)locationResidentThread;
+ (void)locationResidentThreadEntryPoint:;
+ (void)performBlock:;
@end
