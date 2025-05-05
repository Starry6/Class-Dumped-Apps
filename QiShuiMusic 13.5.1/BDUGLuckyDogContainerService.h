@interface BDUGLuckyDogContainerService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fireEvent:params:;
- (void)fireTopVCEvent:params:;
- (void)pauseAllTasks;
- (void)resumeFromAllTasksPaused;
- (BOOL)topVCIsTargetPage:;
- (id)urlOfVC:;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
