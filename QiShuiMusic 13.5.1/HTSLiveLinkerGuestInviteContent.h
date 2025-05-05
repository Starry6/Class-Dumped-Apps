@interface HTSLiveLinkerGuestInviteContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText inviteContent;
@property (nonatomic) BOOL hasInviteContent;
+ (id)descriptor;
@end
