@interface IESLiveGuestBattlerRoleUpdater : NSObject
@property (nonatomic) IESLiveGuestBattlerRoleUpdateTask executingTask;
@property (nonatomic) IESLiveGuestBattlerRoleUpdateTask cacheTask;
@property (nonatomic) BOOL isIdle;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cacheTask;
- (void)dealWithTask:;
- (void)didUpdateTaskFinish;
- (id)executingTask;
- (void)setCacheTask:;
- (void)setExecutingTask:;
- (void)setIsIdle:;
- (void)stopExecutingTaskWithLinkedUsersID:;
- (id)init;
- (id)serialQueue;
- (void)clear;
- (void).cxx_destruct;
- (BOOL)isIdle;
- (void)setSerialQueue:;
@end
