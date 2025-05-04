@interface AWENearbyTaskRegistry : NSObject
+ (Class)classForTaskID:;
+ (void)registerClass:taskID:;
@end
