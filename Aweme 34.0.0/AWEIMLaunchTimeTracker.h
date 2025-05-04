@interface AWEIMLaunchTimeTracker : NSObject
+ (void)configInitTaskStart;
+ (void)configEntryTaskStart;
+ (double)initTaskStartTimestamp;
+ (double)entryTaskStartTimestamp;
+ (double)startIMStartTimestamp;
+ (void)configIMStart;
@end
