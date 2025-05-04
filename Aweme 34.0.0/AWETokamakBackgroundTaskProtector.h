@interface AWETokamakBackgroundTaskProtector : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)monitor:taskStarted:withContext:;
- (void)monitor:taskTimeout:withContext:;
- (void)start;
+ (id)shared;
@end
