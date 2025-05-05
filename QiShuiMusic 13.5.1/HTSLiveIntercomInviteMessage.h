@interface HTSLiveIntercomInviteMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q channelId;
+ (id)descriptor;
@end
