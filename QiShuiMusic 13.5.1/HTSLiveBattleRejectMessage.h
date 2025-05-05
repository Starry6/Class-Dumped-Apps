@interface HTSLiveBattleRejectMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q channelId;
@property (nonatomic) q battleId;
@property (nonatomic) q rejectUid;
@property (nonatomic) NSString multipleAgainPrompts;
@property (nonatomic) NSInteger inviteType;
+ (id)descriptor;
@end
