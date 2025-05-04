@interface AWEStudioExceptionUploader : NSObject
+ (void)uploadAllThreadExceptionWithStackTraceForType:params:filters:completion:;
+ (BOOL)isExceptionTrackingEnabledForType:;
+ (void)uploadUserExceptionWithoutStackTraceWithType:title:subtitle:params:filters:completion:;
@end
