@interface IESLiveSaaSLauncher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)defaultTasks;
- (void)excuteRoutine;
- (id)importantTasks;
- (id)insignificantTasks;
- (void)start;
+ (id)shared;
@end
