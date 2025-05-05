@interface BLSSharedWorkloop : NSObject
+ (id)workloop;
+ (void)dispatchWithQOSClass:block:;
+ (id)serialQueueWithQOSClass:label:;
@end
