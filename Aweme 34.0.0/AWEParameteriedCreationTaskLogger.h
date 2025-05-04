@interface AWEParameteriedCreationTaskLogger : NSObject
+ (void)trackTaskDuration:info:;
+ (void)trackTask:stateChange:;
@end
