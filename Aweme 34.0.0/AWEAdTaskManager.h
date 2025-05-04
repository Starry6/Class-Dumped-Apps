@interface AWEAdTaskManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)runTasks:withContext:;
+ (long long)runTypeTasks:withContext:;
+ (void)asyncRunTasks:withContext:;
+ (void)asyncRunTasks:withRawContext:;
+ (void)runBlockTasks:withContext:;
+ (BOOL)runTasks:withRawContext:;
+ (Class)taskClassWithType:;
+ (BOOL)runTasks:;
@end
