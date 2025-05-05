@interface HTSLiveLinkmicRoomBattleMatchSuccessContent : IESLivePBBaseMessage
@property (nonatomic) NSString mixRivalAnchorId;
@property (nonatomic) NSString mixOperatorUserId;
@property (nonatomic) NSInteger matchType;
@property (nonatomic) HTSLiveRoomBattleProcessInfo processInfo;
@property (nonatomic) BOOL hasProcessInfo;
@property (nonatomic) NSString rivalAnchorId;
@property (nonatomic) q rivalUserCount;
@property (nonatomic) q rivalChatRoomRank;
@property (nonatomic) q rivalFollowStatus;
@property (nonatomic) q inviteSource;
@property (nonatomic) NSString operatorUserId;
- (id)mixOperatorUserId;
- (id)mixRivalAnchorId;
+ (id)descriptor;
@end
