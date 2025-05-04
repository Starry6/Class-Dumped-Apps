@interface AWEIMInitNetworkTask : NSObject
+ (void)addBlockTask:;
+ (void)autoExecute;
+ (BOOL)isAvaliable;
+ (void)manualExecute;
+ (id)sharedArray;
+ (void)executeWithNetworkTagType:;
@end
