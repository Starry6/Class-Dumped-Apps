@interface HTSLiveGuestBattleFinishContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixFinishUserId;
@property (nonatomic) NSInteger reason;
@property (nonatomic) NSString finishOpenId;
- (id)mixFinishUserId;
+ (id)descriptor;
@end
