@interface AWEPlayInteractionVideoDescriptionPreloadController : AWEPlayInteractionBaseController
@property (nonatomic) BOOL hasTriggerPreloadForPlayTime;
@property (nonatomic) BOOL hasTriggerPreloadForPlayFinish;
@property (nonatomic) BOOL isRunningService;
@property (nonatomic) BOOL hasPreloadSuccess;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onPlayerWillLoopPlaying:;
- (void)triggerPreLoadCalculateWithActionType:withCurrentAweme:;
- (BOOL)hasTriggerPreloadForPlayTime;
- (void)setHasTriggerPreloadForPlayTime:;
- (BOOL)hasTriggerPreloadForPlayFinish;
- (void)setHasTriggerPreloadForPlayFinish:;
- (void)addPreloadLogInfo:;
- (BOOL)hasPreloadSuccess;
- (BOOL)isRunningService;
- (void)setIsRunningService:;
- (void)setHasPreloadSuccess:;
- (void)viewDidLoad;
- (void)reset;
@end
