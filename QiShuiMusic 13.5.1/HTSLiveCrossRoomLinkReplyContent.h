@interface HTSLiveCrossRoomLinkReplyContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixInviteeAnchorId;
@property (nonatomic) NSString mixReplyUserId;
@property (nonatomic) NSInteger replyType;
@property (nonatomic) q inviteeRoomId;
@property (nonatomic) NSInteger crossType;
@property (nonatomic) NSMutableArray guestInfosArray;
@property (nonatomic) Q guestInfosArray_Count;
@property (nonatomic) NSString inviteeOpenId;
@property (nonatomic) q followStatus;
@property (nonatomic) q inviteSource;
@property (nonatomic) NSString replyOpenId;
@property (nonatomic) NSString replyToast;
@property (nonatomic) NSInteger replyOperate;
@property (nonatomic) HTSLiveRoomBattleProcessInfo processInfo;
@property (nonatomic) BOOL hasProcessInfo;
- (id)mixInviteeAnchorId;
- (id)mixReplyUserId;
+ (id)descriptor;
@end
