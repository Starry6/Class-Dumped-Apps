@interface HTSLiveBattleMatchInviteMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) q fromRoomId;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) q toRoomId;
@property (nonatomic) NSInteger inviteType;
@property (nonatomic) NSInteger matchType;
@property (nonatomic) q waitSec;
@property (nonatomic) NSString clientAttachedInfo;
@property (nonatomic) BattleLinkerInviteMessageExtra messageExtra;
@property (nonatomic) BOOL hasMessageExtra;
+ (id)descriptor;
@end
