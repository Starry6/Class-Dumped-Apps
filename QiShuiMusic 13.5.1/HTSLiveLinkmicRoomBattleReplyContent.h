@interface HTSLiveLinkmicRoomBattleReplyContent : IESLivePBBaseMessage
@property (nonatomic) NSInteger replyType;
@property (nonatomic) NSInteger startType;
@property (nonatomic) q inviteeRoomId;
@property (nonatomic) NSString inviteeOpenId;
@property (nonatomic) q followStatus;
@property (nonatomic) NSString replyOpenId;
@property (nonatomic) NSString replyToast;
@property (nonatomic) NSInteger replyOperate;
+ (id)descriptor;
@end
