@interface AWEThreadScheduleTask : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)scheduleMainThreadIfNeeded;
+ (void)scheduleThread:withPriority:;
+ (void)execute;
@end
