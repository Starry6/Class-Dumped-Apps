@interface BDUGLuckyTimerService : NSObject
@property (nonatomic) NSMutableDictionary taskItems;
@property (nonatomic) NSMutableArray requestingTokens;
@property (nonatomic) NSMutableArray needRemovedTokens;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__isTimerTaskExist:;
- (void)__removeTimerTaskWithTaskKey:;
- (void)createTimerTask:taskName:callback:;
- (id)needRemovedTokens;
- (void)onTimerTaskItemDestroy:;
- (void)removeTimerTaskWithToken:;
- (id)requestingTokens;
- (void)setNeedRemovedTokens:;
- (void)setRequestingTokens:;
- (void)setTaskItems:;
- (id)taskItems;
- (void).cxx_destruct;
+ (id)serviceProtocol;
@end
