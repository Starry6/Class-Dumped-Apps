@interface HTSLiveRoomChannelAccessMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) HTSLiveUser inviter;
@property (nonatomic) BOOL hasInviter;
@property (nonatomic) q type;
+ (id)descriptor;
@end
