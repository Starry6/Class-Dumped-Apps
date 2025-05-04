@interface AWEGrouponTaskRegistry : NSObject
+ (Class)classForTaskID:;
+ (void)registerClass:taskID:;
@end
