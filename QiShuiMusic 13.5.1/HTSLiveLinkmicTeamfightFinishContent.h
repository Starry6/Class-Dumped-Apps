@interface HTSLiveLinkmicTeamfightFinishContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixFinishUserId;
@property (nonatomic) NSString finishToast;
@property (nonatomic) NSString guestFinishToast;
@property (nonatomic) NSInteger reason;
@property (nonatomic) q finishRoomId;
@property (nonatomic) NSString finishOpenId;
- (id)mixFinishUserId;
+ (id)descriptor;
@end
