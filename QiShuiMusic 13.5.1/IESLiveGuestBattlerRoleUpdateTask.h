@interface IESLiveGuestBattlerRoleUpdateTask : NSObject
@property (nonatomic) NSArray animItems;
@property (nonatomic) q completedAnimCount;
@property (nonatomic) <IESLiveGuestBattlerRoleUpdateTaskDelegate> delegate;
@property (nonatomic) <IESLiveGuestBattlerRoleUpdateExecutor> executor;
- (id)animItems;
- (long long)completedAnimCount;
- (void)setAnimItems:;
- (void)setCompletedAnimCount:;
- (void)stopWithLinkedUsersID:;
- (void)execute;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)executor;
- (void)setExecutor:;
@end
