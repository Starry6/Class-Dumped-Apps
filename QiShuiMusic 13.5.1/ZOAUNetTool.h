@interface ZOAUNetTool : NSObject
- (void)dealloc;
- (BOOL)connectionRequired;
- (int)currentReachabilityStatus;
- (int)networkStatusForFlags:;
+ (id)reachabilityWithHostName:;
@end
